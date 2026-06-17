#include "Detector.h"
#include "GeneratedLanguages.h"
#include <fstream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <regex>

using namespace std;

// Binary search helper for generated static maps
const char* binary_search_lookup(const LangEntry* map, size_t size, const char* key) {
    if (size == 0) return nullptr;
    size_t low = 0, high = size - 1;
    while (low <= high) {
        size_t mid = low + (high - low) / 2;
        int cmp = strcmp(key, map[mid].key);
        if (cmp == 0) return map[mid].value;
        if (cmp < 0) { if (mid == 0) break; high = mid - 1; }
        else { low = mid + 1; }
    }
    return nullptr;
}

const DisambiguationEntry* binary_search_disambig(const char* ext) {
    size_t size = GENERATED_DISAMBIG_MAP_SIZE;
    if (size == 0) return nullptr;
    size_t low = 0, high = size - 1;
    while (low <= high) {
        size_t mid = low + (high - low) / 2;
        int cmp = strcmp(ext, GENERATED_DISAMBIG_MAP[mid].extension);
        if (cmp == 0) return &GENERATED_DISAMBIG_MAP[mid];
        if (cmp < 0) { if (mid == 0) break; high = mid - 1; }
        else { low = mid + 1; }
    }
    return nullptr;
}

// Simple heuristic keyword scoring mapping
static const struct { const char* key; const char* val; } KEYWORDS[] = {
    {"#include", "C++"}, {"std::", "C++"}, {"cout", "C++"},
    {"def ", "Python"}, {"import sys", "Python"},
    {"public static void main", "Java"}, {"System.out.println", "Java"},
    {"console.log", "JavaScript"}, {"const ", "JavaScript"},
    {"fn ", "Rust"}, {"let mut", "Rust"},
    {"func ", "Go"}, {"fmt.Println", "Go"},
    {"<?php", "PHP"}, {"using System;", "C#"},
    {"package ", "Java"}, {"struct ", "C++"},
    {"<html>", "HTML"}, {"<body>", "HTML"}
};

DetectionResult LanguageDetector::detect(const std::string& filepath) {
    size_t last_slash = filepath.find_last_of("/\\");
    string filename = (last_slash == string::npos) ? filepath : filepath.substr(last_slash + 1);
    
    // 1. Filename Analysis
    const char* file_lang = binary_search_lookup(GENERATED_FILE_MAP, GENERATED_FILE_MAP_SIZE, filename.c_str());
    if (file_lang) return {file_lang, 1.0f, "Filename Analysis"};

    // Read initial chunk for modeline analysis
    string chunk = read_file_chunk(filepath, 32768);

    // 2. Modeline Analysis (Explicit user overrides like vim: ft=cpp)
    DetectionResult modeline_res = detect_by_modeline(chunk);
    if (modeline_res.confidence == 1.0f) return modeline_res;

    // 3. Shebang / Signature Analysis (High confidence interpreter matching)
    DetectionResult sig_res = detect_by_signature(filepath);
    if (sig_res.confidence == 1.0f) return sig_res;

    // 4. Extension Analysis (With disambiguation and fallback)
    DetectionResult ext_res = detect_by_extension(filepath);
    if (ext_res.confidence == 1.0f) return ext_res;

    // 5. Fallback to generic heuristics (for files without extension or unknown extension)
    DetectionResult heur_res = detect_by_heuristics(filepath);
    if (heur_res.confidence > 0.0f) return heur_res;

    return {"Unknown", 0.0f, "Fallback"};
}

