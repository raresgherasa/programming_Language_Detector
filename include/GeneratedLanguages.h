#pragma once
#include <stddef.h>

struct LangEntry { const char* key; const char* value; };
struct ComplexRule { const char* language; const char** pos_patterns; size_t pos_count; const char** neg_patterns; size_t neg_count; };
struct DisambiguationEntry { const char* extension; const ComplexRule* rules; size_t rules_count; };

extern const LangEntry GENERATED_EXT_MAP[];
extern const size_t GENERATED_EXT_MAP_SIZE;
extern const LangEntry GENERATED_FILE_MAP[];
extern const size_t GENERATED_FILE_MAP_SIZE;
extern const LangEntry GENERATED_INTERP_MAP[];
extern const size_t GENERATED_INTERP_MAP_SIZE;
extern const DisambiguationEntry GENERATED_DISAMBIG_MAP[];
extern const size_t GENERATED_DISAMBIG_MAP_SIZE;
extern const LangEntry GENERATED_KEYWORDS[];
extern const size_t GENERATED_KEYWORDS_SIZE;
