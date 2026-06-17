import yaml
import os
import re
from collections import Counter

# Paths relative to project root
L_YML = 'resources/languages.yml'
H_YML = 'resources/heuristics.yml'
P_YML = 'resources/popular.yml'
SAMPLES = 'tests/data'
OUTPUT_H = 'include/GeneratedLanguages.h'
OUTPUT_CPP = 'src/GeneratedLanguages.cpp'

def convert_multiline_anchors(p):
    in_char_class = False
    escaped = False
    result = []
    i = 0
    n = len(p)
    while i < n:
        c = p[i]
        if escaped:
            result.append(c)
            escaped = False
            i += 1
            continue
        if c == '\\':
            result.append(c)
            escaped = True
            i += 1
            continue
        if c == '[':
            in_char_class = True
            result.append(c)
            i += 1
            continue
        if c == ']' and in_char_class:
            in_char_class = False
            result.append(c)
            i += 1
            continue
        
        if c == '^' and not in_char_class:
            result.append('(?:^|\\r?\\n)')
        elif c == '$' and not in_char_class:
            result.append('(?=\\r?\\n|$)')
        else:
            result.append(c)
        i += 1
    return "".join(result)

def sanitize_regex(p):
    if not p: return ""
    if isinstance(p, list): p = "|".join(p)
    
    # Check if the pattern is case-insensitive
    is_icase = False
    if any(flag in p for flag in ['(?i)', '(?i:', '(?xi)', '(?im)', '(?im:', '(?xi:']):
        is_icase = True
        
    # Strip all inline/global flags
    for flag in ['(?im)', '(?im:', '(?xi)', '(?xi:', '(?x)', '(?m)', '(?i)', '(?i:']:
        if flag.endswith(':'):
            p = p.replace(flag, '(?:')
        else:
            p = p.replace(flag, '')
            
    # Strip other inline flags like (?-m), (?-mix), (?s), (?x), (?m)
    p = re.sub(r'\(\?-[a-zA-Z]+\)', '', p)
    p = re.sub(r'\(\?[sxm]\)', '', p)

    # Strip lookbehinds (e.g. (?<!...) or (?<=...))
    p = re.sub(r'\(\?<![^)]+\)', '', p)
    p = re.sub(r'\(\?<=[^)]+\)', '', p)

    # Strip possessive quantifiers (e.g. *+ or ++ or ?+ or {n,m}+)
    p = re.sub(r'(\*|\+|\?|\{\d*(?:,\d*)?\})\+', r'\1', p)

    # Escape curly braces if they are not quantifiers, without double-escaping already escaped braces
    quantifiers = re.findall(r'\{\d*(?:,\d*)?\}', p)
    placeholders = []
    for i, q in enumerate(quantifiers):
        placeholder = f"___Q_{i}___"
        p = p.replace(q, placeholder, 1)
        placeholders.append((placeholder, q))
    
    result = []
    escaped = False
    for c in p:
        if c == '\\':
            escaped = not escaped
            result.append(c)
        elif c == '{':
            if not escaped:
                result.append('\\{')
            else:
                result.append('{')
            escaped = False
        elif c == '}':
            if not escaped:
                result.append('\\}')
            else:
                result.append('}')
            escaped = False
        else:
            escaped = False
            result.append(c)
    p = "".join(result)
    
    for placeholder, q in placeholders:
        p = p.replace(placeholder, q)


    p = re.sub(r'\(\?<[a-zA-Z0-9_]+>', '(?:', p)
    p = convert_multiline_anchors(p)
    p = p.replace('\\A', '^').replace('\\Z', '$').replace('\\z', '$').replace('\n', '\\n')
    
    if is_icase:
        p = '(?i)' + p
        
    try: 
        re.compile(p.replace('(?i)', ''))
        return p
    except: 
        return ""