DetectionResult LanguageDetector::detect_by_modeline(const std::string& chunk) {
    if (chunk.empty()) return {"", 0.0f, ""};
    
    vector<string> lines;
    
    // First 5 lines
    size_t pos = 0;
    for (int i = 0; i < 5 && pos < chunk.size(); ++i) {
        size_t next_line = chunk.find('\n', pos);
        if (next_line == string::npos) {
            lines.push_back(chunk.substr(pos));
            break;
        }
        lines.push_back(chunk.substr(pos, next_line - pos));
        pos = next_line + 1;
    }
    
    // Last 5 lines
    pos = chunk.size();
    vector<string> last_lines;
    for (int i = 0; i < 5 && pos > 0; ++i) {
        size_t prev_line = chunk.rfind('\n', pos - 1);
        if (prev_line == string::npos) {
            last_lines.push_back(chunk.substr(0, pos));
            break;
        }
        last_lines.push_back(chunk.substr(prev_line + 1, pos - (prev_line + 1)));
        pos = prev_line;
    }
    lines.insert(lines.end(), last_lines.begin(), last_lines.end());

    try {
        regex vim_re(R"(\b(?:vim|vi|ex)\s*:(?:\s*set)?\s*(?:ft|filetype|syntax)\s*=([a-zA-Z0-9_+-]+))", regex::optimize | regex::icase);
        regex emacs_re(R"(-\*-\s*(?:js|mode)\s*:\s*([a-zA-Z0-9_+-]+)\s*-\*-)", regex::optimize | regex::icase);

        for (const auto& line : lines) {
            smatch m;
            if (regex_search(line, m, vim_re) || regex_search(line, m, emacs_re)) {
                if (m.size() > 1) {
                    string ft = m[1].str();
                    transform(ft.begin(), ft.end(), ft.begin(), ::tolower);
                    
                    // Strip "-mode" suffix if present
                    if (ft.size() > 5 && ft.rfind("-mode") == ft.size() - 5) {
                        ft = ft.substr(0, ft.size() - 5);
                    }
                    
                    const char* lang = binary_search_lookup(GENERATED_MODELINE_MAP, GENERATED_MODELINE_MAP_SIZE, ft.c_str());
                    if (lang) {
                        return {lang, 1.0f, "Modeline Analysis"};
                    }
                }
            }
        }
    } catch (...) {}
    
    return {"", 0.0f, ""};
}

DetectionResult LanguageDetector::detect_by_extension(const std::string& filepath) {
    size_t last_slash = filepath.find_last_of("/\\");
    string filename = (last_slash == string::npos) ? filepath : filepath.substr(last_slash + 1);
    
    size_t dot_pos = filename.find('.');
    while (dot_pos != string::npos) {
        string ext = filename.substr(dot_pos);
        transform(ext.begin(), ext.end(), ext.begin(), ::tolower);
        
        const DisambiguationEntry* disambig = binary_search_disambig(ext.c_str());
        if (disambig) {
            string chunk = read_file_chunk(filepath, 131072); // 128KB for deep heuristic markers
            if (!chunk.empty()) {
                // Track the first empty (catch-all) rule as fallback
                const char* fallback_lang = nullptr;
                
                for (size_t i = 0; i < disambig->rules_count; ++i) {
                    const auto& rule = disambig->rules[i];
                    
                    // Empty rules (no patterns) are catch-all fallbacks
                    if (rule.pos_count == 0 && rule.neg_count == 0) {
                        if (!fallback_lang) fallback_lang = rule.language;
                        continue;
                    }
                    
                    bool match = true;
                    // All positive patterns must match (AND)
                    for (size_t j = 0; j < rule.pos_count; ++j) {
                        try {
                            string pat = rule.pos_patterns[j];
                            auto flags = regex::nosubs | regex::optimize;
                            if (pat.rfind("(?i)", 0) == 0) {
                                pat = pat.substr(4);
                                flags |= regex::icase;
                            }
                            regex re(pat, flags);
                            if (!regex_search(chunk, re)) { match = false; break; }
                        } catch (...) { match = false; break; }
                    }
                    if (!match) continue;
                    // None of the negative patterns must match
                    for (size_t j = 0; j < rule.neg_count; ++j) {
                        try {
                            string pat = rule.neg_patterns[j];
                            auto flags = regex::nosubs | regex::optimize;
                            if (pat.rfind("(?i)", 0) == 0) {
                                pat = pat.substr(4);
                                flags |= regex::icase;
                            }
                            regex re(pat, flags);
                            if (regex_search(chunk, re)) { match = false; break; }
                        } catch (...) {}
                    }
                    if (match) 
                        return {rule.language, 1.0f, "Extension Analysis (Complex Heuristic Match)"};
                }
                
                // If a catch-all fallback rule was found, use it
                if (fallback_lang) {
                    return {fallback_lang, 1.0f, "Extension Analysis (Heuristic Fallback)"};
                }
            }
            
            // Rules didn't match. Try keyword heuristics to disambiguate.
            DetectionResult heur_res = detect_by_heuristics(filepath);
            if (heur_res.confidence > 0.0f) {
                // Verify that the heuristics language is one of the candidate languages for this extension
                bool is_candidate = false;
                for (size_t i = 0; i < disambig->rules_count; ++i) {
                    if (strcmp(disambig->rules[i].language, heur_res.language.c_str()) == 0) {
                        is_candidate = true;
                        break;
                    }
                }
                if (is_candidate) {
                    return {heur_res.language, heur_res.confidence, "Extension Analysis (Heuristic Disambiguation)"};
                }
            }

            // Fall back to default mapping for this ambiguous extension
            const char* default_lang = binary_search_lookup(GENERATED_EXT_MAP, GENERATED_EXT_MAP_SIZE, ext.c_str());
            if (default_lang) return {default_lang, 1.0f, "Extension Analysis (Default Fallback)"};
        } else {
            // Unambiguous extension
            const char* lang = binary_search_lookup(GENERATED_EXT_MAP, GENERATED_EXT_MAP_SIZE, ext.c_str());
            if (lang) return {lang, 1.0f, "Extension Analysis"};
        }
        
        dot_pos = filename.find('.', dot_pos + 1);
    }
    return {"", 0.0f, ""};
}

