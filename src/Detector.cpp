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
    
    const char* file_lang = binary_search_lookup(GENERATED_FILE_MAP, GENERATED_FILE_MAP_SIZE, filename.c_str());
    if (file_lang) return {file_lang, 1.0f, "Filename Analysis"};

    DetectionResult ext_res = detect_by_extension(filepath);
    if (ext_res.confidence == 1.0f) return ext_res;

    DetectionResult sig_res = detect_by_signature(filepath);
    if (sig_res.confidence == 1.0f) return sig_res;

    DetectionResult heur_res = detect_by_heuristics(filepath);
    if (heur_res.confidence > 0.0f) return heur_res;

    return {"Unknown", 0.0f, "Fallback"};
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
            string chunk = read_file_chunk(filepath, 32768);
            if (!chunk.empty()) {
                for (size_t i = 0; i < disambig->rules_count; ++i) {
                    const auto& rule = disambig->rules[i];
                    bool match = true;
                    // All positive patterns must match (AND)
                    for (size_t j = 0; j < rule.pos_count; ++j) {
                        try {
                            regex re(rule.pos_patterns[j], regex::nosubs | regex::optimize);
                            if (!regex_search(chunk, re)) { match = false; break; }
                        } catch (...) { match = false; break; }
                    }
                    if (!match) continue;
                    // None of the negative patterns must match
                    for (size_t j = 0; j < rule.neg_count; ++j) {
                        try {
                            regex re(rule.neg_patterns[j], regex::nosubs | regex::optimize);
                            if (regex_search(chunk, re)) { match = false; break; }
                        } catch (...) {}
                    }
                    if (match && (rule.pos_count > 0 || rule.neg_count > 0)) 
                        return {rule.language, 1.0f, "Extension Analysis (Complex Heuristic Match)"};
                    if (match && rule.pos_count == 0 && rule.neg_count == 0)
                        return {rule.language, 1.0f, "Extension Analysis (Heuristic Fallback)"};
                }
            }
        }

        const char* lang = binary_search_lookup(GENERATED_EXT_MAP, GENERATED_EXT_MAP_SIZE, ext.c_str());
        if (lang) return {lang, 1.0f, "Extension Analysis"};
        
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
    string chunk = read_file_chunk(filepath, 256);
    if (chunk.empty()) return {"", 0.0f, ""};

    if (chunk.rfind("#!", 0) == 0) {
        size_t newline = chunk.find('\n');
        string shebang = chunk.substr(0, (newline == string::npos) ? chunk.size() : newline);
        
        // Split by space to handle options and /usr/bin/env
        vector<string> parts;
        size_t last = 2, next = 0;
        while ((next = shebang.find_first_of(" \t", last)) != string::npos) {
            parts.push_back(shebang.substr(last, next - last));
            last = next + 1;
        }
        parts.push_back(shebang.substr(last));

        for (const auto& part : parts) {
            if (part == "/usr/bin/env") continue;
            size_t slash = part.find_last_of("/");
            string p = (slash == string::npos) ? part : part.substr(slash+1);
            if (p.empty()) continue;
            
            // Try to match the interpreter
            const char* lang = binary_search_lookup(GENERATED_INTERP_MAP, GENERATED_INTERP_MAP_SIZE, p.c_str());
            if (lang) return {lang, 1.0f, "Signature Analysis"};

            // Some specific handling for versioned names like python3
            if (p.size() > 1 && isdigit(p.back())) {
                string base = p;
                while (!base.empty() && isdigit(base.back())) base.pop_back();
                lang = binary_search_lookup(GENERATED_INTERP_MAP, GENERATED_INTERP_MAP_SIZE, base.c_str());
                if (lang) return {lang, 1.0f, "Signature Analysis"};
            }
        }
    }
    return {"", 0.0f, ""};
}


DetectionResult LanguageDetector::detect_by_heuristics(const std::string& filepath) {
    string chunk = read_file_chunk(filepath, 32768); // Larger buffer for signature tokens
    if (chunk.empty()) return {"", 0.0f, ""};

    struct Score { string lang; int count; };
    vector<Score> scores;
    
    // Check generated keywords
    for (size_t i = 0; i < GENERATED_KEYWORDS_SIZE; ++i) {
        if (chunk.find(GENERATED_KEYWORDS[i].key) != string::npos) {
            string val = GENERATED_KEYWORDS[i].value;
            bool found = false;
            for (auto& s : scores) { if (s.lang == val) { s.count++; found = true; break; } }
            if (!found) scores.push_back({val, 1});
        }
    }

    string best_lang = ""; int best_score = 0;
    for (const auto& s : scores) { if (s.count > best_score) { best_score = s.count; best_lang = s.lang; } }
    
    if (best_score >= 2) return {best_lang, 0.9f, "Semantic Heuristics (Keyword Match)"};
    if (best_score == 1) return {best_lang, 0.5f, "Semantic Heuristics (Weak Match)"};
    
    return {"", 0.0f, ""};
}