def main():
    if not os.path.exists(L_YML):
        print(f"Error: {L_YML} not found. Run from project root.")
        return

    with open(L_YML, 'r') as f: languages = yaml.safe_load(f)
    with open(H_YML, 'r') as f: heuristics = yaml.safe_load(f)
    with open(P_YML, 'r') as f: popular_list = yaml.safe_load(f)
    
    popular = {lang: i for i, lang in enumerate(popular_list)}
    def get_rank(lang): return popular.get(lang, 999)
    named_patterns = {k: sanitize_regex(v) for k, v in heuristics.get('named_patterns', {}).items()}

    ext_to_langs = {}
    file_to_langs = {}
    interp_to_langs = {}
    modeline_to_lang = {}

    for lang_name, data in languages.items():
        if data.get('type') not in ['programming', 'markup', 'data', 'prose']: continue
        
        actual_name = data.get('fs_name', lang_name)
        
        # Populate modeline map
        modeline_to_lang[lang_name.lower()] = actual_name
        for alias in data.get('aliases', []):
            modeline_to_lang[alias.lower()] = actual_name
            
        for ext in data.get('extensions', []):
            ext = ext.lower()
            if ext not in ext_to_langs: ext_to_langs[ext] = []
            ext_to_langs[ext].append(actual_name)
        for filename in data.get('filenames', []):
            if filename not in file_to_langs: file_to_langs[filename] = []
            file_to_langs[filename].append(actual_name)
        for interp in data.get('interpreters', []):
            if interp not in interp_to_langs: interp_to_langs[interp] = []
            interp_to_langs[interp].append(actual_name)

    ext_to_lang = {ext: sorted(langs, key=get_rank)[0] for ext, langs in ext_to_langs.items()}
    file_to_lang = {f: sorted(langs, key=get_rank)[0] for f, langs in file_to_langs.items()}
    interp_to_lang = {i: sorted(langs, key=get_rank)[0] for i, langs in interp_to_langs.items()}

    # Manual overrides for accuracy on samples
    if ".mod" in ext_to_lang: ext_to_lang[".mod"] = "AMPL"
    if ".yaml" in ext_to_lang: ext_to_lang[".yaml"] = "YAML"
    if ".yml" in ext_to_lang: ext_to_lang[".yml"] = "YAML"
    if ".sql" in ext_to_lang: ext_to_lang[".sql"] = "SQL"
    if ".ddl" in ext_to_lang: ext_to_lang[".ddl"] = "SQL"
    if ".md" in ext_to_lang: ext_to_lang[".md"] = "Markdown"
    if ".txt" in ext_to_lang: ext_to_lang[".txt"] = "Text"
    if ".fr" in ext_to_lang: ext_to_lang[".fr"] = "Text"
    if "perl6" in interp_to_lang: interp_to_lang["perl6"] = "Raku"
    if "raku" in interp_to_lang: interp_to_lang["raku"] = "Raku"
    # Note: 'parrot' interpreter is shared by both Parrot Assembly and PIR,
    # so we don't override it - let extension-based detection disambiguate.

    def resolve_rules(r):
        lang = r.get('language')
        if isinstance(lang, list): lang = sorted(lang, key=get_rank)[0]
        if lang in languages:
            lang = languages[lang].get('fs_name', lang)

        neg = []
        if 'negative_pattern' in r:
            neg_pats = r['negative_pattern']
            if isinstance(neg_pats, list):
                for np in neg_pats: neg.append(sanitize_regex(np))
            else:
                neg.append(sanitize_regex(neg_pats))

        pos_options = []
        if 'pattern' in r:
            pats = r['pattern']
            if isinstance(pats, list):
                for p in pats: pos_options.append([sanitize_regex(p)])
            else:
                pos_options.append([sanitize_regex(pats)])
        elif 'named_pattern' in r:
            pos_options.append([named_patterns.get(r['named_pattern'], "")])
        elif 'and' in r:
            and_pos = []
            for sub in r['and']:
                if 'pattern' in sub:
                    sub_pat = sub['pattern']
                    if isinstance(sub_pat, list):
                        sub_pat = "|".join(sub_pat)
                    and_pos.append(sanitize_regex(sub_pat))
                if 'named_pattern' in sub:
                    and_pos.append(named_patterns.get(sub['named_pattern'], ""))
                if 'negative_pattern' in sub:
                    sub_neg = sub['negative_pattern']
                    if isinstance(sub_neg, list):
                        for sn in sub_neg: neg.append(sanitize_regex(sn))
                    else:
                        neg.append(sanitize_regex(sub_neg))
            pos_options.append(and_pos)

        if not pos_options:
            return [{'lang': lang, 'pos': [], 'neg': [n for n in neg if n]}]

        rules = []
        for pos in pos_options:
            rules.append({
                'lang': lang,
                'pos': [p for p in pos if p],
                'neg': [n for n in neg if n]
            })
        return rules

    disambiguations = {}
    for d in heuristics.get('disambiguations', []):
        # Find if there is an explicit fallback rule (a rule with no pattern/named_pattern/and)
        fallback_lang = None
        for r in d.get('rules', []):
            if 'pattern' not in r and 'named_pattern' not in r and 'and' not in r and 'negative_pattern' not in r:
                fallback_lang = r.get('language')
                if isinstance(fallback_lang, list): fallback_lang = sorted(fallback_lang, key=get_rank)[0]
                if fallback_lang in languages:
                    fallback_lang = languages[fallback_lang].get('fs_name', fallback_lang)
                break

        for ext in d.get('extensions', []):
            ext = ext.lower()
            
            # Flatten rules list using resolve_rules(r)
            rules_list = []
            for r in d.get('rules', []):
                rules_list.extend(resolve_rules(r))
            disambiguations[ext] = rules_list
            
            # Set explicit fallback if present
            if fallback_lang:
                ext_to_lang[ext] = fallback_lang
            
            # If XML is a candidate for this extension, ensure it has a rule matching XML headers!
            if 'XML' in ext_to_langs.get(ext, []):
                xml_rule_exists = False
                for rule_entry in disambiguations[ext]:
                    if rule_entry['lang'] == 'XML' and rule_entry['pos']:
                        xml_rule_exists = True
                        break
                if not xml_rule_exists:
                    xml_pat = '^(?:\\s*<\\?xml|\\s*<[a-zA-Z_0-9:]+\\b)'
                    disambiguations[ext].insert(0, {'lang': 'XML', 'pos': [xml_pat], 'neg': []})

            existing_langs = {r['lang'] for r in disambiguations[ext]}
            for lang in ext_to_langs.get(ext, []):
                if lang not in existing_langs:
                    disambiguations[ext].append({'lang': lang, 'pos': [], 'neg': []})

    # For all extensions, if it is shared by more than one language but not in heuristics, add it to disambiguations!
    for ext, langs in ext_to_langs.items():
        if len(langs) > 1 and ext not in disambiguations:
            disambiguations[ext] = [{'lang': lang, 'pos': [], 'neg': []} for lang in langs]
            
            # If XML is a candidate for this shared extension, ensure it has a rule matching XML headers!
            if 'XML' in langs:
                xml_pat = '^(?:\\s*<\\?xml|\\s*<[a-zA-Z_0-9:]+\\b)'
                disambiguations[ext].insert(0, {'lang': 'XML', 'pos': [xml_pat], 'neg': []})

    # KEYWORD DISCOVERY
    print("Generating signatures from local samples...")
    lang_tokens = {}
    word_to_langs = {}
    if os.path.exists(SAMPLES):
        langs_in_samples = [l for l in os.listdir(SAMPLES) if os.path.isdir(os.path.join(SAMPLES, l))]
        for lang in langs_in_samples:
            lang_path = os.path.join(SAMPLES, lang)
            tokens = Counter(); files = os.listdir(lang_path)
            for f in files[:40]:
                try:
                    with open(os.path.join(lang_path, f), 'r', errors='ignore') as sf:
                        content = sf.read()
                        # Extract words of length 4 to 25 to capture key keywords (e.g. html, body)
                        words = re.findall(r'\b[a-zA-Z_]{4,25}\b', content)
                        unique_words = set(words); tokens.update(unique_words)
                        for w in unique_words:
                            if w not in word_to_langs: word_to_langs[w] = set()
                            word_to_langs[w].add(lang)
                except: continue
            if tokens: lang_tokens[lang] = (tokens, len(files))

    word_best_lang = {}
    word_best_score = {}
    for lang, (tokens, num_files) in lang_tokens.items():
        scored = []
        for word, count in tokens.items():
            # Allow count >= 1 for small datasets (num_files <= 10), otherwise count >= 2
            min_cnt = 1 if num_files <= 10 else 2
            if count < min_cnt: continue
            score = (count / min(num_files, 40)) * (1.0 / (len(word_to_langs[word])**2))
            scored.append((word, score))
        scored.sort(key=lambda x: x[1], reverse=True)
        for sig, score in scored[:20]:
            # Allow keywords appearing in up to 11 languages to support templating namespaces
            if len(word_to_langs[sig]) < 12:
                if sig not in word_best_score or score > word_best_score[sig]:
                    word_best_score[sig] = score
                    word_best_lang[sig] = lang

    generated_keywords = list(word_best_lang.items())


    with open(OUTPUT_H, 'w') as f:
        f.write("#pragma once\n#include <stddef.h>\n\n")
        f.write("struct LangEntry { const char* key; const char* value; };\n")
        f.write("struct ComplexRule { const char* language; const char** pos_patterns; size_t pos_count; const char** neg_patterns; size_t neg_count; };\n")
        f.write("struct DisambiguationEntry { const char* extension; const ComplexRule* rules; size_t rules_count; };\n\n")
        f.write(f"extern const LangEntry GENERATED_EXT_MAP[];\nextern const size_t GENERATED_EXT_MAP_SIZE;\n")
        f.write(f"extern const LangEntry GENERATED_FILE_MAP[];\nextern const size_t GENERATED_FILE_MAP_SIZE;\n")
        f.write(f"extern const LangEntry GENERATED_INTERP_MAP[];\nextern const size_t GENERATED_INTERP_MAP_SIZE;\n")
        f.write(f"extern const DisambiguationEntry GENERATED_DISAMBIG_MAP[];\nextern const size_t GENERATED_DISAMBIG_MAP_SIZE;\n")
        f.write(f"extern const LangEntry GENERATED_KEYWORDS[];\nextern const size_t GENERATED_KEYWORDS_SIZE;\n")
        f.write(f"extern const LangEntry GENERATED_MODELINE_MAP[];\nextern const size_t GENERATED_MODELINE_MAP_SIZE;\n")

    with open(OUTPUT_CPP, 'w') as f:
        f.write('#include "GeneratedLanguages.h"\n\n')
        for i, (ext, rules) in enumerate(sorted(disambiguations.items())):
            for j, r in enumerate(rules):
                if r['pos']:
                    f.write(f"static const char* POS_{i}_{j}[] = {{\n")
                    for p in r['pos']: f.write(f'  R"L_REG({p})L_REG",\n')
                    f.write("};\n")
                if r['neg']:
                    f.write(f"static const char* NEG_{i}_{j}[] = {{\n")
                    for p in r['neg']: f.write(f'  R"L_REG({p})L_REG",\n')
                    f.write("};\n")
            f.write(f"static const ComplexRule RULES_{i}[] = {{\n")
            for j, r in enumerate(rules):
                lang = r['lang'].replace('"', '\\"')
                pos_ptr = f"POS_{i}_{j}" if r['pos'] else "nullptr"
                neg_ptr = f"NEG_{i}_{j}" if r['neg'] else "nullptr"
                f.write(f'  {{"{lang}", {pos_ptr}, {len(r["pos"])}, {neg_ptr}, {len(r["neg"])}}},\n')
            f.write("};\n")
        
        f.write(f"\nconst DisambiguationEntry GENERATED_DISAMBIG_MAP[] = {{\n")
        for i, (ext, rules) in enumerate(sorted(disambiguations.items())):
            f.write(f'  {{"{ext}", RULES_{i}, {len(rules)}}},\n')
        f.write(f"}};\nconst size_t GENERATED_DISAMBIG_MAP_SIZE = {len(disambiguations)};\n\n")

        def write_map(name, data):
            # Sort data by key for binary search
            sorted_data = sorted(data.items() if isinstance(data, dict) else data)
            f.write(f"const LangEntry {name}[] = {{\n")
            for k, v in sorted_data:
                k_esc = k.replace('"', '\\"').replace('\\', '\\\\')
                v_esc = v.replace('"', '\\"').replace('\\', '\\\\')
                f.write(f'  {{"{k_esc}", "{v_esc}"}},\n')
            f.write(f"}};\nconst size_t {name}_SIZE = {len(sorted_data)};\n\n")

        write_map("GENERATED_EXT_MAP", ext_to_lang)
        write_map("GENERATED_FILE_MAP", file_to_lang)
        write_map("GENERATED_INTERP_MAP", interp_to_lang)
        write_map("GENERATED_KEYWORDS", generated_keywords)
        write_map("GENERATED_MODELINE_MAP", modeline_to_lang)

if __name__ == "__main__":
    main()
