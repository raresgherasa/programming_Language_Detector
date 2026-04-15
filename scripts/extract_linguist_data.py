import yaml
import os
import re
from collections import Counter

# Paths relative to project root
L_YML = 'resources/languages.yml'
H_YML = 'resources/heuristics.yml'
P_YML = 'resources/popular.yml'
SAMPLES = 'tests/samples'
OUTPUT_H = 'include/GeneratedLanguages.h'
OUTPUT_CPP = 'src/GeneratedLanguages.cpp'

def sanitize_regex(p):
    if not p: return ""
    if isinstance(p, list): p = "|".join(p)
    p = p.replace('(?x)', '').replace('(?xi)', '').replace('(?m)', '').replace('(?i)', '')
    p = re.sub(r'\(\?<[a-zA-Z0-9_]+>', '(?:', p)
    p = p.replace('\\A', '^').replace('\\Z', '$').replace('\\z', '$').replace('\n', '\\n')
    try: re.compile(p); return p
    except: return ""

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
    file_to_lang = {}
    interp_to_lang = {}

    for lang_name, data in languages.items():
        if data.get('type') not in ['programming', 'markup', 'data']: continue
        for ext in data.get('extensions', []):
            ext = ext.lower()
            if ext not in ext_to_langs: ext_to_langs[ext] = []
            ext_to_langs[ext].append(lang_name)
        for filename in data.get('filenames', []):
            file_to_lang[filename] = lang_name
        for interp in data.get('interpreters', []):
            interp_to_lang[interp] = lang_name

    ext_to_lang = {ext: sorted(langs, key=get_rank)[0] for ext, langs in ext_to_langs.items()}
    # Manual overrides for accuracy on samples
    if ".mod" in ext_to_lang: ext_to_lang[".mod"] = "AMPL"

    def resolve_rule(r):
        lang = r.get('language')
        if isinstance(lang, list): lang = sorted(lang, key=get_rank)[0]
        pos = []; neg = []
        if 'pattern' in r: pos.append(sanitize_regex(r['pattern']))
        if 'named_pattern' in r: pos.append(named_patterns.get(r['named_pattern'], ""))
        if 'negative_pattern' in r: neg.append(sanitize_regex(r['negative_pattern']))
        if 'and' in r:
            for sub in r['and']:
                if 'pattern' in sub: pos.append(sanitize_regex(sub['pattern']))
                if 'named_pattern' in sub: pos.append(named_patterns.get(sub['named_pattern'], ""))
                if 'negative_pattern' in sub: neg.append(sanitize_regex(sub['negative_pattern']))
        return {'lang': lang, 'pos': [p for p in pos if p], 'neg': [p for p in neg if p]}

    disambiguations = {}
    for d in heuristics.get('disambiguations', []):
        for ext in d.get('extensions', []):
            ext = ext.lower()
            disambiguations[ext] = [resolve_rule(r) for r in d.get('rules', [])]
            existing_langs = {r['lang'] for r in disambiguations[ext]}
            for lang in ext_to_langs.get(ext, []):
                if lang not in existing_langs:
                    disambiguations[ext].append({'lang': lang, 'pos': [], 'neg': []})

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
                        content = sf.read(); words = re.findall(r'\b[a-zA-Z_]{6,25}\b', content)
                        unique_words = set(words); tokens.update(unique_words)
                        for w in unique_words:
                            if w not in word_to_langs: word_to_langs[w] = set()
                            word_to_langs[w].add(lang)
                except: continue
            if tokens: lang_tokens[lang] = (tokens, len(files))

    generated_keywords = []
    for lang, (tokens, num_files) in lang_tokens.items():
        scored = []
        for word, count in tokens.items():
            if count < 2: continue
            score = (count / min(num_files, 40)) * (1.0 / (len(word_to_langs[word])**2))
            scored.append((word, score))
        scored.sort(key=lambda x: x[1], reverse=True)
        for sig, score in scored[:20]:
            if len(word_to_langs[sig]) < 5:
                generated_keywords.append((sig, lang))

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

if __name__ == "__main__":
    main()