std::string LanguageDetector::read_file_chunk(const std::string& filepath, size_t chunk_size) {
    ifstream file(filepath, ios::binary);
    if (!file.is_open()) return "";
    string buffer(chunk_size, '\0');
    file.read(&buffer[0], chunk_size);
    buffer.resize(file.gcount());
    return buffer;
}

DetectionResult LanguageDetector::detect_by_signature(const std::string& filepath) {
    string chunk = read_file_chunk(filepath, 1024); // Read larger header for wrapper scripts
    if (chunk.empty()) return {"", 0.0f, ""};

    if (chunk.rfind("#!", 0) == 0) {
        size_t newline = chunk.find('\n');
        string shebang = chunk.substr(0, (newline == string::npos) ? chunk.size() : newline);
        
        // Handle osascript with JavaScript flag
        if (shebang.find("osascript") != string::npos && shebang.find("JavaScript") != string::npos) {
            return {"JavaScript", 1.0f, "Signature Analysis"};
        }
        
        // Split by whitespace robustly to handle options and /usr/bin/env
        vector<string> parts;
        string current = "";
        for (size_t idx = 2; idx < shebang.size(); ++idx) {
            char c = shebang[idx];
            if (c == ' ' || c == '\t' || c == '\r') {
                if (!current.empty()) {
                    parts.push_back(current);
                    current = "";
                }
            } else {
                current.push_back(c);
            }
        }
        if (!current.empty()) {
            parts.push_back(current);
        }

        // Determine main interpreter for exec wrapper detection
        string main_interpreter = "";
        for (const auto& part : parts) {
            if (part == "/usr/bin/env") continue;
            size_t slash = part.find_last_of("/");
            string p = (slash == string::npos) ? part : part.substr(slash+1);
            if (p.empty()) continue;
            
            // Remove trailing digits and dots if versioned (e.g. python2.4)
            if (p.size() > 1 && (isdigit(p.back()) || p.back() == '.')) {
                while (!p.empty() && (isdigit(p.back()) || p.back() == '.')) p.pop_back();
            }
            main_interpreter = p;
            break;
        }

        // If interpreter is a shell, check for exec wrapper on second line
        if (main_interpreter == "sh" || main_interpreter == "bash" || main_interpreter == "dash" || main_interpreter == "zsh") {
            if (newline != string::npos && newline + 1 < chunk.size()) {
                size_t second_newline = chunk.find('\n', newline + 1);
                string second_line = chunk.substr(newline + 1, (second_newline == string::npos) ? string::npos : second_newline - (newline + 1));
                
                // Trim leading whitespace
                size_t first_non_space = second_line.find_first_not_of(" \t\r");
                if (first_non_space != string::npos && second_line.substr(first_non_space, 5) == "exec ") {
                    string exec_cmd = second_line.substr(first_non_space + 5);
                    size_t cmd_space = exec_cmd.find_first_of(" \t\r\n");
                    string wrapper_interp = (cmd_space == string::npos) ? exec_cmd : exec_cmd.substr(0, cmd_space);
                    size_t wslash = wrapper_interp.find_last_of("/");
                    string wp = (wslash == string::npos) ? wrapper_interp : wrapper_interp.substr(wslash+1);
                    
                    if (!wp.empty()) {
                        // Strip version suffix
                        if (wp.size() > 1 && (isdigit(wp.back()) || wp.back() == '.')) {
                            while (!wp.empty() && (isdigit(wp.back()) || wp.back() == '.')) wp.pop_back();
                        }
                        const char* lang = binary_search_lookup(GENERATED_INTERP_MAP, GENERATED_INTERP_MAP_SIZE, wp.c_str());
                        if (lang) return {lang, 1.0f, "Signature Analysis (Exec Wrapper)"};
                    }
                }
            }
        }

        // Try each part of the shebang as an interpreter
        for (const auto& part : parts) {
            if (part == "/usr/bin/env") continue;
            size_t slash = part.find_last_of("/");
            string p = (slash == string::npos) ? part : part.substr(slash+1);
            if (p.empty()) continue;
            
            // Try to match the interpreter directly
            const char* lang = binary_search_lookup(GENERATED_INTERP_MAP, GENERATED_INTERP_MAP_SIZE, p.c_str());
            if (lang) return {lang, 1.0f, "Signature Analysis"};

            // Handle versioned names (python3, python2.4, perl5.30)
            if (p.size() > 1 && (isdigit(p.back()) || p.back() == '.')) {
                string base = p;
                while (!base.empty() && (isdigit(base.back()) || base.back() == '.')) base.pop_back();
                lang = binary_search_lookup(GENERATED_INTERP_MAP, GENERATED_INTERP_MAP_SIZE, base.c_str());
                if (lang) return {lang, 1.0f, "Signature Analysis"};
            }
        }
    }
    return {"", 0.0f, ""};
}

DetectionResult LanguageDetector::detect_by_heuristics(const std::string& filepath) {
    string chunk = read_file_chunk(filepath, 131072); // 128KB buffer for keyword detection
    if (chunk.empty()) return {"", 0.0f, ""};

    // Extract unique words from chunk of length 4 to 25
    vector<string> words;
    size_t idx = 0;
    while (idx < chunk.size()) {
        char c = chunk[idx];
        if (isalpha(c) || c == '_') {
            size_t start = idx;
            while (idx < chunk.size() && (isalpha(chunk[idx]) || chunk[idx] == '_')) {
                idx++;
            }
            size_t len = idx - start;
            if (len >= 4 && len <= 25) {
                words.push_back(chunk.substr(start, len));
            }
        } else {
            idx++;
        }
    }

    // De-duplicate words
    sort(words.begin(), words.end());
    words.erase(unique(words.begin(), words.end()), words.end());

    struct Score { string lang; int count; };
    vector<Score> scores;

    // Look up words in GENERATED_KEYWORDS map using binary search
    for (const auto& w : words) {
        const char* lang = binary_search_lookup(GENERATED_KEYWORDS, GENERATED_KEYWORDS_SIZE, w.c_str());
        if (lang) {
            bool found = false;
            for (auto& s : scores) {
                if (s.lang == lang) {
                    s.count++;
                    found = true;
                    break;
                }
            }
            if (!found) scores.push_back({lang, 1});
        }
    }

    string best_lang = ""; int best_score = 0;
    for (const auto& s : scores) {
        if (s.count > best_score) {
            best_score = s.count;
            best_lang = s.lang;
        }
    }
    
    if (best_score >= 2) return {best_lang, 0.9f, "Semantic Heuristics (Keyword Match)"};
    if (best_score == 1) return {best_lang, 0.5f, "Semantic Heuristics (Weak Match)"};
    
    return {"", 0.0f, ""};
}
