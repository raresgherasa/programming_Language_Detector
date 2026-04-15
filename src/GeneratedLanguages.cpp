#include "GeneratedLanguages.h"

static const char* POS_0_0[] = {
  R"L_REG(^[.'][ \t]*Dd +(?:[^"\s]+|"[^"]+"))L_REG",
  R"L_REG(^[.'][ \t]*Dt +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*Sh +(?:[^"\s]|"[^"]+"))L_REG",
};
static const char* POS_0_1[] = {
  R"L_REG(^[.'][ \t]*TH +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*SH +(?:[^"\s]+|"[^"\s]+))L_REG",
};
static const char* POS_0_2[] = {
  R"L_REG(^\.(?:[A-Za-z]{2}(?:\s|$)|\\"))L_REG",
};
static const ComplexRule RULES_0[] = {
  {"Roff Manpage", POS_0_0, 3, nullptr, 0},
  {"Roff Manpage", POS_0_1, 2, nullptr, 0},
  {"Roff", POS_0_2, 1, nullptr, 0},
  {"Text", nullptr, 0, nullptr, 0},
};
static const char* POS_1_0[] = {
  R"L_REG(^[.'][ \t]*Dd +(?:[^"\s]+|"[^"]+"))L_REG",
  R"L_REG(^[.'][ \t]*Dt +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*Sh +(?:[^"\s]|"[^"]+"))L_REG",
};
static const char* POS_1_1[] = {
  R"L_REG(^[.'][ \t]*TH +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*SH +(?:[^"\s]+|"[^"\s]+))L_REG",
};
static const ComplexRule RULES_1[] = {
  {"Roff Manpage", POS_1_0, 3, nullptr, 0},
  {"Roff Manpage", POS_1_1, 2, nullptr, 0},
  {"Roff", nullptr, 0, nullptr, 0},
};
static const char* POS_2_0[] = {
  R"L_REG(^[.'][ \t]*Dd +(?:[^"\s]+|"[^"]+"))L_REG",
  R"L_REG(^[.'][ \t]*Dt +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*Sh +(?:[^"\s]|"[^"]+"))L_REG",
};
static const char* POS_2_1[] = {
  R"L_REG(^[.'][ \t]*TH +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*SH +(?:[^"\s]+|"[^"\s]+))L_REG",
};
static const ComplexRule RULES_2[] = {
  {"Roff Manpage", POS_2_0, 3, nullptr, 0},
  {"Roff Manpage", POS_2_1, 2, nullptr, 0},
  {"Roff", nullptr, 0, nullptr, 0},
};
static const char* POS_3_0[] = {
  R"L_REG(^[.'][ \t]*Dd +(?:[^"\s]+|"[^"]+"))L_REG",
  R"L_REG(^[.'][ \t]*Dt +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*Sh +(?:[^"\s]|"[^"]+"))L_REG",
};
static const char* POS_3_1[] = {
  R"L_REG(^[.'][ \t]*TH +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*SH +(?:[^"\s]+|"[^"\s]+))L_REG",
};
static const ComplexRule RULES_3[] = {
  {"Roff Manpage", POS_3_0, 3, nullptr, 0},
  {"Roff Manpage", POS_3_1, 2, nullptr, 0},
  {"Roff", nullptr, 0, nullptr, 0},
};
static const char* POS_4_0[] = {
  R"L_REG(^[.'][ \t]*Dd +(?:[^"\s]+|"[^"]+"))L_REG",
  R"L_REG(^[.'][ \t]*Dt +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*Sh +(?:[^"\s]|"[^"]+"))L_REG",
};
static const char* POS_4_1[] = {
  R"L_REG(^[.'][ \t]*TH +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*SH +(?:[^"\s]+|"[^"\s]+))L_REG",
};
static const char* POS_4_2[] = {
  R"L_REG(^\.(?:[A-Za-z]{2}(?:\s|$)|\\"))L_REG",
};
static const ComplexRule RULES_4[] = {
  {"Roff Manpage", POS_4_0, 3, nullptr, 0},
  {"Roff Manpage", POS_4_1, 2, nullptr, 0},
  {"Roff", POS_4_2, 1, nullptr, 0},
  {"Text", nullptr, 0, nullptr, 0},
};
static const char* POS_5_0[] = {
  R"L_REG(^[.'][ \t]*Dd +(?:[^"\s]+|"[^"]+"))L_REG",
  R"L_REG(^[.'][ \t]*Dt +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*Sh +(?:[^"\s]|"[^"]+"))L_REG",
};
static const char* POS_5_1[] = {
  R"L_REG(^[.'][ \t]*TH +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*SH +(?:[^"\s]+|"[^"\s]+))L_REG",
};
static const char* POS_5_2[] = {
  R"L_REG(^\.(?:[A-Za-z]{2}(?:\s|$)|\\"))L_REG",
};
static const ComplexRule RULES_5[] = {
  {"Roff Manpage", POS_5_0, 3, nullptr, 0},
  {"Roff Manpage", POS_5_1, 2, nullptr, 0},
  {"Roff", POS_5_2, 1, nullptr, 0},
  {"Text", nullptr, 0, nullptr, 0},
};
static const char* POS_6_0[] = {
  R"L_REG(^[.'][ \t]*Dd +(?:[^"\s]+|"[^"]+"))L_REG",
  R"L_REG(^[.'][ \t]*Dt +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*Sh +(?:[^"\s]|"[^"]+"))L_REG",
};
static const char* POS_6_1[] = {
  R"L_REG(^[.'][ \t]*TH +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*SH +(?:[^"\s]+|"[^"\s]+))L_REG",
};
static const ComplexRule RULES_6[] = {
  {"Roff Manpage", POS_6_0, 3, nullptr, 0},
  {"Roff Manpage", POS_6_1, 2, nullptr, 0},
  {"Roff", nullptr, 0, nullptr, 0},
};
static const char* POS_7_0[] = {
  R"L_REG(^[.'][ \t]*Dd +(?:[^"\s]+|"[^"]+"))L_REG",
  R"L_REG(^[.'][ \t]*Dt +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*Sh +(?:[^"\s]|"[^"]+"))L_REG",
};
static const char* POS_7_1[] = {
  R"L_REG(^[.'][ \t]*TH +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*SH +(?:[^"\s]+|"[^"\s]+))L_REG",
};
static const ComplexRule RULES_7[] = {
  {"Roff Manpage", POS_7_0, 3, nullptr, 0},
  {"Roff Manpage", POS_7_1, 2, nullptr, 0},
  {"Roff", nullptr, 0, nullptr, 0},
};
static const char* POS_8_0[] = {
  R"L_REG(^[.'][ \t]*Dd +(?:[^"\s]+|"[^"]+"))L_REG",
  R"L_REG(^[.'][ \t]*Dt +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*Sh +(?:[^"\s]|"[^"]+"))L_REG",
};
static const char* POS_8_1[] = {
  R"L_REG(^[.'][ \t]*TH +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*SH +(?:[^"\s]+|"[^"\s]+))L_REG",
};
static const ComplexRule RULES_8[] = {
  {"Roff Manpage", POS_8_0, 3, nullptr, 0},
  {"Roff Manpage", POS_8_1, 2, nullptr, 0},
  {"Roff", nullptr, 0, nullptr, 0},
};
static const char* POS_9_0[] = {
  R"L_REG(^[.'][ \t]*Dd +(?:[^"\s]+|"[^"]+"))L_REG",
  R"L_REG(^[.'][ \t]*Dt +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*Sh +(?:[^"\s]|"[^"]+"))L_REG",
};
static const char* POS_9_1[] = {
  R"L_REG(^[.'][ \t]*TH +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*SH +(?:[^"\s]+|"[^"\s]+))L_REG",
};
static const ComplexRule RULES_9[] = {
  {"Roff Manpage", POS_9_0, 3, nullptr, 0},
  {"Roff Manpage", POS_9_1, 2, nullptr, 0},
  {"Roff", nullptr, 0, nullptr, 0},
};
static const char* POS_10_0[] = {
  R"L_REG(^[.'][ \t]*Dd +(?:[^"\s]+|"[^"]+"))L_REG",
  R"L_REG(^[.'][ \t]*Dt +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*Sh +(?:[^"\s]|"[^"]+"))L_REG",
};
static const char* POS_10_1[] = {
  R"L_REG(^[.'][ \t]*TH +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*SH +(?:[^"\s]+|"[^"\s]+))L_REG",
};
static const ComplexRule RULES_10[] = {
  {"Roff Manpage", POS_10_0, 3, nullptr, 0},
  {"Roff Manpage", POS_10_1, 2, nullptr, 0},
  {"Roff", nullptr, 0, nullptr, 0},
};
static const char* POS_11_0[] = {
  R"L_REG(^[.'][ \t]*Dd +(?:[^"\s]+|"[^"]+"))L_REG",
  R"L_REG(^[.'][ \t]*Dt +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*Sh +(?:[^"\s]|"[^"]+"))L_REG",
};
static const char* POS_11_1[] = {
  R"L_REG(^[.'][ \t]*TH +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*SH +(?:[^"\s]+|"[^"\s]+))L_REG",
};
static const ComplexRule RULES_11[] = {
  {"Roff Manpage", POS_11_0, 3, nullptr, 0},
  {"Roff Manpage", POS_11_1, 2, nullptr, 0},
  {"Roff", nullptr, 0, nullptr, 0},
};
static const char* POS_12_0[] = {
  R"L_REG(^[.'][ \t]*Dd +(?:[^"\s]+|"[^"]+"))L_REG",
  R"L_REG(^[.'][ \t]*Dt +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*Sh +(?:[^"\s]|"[^"]+"))L_REG",
};
static const char* POS_12_1[] = {
  R"L_REG(^[.'][ \t]*TH +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*SH +(?:[^"\s]+|"[^"\s]+))L_REG",
};
static const char* POS_12_2[] = {
  R"L_REG(^\.(?:[A-Za-z]{2}(?:\s|$)|\\"))L_REG",
};
static const ComplexRule RULES_12[] = {
  {"Roff Manpage", POS_12_0, 3, nullptr, 0},
  {"Roff Manpage", POS_12_1, 2, nullptr, 0},
  {"Roff", POS_12_2, 1, nullptr, 0},
  {"Text", nullptr, 0, nullptr, 0},
};
static const char* POS_13_0[] = {
  R"L_REG(^[.'][ \t]*Dd +(?:[^"\s]+|"[^"]+"))L_REG",
  R"L_REG(^[.'][ \t]*Dt +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*Sh +(?:[^"\s]|"[^"]+"))L_REG",
};
static const char* POS_13_1[] = {
  R"L_REG(^[.'][ \t]*TH +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*SH +(?:[^"\s]+|"[^"\s]+))L_REG",
};
static const char* POS_13_2[] = {
  R"L_REG(^\.(?:[A-Za-z]{2}(?:\s|$)|\\"))L_REG",
};
static const ComplexRule RULES_13[] = {
  {"Roff Manpage", POS_13_0, 3, nullptr, 0},
  {"Roff Manpage", POS_13_1, 2, nullptr, 0},
  {"Roff", POS_13_2, 1, nullptr, 0},
  {"Text", nullptr, 0, nullptr, 0},
};
static const char* POS_14_0[] = {
  R"L_REG(^[.'][ \t]*Dd +(?:[^"\s]+|"[^"]+"))L_REG",
  R"L_REG(^[.'][ \t]*Dt +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*Sh +(?:[^"\s]|"[^"]+"))L_REG",
};
static const char* POS_14_1[] = {
  R"L_REG(^[.'][ \t]*TH +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*SH +(?:[^"\s]+|"[^"\s]+))L_REG",
};
static const char* POS_14_2[] = {
  R"L_REG(^\.(?:[A-Za-z]{2}(?:\s|$)|\\"))L_REG",
};
static const ComplexRule RULES_14[] = {
  {"Roff Manpage", POS_14_0, 3, nullptr, 0},
  {"Roff Manpage", POS_14_1, 2, nullptr, 0},
  {"Roff", POS_14_2, 1, nullptr, 0},
  {"Text", nullptr, 0, nullptr, 0},
};
static const char* POS_15_0[] = {
  R"L_REG(^[.'][ \t]*Dd +(?:[^"\s]+|"[^"]+"))L_REG",
  R"L_REG(^[.'][ \t]*Dt +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*Sh +(?:[^"\s]|"[^"]+"))L_REG",
};
static const char* POS_15_1[] = {
  R"L_REG(^[.'][ \t]*TH +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*SH +(?:[^"\s]+|"[^"\s]+))L_REG",
};
static const char* POS_15_2[] = {
  R"L_REG(^\.(?:[A-Za-z]{2}(?:\s|$)|\\"))L_REG",
};
static const ComplexRule RULES_15[] = {
  {"Roff Manpage", POS_15_0, 3, nullptr, 0},
  {"Roff Manpage", POS_15_1, 2, nullptr, 0},
  {"Roff", POS_15_2, 1, nullptr, 0},
  {"Text", nullptr, 0, nullptr, 0},
};
static const char* POS_16_0[] = {
  R"L_REG(^[.'][ \t]*Dd +(?:[^"\s]+|"[^"]+"))L_REG",
  R"L_REG(^[.'][ \t]*Dt +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*Sh +(?:[^"\s]|"[^"]+"))L_REG",
};
static const char* POS_16_1[] = {
  R"L_REG(^[.'][ \t]*TH +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*SH +(?:[^"\s]+|"[^"\s]+))L_REG",
};
static const char* POS_16_2[] = {
  R"L_REG(^\.(?:[A-Za-z]{2}(?:\s|$)|\\"))L_REG",
};
static const ComplexRule RULES_16[] = {
  {"Roff Manpage", POS_16_0, 3, nullptr, 0},
  {"Roff Manpage", POS_16_1, 2, nullptr, 0},
  {"Roff", POS_16_2, 1, nullptr, 0},
  {"Text", nullptr, 0, nullptr, 0},
};
static const char* POS_17_0[] = {
  R"L_REG(^[.'][ \t]*Dd +(?:[^"\s]+|"[^"]+"))L_REG",
  R"L_REG(^[.'][ \t]*Dt +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*Sh +(?:[^"\s]|"[^"]+"))L_REG",
};
static const char* POS_17_1[] = {
  R"L_REG(^[.'][ \t]*TH +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*SH +(?:[^"\s]+|"[^"\s]+))L_REG",
};
static const char* POS_17_2[] = {
  R"L_REG(^\.(?:[A-Za-z]{2}(?:\s|$)|\\"))L_REG",
};
static const ComplexRule RULES_17[] = {
  {"Roff Manpage", POS_17_0, 3, nullptr, 0},
  {"Roff Manpage", POS_17_1, 2, nullptr, 0},
  {"Roff", POS_17_2, 1, nullptr, 0},
  {"Text", nullptr, 0, nullptr, 0},
};
static const char* POS_18_0[] = {
  R"L_REG(^[a-z]\w*(?:\/[a-z]\w*)?(?:<=\d+)?(?:\[(?:<=\d+)?\])?\s+\w+\b)L_REG",
  R"L_REG(^---\s*$)L_REG",
};
static const char* NEG_18_0[] = {
  R"L_REG(^\s*[^\s@#\w-])L_REG",
};
static const ComplexRule RULES_18[] = {
  {"ROS Interface", POS_18_0, 2, NEG_18_0, 1},
};
static const char* POS_19_0[] = {
  R"L_REG(\b(?i:(CODEUNIT|PAGE|PAGEEXTENSION|PAGECUSTOMIZATION|DOTNET|ENUM|ENUMEXTENSION|VALUE|QUERY|REPORT|TABLE|TABLEEXTENSION|XMLPORT|PROFILE|CONTROLADDIN|REPORTEXTENSION|INTERFACE|PERMISSIONSET|PERMISSIONSETEXTENSION|ENTITLEMENT))\b)L_REG",
};
static const ComplexRule RULES_19[] = {
  {"AL", POS_19_0, 1, nullptr, 0},
  {"Perl", nullptr, 0, nullptr, 0},
};
static const char* POS_20_0[] = {
  R"L_REG(^comment\b.*(;|comment)|^#[^#\r\n]+#$|\b(integer|real|boolean|string)\b\s+\w+\s*:=\s*|^begin[\s\S]*^end)L_REG",
};
static const ComplexRule RULES_20[] = {
  {"ALGOL", POS_20_0, 1, nullptr, 0},
};
static const char* POS_21_0[] = {
  R"L_REG(^\{\s*(?:application|'application')\s*,\s*(?:[a-z]+[\w@]*|'[^']+')\s*,\s*\[(?:.|[\r\n])*\]\s*\}\.[ \t]*$)L_REG",
};
static const ComplexRule RULES_21[] = {
  {"Erlang", POS_21_0, 1, nullptr, 0},
};
static const char* POS_22_0[] = {
  R"L_REG(^\s*(?:package(?:\s+[\w.]+)?\s+(?:\{|$)|import\s+[\w.*]+\s*;|(?:intrinsic\s+)class\s+[\w<>.]+|\s+class\s+extends\s+[\w<>.]+|(?:(?:public|protected|private|static)\s+)*(?:(?:var|const|local)\s+\w+\s*:\s*[\w<>.]+(?:\s*=.*)?\s*;|function\s+\w+\s*\((?:\s*\w+\s*:\s*[\w<>.]+\s*(,\s*\w+\s*:\s*[\w<>.]+\s*)*)?\))))L_REG",
};
static const ComplexRule RULES_22[] = {
  {"ActionScript", POS_22_0, 1, nullptr, 0},
  {"AngelScript", nullptr, 0, nullptr, 0},
};
static const char* POS_23_0[] = {
  R"L_REG(^(----[- ]BEGIN|ssh-(rsa|dss)) )L_REG",
};
static const char* POS_23_1[] = {
  R"L_REG(^[=-]+\s|\{\{[A-Za-z])L_REG",
};
static const char* POS_23_2[] = {
  R"L_REG(^(\/\/.+|((import|export)\s+)?(function|int|float|char)\s+((room|repeatedly|on|game)_)?([A-Za-z]+[A-Za-z_0-9]+)\s*[;\(]))L_REG",
};
static const ComplexRule RULES_23[] = {
  {"Public Key", POS_23_0, 1, nullptr, 0},
  {"AsciiDoc", POS_23_1, 1, nullptr, 0},
  {"AGS Script", POS_23_2, 1, nullptr, 0},
};
static const char* POS_24_0[] = {
  R"L_REG(mov\s+[^\s]{2,},)L_REG",
};
static const ComplexRule RULES_24[] = {
  {"Assembly", POS_24_0, 1, nullptr, 0},
  {"Motorola 68K Assembly", nullptr, 0, nullptr, 0},
};
static const char* POS_25_0[] = {
  R"L_REG(^SymbolType[ \t])L_REG",
};
static const ComplexRule RULES_25[] = {
  {"LTspice Symbol", POS_25_0, 1, nullptr, 0},
  {"Asymptote", nullptr, 0, nullptr, 0},
};
static const char* POS_26_0[] = {
  R"L_REG(^\W{0,3}(?:.*(?:\r?\n|\r)){0,9}B4(?:J|A|R|i)=true)L_REG",
};
static const char* POS_26_1[] = {
  R"L_REG(^[ \t]*#(?:define|endif|endmacro|ifn?def|include|lang|macro|pragma)(?:$|\s)|^[ \t]*dim( shared)? [a-z_][a-z0-9_]* as [a-z_][a-z0-9_]* ptr)L_REG",
};
static const char* POS_26_2[] = {
  R"L_REG(^[ \t]*return )L_REG",
};
static const char* NEG_26_2[] = {
  R"L_REG([ \t]*gosub )L_REG",
};
static const char* POS_26_3[] = {
  R"L_REG(^\s*\d)L_REG",
};
static const char* POS_26_4[] = {
  R"L_REG(^[ ]*(CONST|DIM|REDIM|DEFINT|PRINT|DECLARE (SUB|FUNCTION)|FUNCTION|SUB) |(#|$)lang:?\s*"?qb"?|'\$INCLUDE:|^[ ]*CLS[ ]*('|:|\r|\n)|^[ ]*OPTION _EXPLICIT|^[ ]*DIM SHARED |^[ ]*PRINT "| As _(Byte|Offset|MEM)|^[ ]*_(DISPLAY|DEST|CONSOLE|SOURCE|FREEIMAGE|PALETTECOLOR|PRINTSTRING|LOADFONT|PUTIMAGE)|^[ ]*_(TITLE|PLAYMOD) "|^[ ]*_(LIMIT|SCREEN|DELAY) \.?\d+|\b_(MOUSEBUTTON|NEWIMAGE|KEYDOWN|WIDTH|HEIGHT)\(|^[ ]*\$(CONSOLE|CHECKING):|^[ ]*\$(FULLSCREEN|RESIZE|STATIC|DYNAMIC|NOPREFIX|SCREENSHOW|SCREENHIDE|EXEICON)\b)L_REG",
};
static const char* POS_26_5[] = {
  R"L_REG(\b(?:VBA|[vV]ba)(?:\b|[0-9A-Z_])|^[ ]*(?:Public|Private)? Declare PtrSafe (?:Sub|Function)\b|^[ ]*#If Win64\b|^[ ]*(?:Dim|Const) [0-9a-zA-Z_]*[ ]*As Long(?:Ptr|Long)\b|^[ ]*Option (?:Private Module|Compare Database)\b|(?: |\()(?:Access|Excel|Outlook|PowerPoint|Visio|Word|VBIDE)\.\w|\b(?:(?:Active)?VBProjects?|VBComponents?|Application\.(?:VBE|ScreenUpdating))\b|\b(?:ThisDrawing|AcadObject|Active(?:Explorer|Inspector|Window\.Presentation|Presentation|Document)|Selection\.(?:Document|Find|Paragraphs|Range))\b|\b(?:(?:This|Active)?Workbooks?|Worksheets?|Active(?:Sheet|Chart|Cell)|WorksheetFunction)\b|\b(?:Range\(".*|Cells\([0-9a-zA-Z_]*, (?:[0-9a-zA-Z_]*|"[a-zA-Z]{1,3}"))\))L_REG",
};
static const char* POS_26_6[] = {
  R"L_REG(^[ ]*Attribute VB_Name = )L_REG",
};
static const ComplexRule RULES_26[] = {
  {"B4X", POS_26_0, 1, nullptr, 0},
  {"FreeBASIC", POS_26_1, 1, nullptr, 0},
  {"FreeBASIC", POS_26_2, 1, NEG_26_2, 1},
  {"BASIC", POS_26_3, 1, nullptr, 0},
  {"QuickBASIC", POS_26_4, 1, nullptr, 0},
  {"VBA", POS_26_5, 1, nullptr, 0},
  {"Visual Basic 6.0", POS_26_6, 1, nullptr, 0},
};
static const char* POS_27_0[] = {
  R"L_REG((<^\s*; |End Function))L_REG",
};
static const char* POS_27_1[] = {
  R"L_REG(^(# |include|require|inherit)\b)L_REG",
};
static const char* POS_27_2[] = {
  R"L_REG(\((def|defn|defmacro|let)\s)L_REG",
};
static const ComplexRule RULES_27[] = {
  {"BlitzBasic", POS_27_0, 1, nullptr, 0},
  {"BitBake", POS_27_1, 1, nullptr, 0},
  {"Clojure", POS_27_2, 1, nullptr, 0},
};
static const char* POS_28_2[] = {
  R"L_REG((>\+>|>\+<))L_REG",
};
static const ComplexRule RULES_28[] = {
  {"Beef", nullptr, 0, nullptr, 0},
  {"HyPhy", nullptr, 0, nullptr, 0},
  {"Brainfuck", POS_28_2, 1, nullptr, 0},
  {"Befunge", nullptr, 0, nullptr, 0},
};
static const char* POS_29_0[] = {
  R"L_REG(^[ \t]*#(?:define|endif|endmacro|ifn?def|include|lang|macro|pragma)(?:$|\s)|^[ \t]*dim( shared)? [a-z_][a-z0-9_]* as [a-z_][a-z0-9_]* ptr)L_REG",
};
static const char* POS_29_1[] = {
  R"L_REG(^[ \t]*return )L_REG",
};
static const char* NEG_29_1[] = {
  R"L_REG([ \t]*gosub )L_REG",
};
static const char* POS_29_2[] = {
  R"L_REG(^[ ]*(CONST|DIM|REDIM|DEFINT|PRINT|DECLARE (SUB|FUNCTION)|FUNCTION|SUB) |(#|$)lang:?\s*"?qb"?|'\$INCLUDE:|^[ ]*CLS[ ]*('|:|\r|\n)|^[ ]*OPTION _EXPLICIT|^[ ]*DIM SHARED |^[ ]*PRINT "| As _(Byte|Offset|MEM)|^[ ]*_(DISPLAY|DEST|CONSOLE|SOURCE|FREEIMAGE|PALETTECOLOR|PRINTSTRING|LOADFONT|PUTIMAGE)|^[ ]*_(TITLE|PLAYMOD) "|^[ ]*_(LIMIT|SCREEN|DELAY) \.?\d+|\b_(MOUSEBUTTON|NEWIMAGE|KEYDOWN|WIDTH|HEIGHT)\(|^[ ]*\$(CONSOLE|CHECKING):|^[ ]*\$(FULLSCREEN|RESIZE|STATIC|DYNAMIC|NOPREFIX|SCREENSHOW|SCREENHIDE|EXEICON)\b)L_REG",
};
static const ComplexRule RULES_29[] = {
  {"FreeBASIC", POS_29_0, 1, nullptr, 0},
  {"FreeBASIC", POS_29_1, 1, NEG_29_1, 1},
  {"QuickBASIC", POS_29_2, 1, nullptr, 0},
};
static const char* POS_30_0[] = {
  R"L_REG(^(?i:<pre\s+class)\s*=\s*('|\"|\b)metadata\b('|\"|\b)[^>\r\n]*>)L_REG",
};
static const char* POS_30_1[] = {
  R"L_REG((?i:^\s*(?:sub\s*\w+\(.*?\))|(?::\s*sub\(.*?\))$)|(?i:^\s*(end\ssub)$)|(?i:^\s*(?:function\s*\w+\(.*?\)\s*as\s*\w*)|(?::\s*function\(.*?\)\s*as\s*\w*)$)|(?i:^\s*(end\sfunction)$))L_REG",
};
static const char* POS_30_2[] = {
  R"L_REG(^package\s+[A-Za-z_][A-Za-z0-9_']*(?:\s*\(|\s+where))L_REG",
};
static const ComplexRule RULES_30[] = {
  {"Bikeshed", POS_30_0, 1, nullptr, 0},
  {"BrighterScript", POS_30_1, 1, nullptr, 0},
  {"Bluespec BH", POS_30_2, 1, nullptr, 0},
};
static const char* POS_31_0[] = {
  R"L_REG(ENTRY\s*\{)L_REG",
};
static const ComplexRule RULES_31[] = {
  {"BibTeX Style", POS_31_0, 1, nullptr, 0},
  {"BuildStream", nullptr, 0, nullptr, 0},
};
static const char* POS_32_0[] = {
  R"L_REG(^(\s*)(?i:<Project|<Import|<Property|<?xml|xmlns))L_REG",
};
static const ComplexRule RULES_32[] = {
  {"XML", POS_32_0, 1, nullptr, 0},
};
static const char* POS_33_0[] = {
  R"L_REG((^(\s*)%lang(\s+)([A-Za-z0-9_]+))|(^(\s*)%builtins(\s+)([A-Za-z0-9_]+\s*)*$)|(^(\s*)from(\s+)starkware\.(cairo|starknet)\.([A-Za-z0-9_.\s]+?)import)|(,\s*ap\+\+;$)|(;\s*ap\+\+$))L_REG",
};
static const ComplexRule RULES_33[] = {
  {"Cairo Zero", POS_33_0, 1, nullptr, 0},
  {"Cairo", nullptr, 0, nullptr, 0},
};
static const char* POS_34_0[] = {
  R"L_REG(^\s*#\s*(?i:if|ifdef|ifndef|define|command|xcommand|translate|xtranslate|include|pragma|undef)\b)L_REG",
};
static const ComplexRule RULES_34[] = {
  {"xBase", POS_34_0, 1, nullptr, 0},
  {"Charity", nullptr, 0, nullptr, 0},
};
static const char* POS_35_0[] = {
  R"L_REG(^\s*\((?i:defun|in-package|defpackage) )L_REG",
};
static const char* POS_35_1[] = {
  R"L_REG(^class)L_REG",
};
static const char* POS_35_2[] = {
  R"L_REG(\/\* |\/\/ |^\})L_REG",
};
static const ComplexRule RULES_35[] = {
  {"Common Lisp", POS_35_0, 1, nullptr, 0},
  {"Cool", POS_35_1, 1, nullptr, 0},
  {"OpenCL", POS_35_2, 1, nullptr, 0},
};
static const char* POS_36_0[] = {
  R"L_REG(^[ ]*VERSION [0-9]\.[0-9] CLASS)L_REG",
  R"L_REG(^\s*BEGIN(?:\r?\n|\r)\s*MultiUse\s*=.*(?:\r?\n|\r)\s*Persistable\s*=)L_REG",
};
static const char* POS_36_1[] = {
  R"L_REG(^[ ]*VERSION [0-9]\.[0-9] CLASS)L_REG",
};
static const char* POS_36_2[] = {
  R"L_REG(^\s*\\(?:NeedsTeXFormat|ProvidesClass)\{)L_REG",
};
static const char* POS_36_3[] = {
  R"L_REG(^Class\s)L_REG",
};
static const char* POS_36_4[] = {
  R"L_REG(^\s*(?:end\s+(?:class|interface)\.|(?:class|interface)\s+[a-z_][a-z0-9_#$%&-]*:))L_REG",
};
static const ComplexRule RULES_36[] = {
  {"Visual Basic 6.0", POS_36_0, 2, nullptr, 0},
  {"VBA", POS_36_1, 1, nullptr, 0},
  {"TeX", POS_36_2, 1, nullptr, 0},
  {"ObjectScript", POS_36_3, 1, nullptr, 0},
  {"OpenEdge ABL", POS_36_4, 1, nullptr, 0},
  {"Apex", nullptr, 0, nullptr, 0},
};
static const char* POS_37_0[] = {
  R"L_REG(^[DGMT][0-9]{2}\*(?:\r?\n|\r))L_REG",
};
static const ComplexRule RULES_37[] = {
  {"Gerber Image", POS_37_0, 1, nullptr, 0},
};
static const char* POS_38_0[] = {
  R"L_REG(![\w\s]+methodsFor: )L_REG",
};
static const char* POS_38_1[] = {
  R"L_REG(^\s*(using\s+[A-Z][\s\w.]+;|namespace\s*[\w\.]+\s*(\{|;)|\/\/))L_REG",
};
static const ComplexRule RULES_38[] = {
  {"Smalltalk", POS_38_0, 1, nullptr, 0},
  {"C#", POS_38_1, 1, nullptr, 0},
};
static const char* POS_39_0[] = {
  R"L_REG(^\s*#\s*(?:using|insert|include|define|namespace)[ \t]+\w|^\s*((?:autoexec|private)\s+){0,2}function\s+((?:autoexec|private)\s+){0,2}\w+\s*\(|\b(?:level|self)[ \t]+thread[ \t]+(?:\[\[[ \t]*(\w+\.)+[ \t]*\]\]|\w+)[ \t]*\([^\r\n\)]*\)[ \t]*;|^[ \t]*#[ \t]*(?:precache|using_animtree)[ \t]*\()L_REG",
};
static const ComplexRule RULES_39[] = {
  {"GSC", POS_39_0, 1, nullptr, 0},
};
static const char* POS_40_0[] = {
  R"L_REG((?i:^\s*(<\?xml|xmlns)))L_REG",
};
static const char* POS_40_1[] = {
  R"L_REG((^\|\s*(where|extend|project|limit|summarize))|(^\.\w+))L_REG",
};
static const ComplexRule RULES_40[] = {
  {"XML", POS_40_0, 1, nullptr, 0},
  {"Kusto", POS_40_1, 1, nullptr, 0},
};
static const char* POS_41_0[] = {
  R"L_REG(^module\s+[\w.]*\s*;|import\s+[\w\s,.:]*;|\w+\s+\w+\s*\(.*\)(?:\(.*\))?\s*\{[^}]*\}|unittest\s*(?:\(.*\))?\s*\{[^}]*\})L_REG",
};
static const char* POS_41_1[] = {
  R"L_REG(^(\w+:\w*:\w*:\w*|BEGIN|END|provider\s+|(tick|profile)-\w+\s+\{[^}]*\}|#pragma\s+D\s+(option|attributes|depends_on)\s|#pragma\s+ident\s))L_REG",
};
static const char* POS_41_2[] = {
  R"L_REG(([\/\\].*:\s+.*\s\\$|: \\$|^[ %]:|^[\w\s\/\\.]+\w+\.\w+\s*:\s+[\w\s\/\\.]+\w+\.\w+))L_REG",
};
static const ComplexRule RULES_41[] = {
  {"D", POS_41_0, 1, nullptr, 0},
  {"DTrace", POS_41_1, 1, nullptr, 0},
  {"Makefile", POS_41_2, 1, nullptr, 0},
};
static const char* POS_42_0[] = {
  R"L_REG(# Microsoft Developer Studio Generated Build File)L_REG",
};
static const char* POS_42_1[] = {
  R"L_REG(\bprocess\s*[(=]|\b(library|import)\s*\(\s*"|\bdeclare\s+(name|version|author|copyright|license)\s+")L_REG",
};
static const ComplexRule RULES_42[] = {
  {"Microsoft Developer Studio Project", POS_42_0, 1, nullptr, 0},
  {"Faust", POS_42_1, 1, nullptr, 0},
};
static const char* POS_43_0[] = {
  R"L_REG(^\s*(def|var)\s+(.+):=|^\s*(def|to)\s+(\w+)(\(.+\))?\s+\{|^\s*(when)\s+(\(.+\))\s+->\s+\{)L_REG",
};
static const char* POS_43_1[] = {
  R"L_REG(^\s*\w+\s*(?:,\s*\w+)*[:]\s*\w+\s|^\s*\w+\s*(?:\(\s*\w+[:][^)]+\))?(?:[:]\s*\w+)?(?:--.+\s+)*\s+(?:do|local)\s|^\s*(?:across|deferred|elseif|ensure|feature|from|inherit|inspect|invariant|note|once|require|undefine|variant|when)\s*$)L_REG",
};
static const char* POS_43_2[] = {
  R"L_REG(^\s*namespace\s|^\s*(?:public\s+)?include\s|^\s*(?:(?:public|export|global)\s+)?(?:atom|constant|enum|function|integer|object|procedure|sequence|type)\s)L_REG",
};
static const ComplexRule RULES_43[] = {
  {"E", POS_43_0, 1, nullptr, 0},
  {"Eiffel", POS_43_1, 1, nullptr, 0},
  {"Euphoria", POS_43_2, 1, nullptr, 0},
};
static const char* POS_44_0[] = {
  R"L_REG(^[^#]+:-)L_REG",
};
static const char* POS_44_1[] = {
  R"L_REG(:=)L_REG",
};
static const ComplexRule RULES_44[] = {
  {"ECLiPSe", POS_44_0, 1, nullptr, 0},
  {"ECL", POS_44_1, 1, nullptr, 0},
};
static const char* POS_45_0[] = {
  R"L_REG(^\s*(?:%%|main\s*\(.*?\)\s*->))L_REG",
};
static const char* POS_45_1[] = {
  R"L_REG(\/\/|["']use strict["']|export\s+default\s|\/\*(?:.|[\r\n])*?\*\/)L_REG",
};
static const ComplexRule RULES_45[] = {
  {"Erlang", POS_45_0, 1, nullptr, 0},
  {"JavaScript", POS_45_1, 1, nullptr, 0},
};
static const char* POS_46_0[] = {
  R"L_REG(^\s*@moduledoc\s|^\s*(?:cond|import|quote|unless)\s|^\s*def(?:exception|impl|macro|module|protocol)[(\s])L_REG",
};
static const char* POS_46_1[] = {
  R"L_REG(^\s*namespace\s|^\s*(?:public\s+)?include\s|^\s*(?:(?:public|export|global)\s+)?(?:atom|constant|enum|function|integer|object|procedure|sequence|type)\s)L_REG",
};
static const ComplexRule RULES_46[] = {
  {"Elixir", POS_46_0, 1, nullptr, 0},
  {"Euphoria", POS_46_1, 1, nullptr, 0},
};
static const char* POS_47_0[] = {
  R"L_REG(^: )L_REG",
};
static const char* POS_47_1[] = {
  R"L_REG(flowop)L_REG",
};
static const char* POS_47_2[] = {
  R"L_REG(^(?i:[c*][^abd-z]|      (subroutine|program|end|data)\s|\s*!))L_REG",
};
static const ComplexRule RULES_47[] = {
  {"Forth", POS_47_0, 1, nullptr, 0},
  {"Filebench WML", POS_47_1, 1, nullptr, 0},
  {"Fortran", POS_47_2, 1, nullptr, 0},
};
static const char* POS_48_0[] = {
  R"L_REG(^: )L_REG",
};
static const char* POS_48_1[] = {
  R"L_REG(^(?i:[c*][^abd-z]|      (subroutine|program|end|data)\s|\s*!))L_REG",
};
static const ComplexRule RULES_48[] = {
  {"Forth", POS_48_0, 1, nullptr, 0},
  {"Fortran", POS_48_1, 1, nullptr, 0},
  {"Formatted", nullptr, 0, nullptr, 0},
};
static const char* POS_49_0[] = {
  R"L_REG(^(: |also |new-device|previous ))L_REG",
};
static const char* POS_49_1[] = {
  R"L_REG(^\s*(import|module|package|data|type) )L_REG",
};
static const ComplexRule RULES_49[] = {
  {"Forth", POS_49_0, 1, nullptr, 0},
  {"Frege", POS_49_1, 1, nullptr, 0},
  {"Text", nullptr, 0, nullptr, 0},
};
static const char* POS_50_0[] = {
  R"L_REG(^[ ]*VERSION [0-9]\.[0-9]{2})L_REG",
  R"L_REG(^\s*Begin\s+\{[0-9A-Z\-]*\}\s?)L_REG",
};
static const char* POS_50_1[] = {
  R"L_REG(^[ ]*VERSION [0-9]\.[0-9]{2})L_REG",
  R"L_REG(^\s*Begin\s+VB\.Form\s+)L_REG",
};
static const char* POS_50_2[] = {
  R"L_REG(^TYPE=VIEW)L_REG",
};
static const ComplexRule RULES_50[] = {
  {"VBA", POS_50_0, 2, nullptr, 0},
  {"Visual Basic 6.0", POS_50_1, 2, nullptr, 0},
  {"INI", POS_50_2, 1, nullptr, 0},
};
static const char* POS_51_0[] = {
  R"L_REG(^(: |new-device))L_REG",
};
static const char* POS_51_1[] = {
  R"L_REG(^\s*(#light|import|let|module|namespace|open|type))L_REG",
};
static const char* POS_51_2[] = {
  R"L_REG(^\s*(#version|precision|uniform|varying|vec[234]))L_REG",
};
static const char* POS_51_3[] = {
  R"L_REG(#include|#pragma\s+(rs|version)|__attribute__)L_REG",
};
static const ComplexRule RULES_51[] = {
  {"Forth", POS_51_0, 1, nullptr, 0},
  {"F#", POS_51_1, 1, nullptr, 0},
  {"GLSL", POS_51_2, 1, nullptr, 0},
  {"Filterscript", POS_51_3, 1, nullptr, 0},
};
static const char* POS_52_0[] = {
  R"L_REG(^(?:<|[a-zA-Z-][a-zA-Z0-9_-]+[ \t]+\w)|\$\{\w+[^\r\n]*?\}|^[ \t]*(?:<#--.*?-->|<#(?:[a-z]+)\s[^>]*>.*?</#(?:[a-z]+)>|\[#--.*?--\]|\[#(?:[a-z]+)\s[^\]]*\].*?\[#(?:[a-z]+)\]))L_REG",
};
static const char* POS_52_1[] = {
  R"L_REG(^-?[a-zA-Z][a-zA-Z0-9_-]* *=|\{\$-?[a-zA-Z][-\w]*(?:\.[a-zA-Z][-\w]*)?\})L_REG",
};
static const ComplexRule RULES_52[] = {
  {"FreeMarker", POS_52_0, 1, nullptr, 0},
  {"Fluent", POS_52_1, 1, nullptr, 0},
};
static const char* POS_53_0[] = {
  R"L_REG(\s*(Declare|BindGlobal|KeyDependentOperation|Install(Method|GlobalFunction)|SetPackageInfo))L_REG",
};
static const char* POS_53_1[] = {
  R"L_REG(^[MG][0-9]+(?:\r?\n|\r))L_REG",
};
static const ComplexRule RULES_53[] = {
  {"GAP", POS_53_0, 1, nullptr, 0},
  {"G-code", POS_53_1, 1, nullptr, 0},
};
static const char* POS_54_0[] = {
  R"L_REG(\s*(Declare|BindGlobal|KeyDependentOperation))L_REG",
};
static const char* POS_54_1[] = {
  R"L_REG(\s*(extends|var|const|enum|func|class|signal|tool|yield|assert|onready))L_REG",
};
static const ComplexRule RULES_54[] = {
  {"GAP", POS_54_0, 1, nullptr, 0},
  {"GDScript", POS_54_1, 1, nullptr, 0},
};
static const char* POS_55_0[] = {
  R"L_REG((?i:^\s*(<\?xml|xmlns)))L_REG",
};
static const char* POS_55_1[] = {
  R"L_REG((?i:^\s*(graph|node)\s+\[$))L_REG",
};
static const char* POS_55_2[] = {
  R"L_REG(^[DGMT][0-9]{2}\*$)L_REG",
};
static const ComplexRule RULES_55[] = {
  {"XML", POS_55_0, 1, nullptr, 0},
  {"Graph Modeling Language", POS_55_1, 1, nullptr, 0},
  {"Gerber Image", POS_55_2, 1, nullptr, 0},
  {"Game Maker Language", nullptr, 0, nullptr, 0},
};
static const char* POS_56_0[] = {
  R"L_REG(^#version\s+[0-9]+\b)L_REG",
};
static const char* POS_56_1[] = {
  R"L_REG(^uses (java|gw)\.)L_REG",
};
static const char* POS_56_2[] = {
  R"L_REG(^\[indent=[0-9]+\])L_REG",
};
static const ComplexRule RULES_56[] = {
  {"GLSL", POS_56_0, 1, nullptr, 0},
  {"Gosu", POS_56_1, 1, nullptr, 0},
  {"Genie", POS_56_2, 1, nullptr, 0},
  {"JavaScript", nullptr, 0, nullptr, 0},
};
static const char* POS_57_0[] = {
  R"L_REG(^\s*#\s*(?:using|insert|include|define|namespace)[ \t]+\w|^\s*((?:autoexec|private)\s+){0,2}function\s+((?:autoexec|private)\s+){0,2}\w+\s*\(|\b(?:level|self)[ \t]+thread[ \t]+(?:\[\[[ \t]*(\w+\.)+[ \t]*\]\]|\w+)[ \t]*\([^\r\n\)]*\)[ \t]*;|^[ \t]*#[ \t]*(?:precache|using_animtree)[ \t]*\()L_REG",
};
static const ComplexRule RULES_57[] = {
  {"GSC", POS_57_0, 1, nullptr, 0},
};
static const char* POS_58_0[] = {
  R"L_REG(^\s*#\s*(?:using|insert|include|define|namespace)[ \t]+\w|^\s*((?:autoexec|private)\s+){0,2}function\s+((?:autoexec|private)\s+){0,2}\w+\s*\(|\b(?:level|self)[ \t]+thread[ \t]+(?:\[\[[ \t]*(\w+\.)+[ \t]*\]\]|\w+)[ \t]*\([^\r\n\)]*\)[ \t]*;|^[ \t]*#[ \t]*(?:precache|using_animtree)[ \t]*\()L_REG",
};
static const ComplexRule RULES_58[] = {
  {"GSC", POS_58_0, 1, nullptr, 0},
};
static const char* POS_59_0[] = {
  R"L_REG(^G0.)L_REG",
};
static const char* NEG_59_1[] = {
  R"L_REG(^G0.)L_REG",
};
static const ComplexRule RULES_59[] = {
  {"Gerber Image", POS_59_0, 1, nullptr, 0},
  {"Glimmer TS", nullptr, 0, NEG_59_1, 1},
};
static const char* POS_60_0[] = {
  R"L_REG(^\s*(@(interface|class|protocol|property|end|synchronised|selector|implementation)\b|#import\s+.+\.h[">]))L_REG",
};
static const char* POS_60_1[] = {
  R"L_REG(^\s*#\s*include <(cstdint|string|vector|map|list|array|bitset|queue|stack|forward_list|unordered_map|unordered_set|(i|o|io)stream)>|^\s*template\s*<|^[ \t]*(try|constexpr)|^[ \t]*catch\s*\(|^[ \t]*(class|(using[ \t]+)?namespace)\s+\w+|^[ \t]*(private|public|protected):$|__has_cpp_attribute|__cplusplus >|std::\w+)L_REG",
};
static const ComplexRule RULES_60[] = {
  {"Objective-C", POS_60_0, 1, nullptr, 0},
  {"C++", POS_60_1, 1, nullptr, 0},
  {"C", nullptr, 0, nullptr, 0},
};
static const char* POS_61_0[] = {
  R"L_REG(<\?hh)L_REG",
};
static const ComplexRule RULES_61[] = {
  {"Hack", POS_61_0, 1, nullptr, 0},
  {"C++", nullptr, 0, nullptr, 0},
};
static const char* POS_62_0[] = {
  R"L_REG(<emu-(?:alg|annex|biblio|clause|eqn|example|figure|gann|gmod|gprose|grammar|intro|not-ref|note|nt|prodref|production|rhs|table|t|xref)(?:$|\s|>))L_REG",
};
static const ComplexRule RULES_62[] = {
  {"Ecmarkup", POS_62_0, 1, nullptr, 0},
  {"HTML", nullptr, 0, nullptr, 0},
};
static const char* POS_63_1[] = {
  R"L_REG(^[ \t]*%[a-z_]+\b|^%[{}]$)L_REG",
};
static const char* POS_63_2[] = {
  R"L_REG(mov\s+[^\s]+,|^\s+(i?)db\s+[a-z\d])L_REG",
};
static const ComplexRule RULES_63[] = {
  {"Motorola 68K Assembly", nullptr, 0, nullptr, 0},
  {"SWIG", POS_63_1, 1, nullptr, 0},
  {"Assembly", POS_63_2, 1, nullptr, 0},
};
static const char* POS_64_0[] = {
  R"L_REG(^\s*[{\[])L_REG",
};
static const ComplexRule RULES_64[] = {
  {"JSON", POS_64_0, 1, nullptr, 0},
  {"Slice", nullptr, 0, nullptr, 0},
};
static const char* POS_65_1[] = {
  R"L_REG(^<\?(?:php)?)L_REG",
};
static const char* POS_65_2[] = {
  R"L_REG(^public\s+(?:SharedPlugin(?:\s+|:)__pl_\w+\s*=(?:\s*\{)?|(?:void\s+)?__pl_\w+_SetNTVOptional\(\)(?:\s*\{)?)|^methodmap\s+\w+\s+<\s+\w+|^\s*MarkNativeAsOptional\s*\()L_REG",
};
static const char* POS_65_3[] = {
  R"L_REG(^\s*include\s*\(\s*(?:"|')[\\/\w\-\.:\s]+\.(?:nasl|inc)\s*(?:"|')\s*\)\s*;|^\s*(?:global|local)_var\s+(?:\w+(?:\s*=\s*[\w\-"']+)?\s*)(?:,\s*\w+(?:\s*=\s*[\w\-"']+)?\s*)*\s*;|^\s*namespace\s+\w+\s*\{|^\s*object\s+\w+\s*(?:extends\s+\w+(?:::\w+)?)?\s*\{|^\s*(?:public\s+|private\s+|\s*)function\s+\w+\s*\([\w\s,]*\)\s*\{)L_REG",
};
static const char* POS_65_4[] = {
  R"L_REG(^\s*#(declare|local|macro|while)\s)L_REG",
};
static const char* POS_65_5[] = {
  R"L_REG((?i:^\s*\{\$(?:mode|ifdef|undef|define)[ ]+[a-z0-9_]+\})|^\s*end[.;]\s*$)L_REG",
};
static const char* POS_65_6[] = {
  R"L_REG(^inherit(\s+[\w.-]+)+\s*$)L_REG",
};
static const char* POS_65_7[] = {
  R"L_REG(^[^"m]*mov\s+[^\s]+,|^\s+db\s+[a-z\d])L_REG",
};
static const ComplexRule RULES_65[] = {
  {"Motorola 68K Assembly", nullptr, 0, nullptr, 0},
  {"PHP", POS_65_1, 1, nullptr, 0},
  {"SourcePawn", POS_65_2, 1, nullptr, 0},
  {"NASL", POS_65_3, 1, nullptr, 0},
  {"POV-Ray SDL", POS_65_4, 1, nullptr, 0},
  {"Pascal", POS_65_5, 1, nullptr, 0},
  {"BitBake", POS_65_6, 1, nullptr, 0},
  {"Assembly", POS_65_7, 1, nullptr, 0},
  {"C++", nullptr, 0, nullptr, 0},
  {"HTML", nullptr, 0, nullptr, 0},
  {"Pawn", nullptr, 0, nullptr, 0},
  {"SQL", nullptr, 0, nullptr, 0},
};
static const char* POS_66_0[] = {
  R"L_REG("swagger":\s?"2.[0-9.]+")L_REG",
};
static const char* POS_66_1[] = {
  R"L_REG("openapi":\s?"3.[0-9.]+")L_REG",
};
static const ComplexRule RULES_66[] = {
  {"OASv2-json", POS_66_0, 1, nullptr, 0},
  {"OASv3-json", POS_66_1, 1, nullptr, 0},
  {"JSON", nullptr, 0, nullptr, 0},
};
static const char* POS_67_0[] = {
  R"L_REG(^schema [A-Za-z0-9_-]+|^\}$|\s*\}\s*)L_REG",
};
static const char* POS_67_1[] = {
  R"L_REG(^requires\s+"[^"]+"$|^syntax\s+\w+\s+::=.*|^endmodule$)L_REG",
};
static const ComplexRule RULES_67[] = {
  {"KCL", POS_67_0, 1, nullptr, 0},
  {"KFramework", POS_67_1, 1, nullptr, 0},
};
static const char* POS_68_0[] = {
  R"L_REG(\(def(un|macro)\s)L_REG",
};
static const char* POS_68_1[] = {
  R"L_REG(^(%[%{}]xs|<.*>))L_REG",
};
static const char* POS_68_2[] = {
  R"L_REG(^\.[A-Za-z]{2}(\s|$))L_REG",
};
static const char* POS_68_3[] = {
  R"L_REG(^\((de|class|rel|code|data|must)\s)L_REG",
};
static const ComplexRule RULES_68[] = {
  {"Common Lisp", POS_68_0, 1, nullptr, 0},
  {"Lex", POS_68_1, 1, nullptr, 0},
  {"Roff", POS_68_2, 1, nullptr, 0},
  {"PicoLisp", POS_68_3, 1, nullptr, 0},
};
static const char* POS_69_0[] = {
  R"L_REG(^import [a-z])L_REG",
};
static const char* POS_69_1[] = {
  R"L_REG(^import [A-Z])L_REG",
};
static const ComplexRule RULES_69[] = {
  {"Lean", POS_69_0, 1, nullptr, 0},
  {"Lean 4", POS_69_1, 1, nullptr, 0},
};
static const char* POS_70_0[] = {
  R"L_REG(^\s*\((?i:defun|in-package|defpackage) )L_REG",
};
static const char* POS_70_1[] = {
  R"L_REG(^\s*\(define )L_REG",
};
static const ComplexRule RULES_70[] = {
  {"Common Lisp", POS_70_0, 1, nullptr, 0},
  {"NewLisp", POS_70_1, 1, nullptr, 0},
};
static const char* POS_71_0[] = {
  R"L_REG((?:^|\s)symbol(?:$|\s)|(?:^|\s)rule(?:$|\s))L_REG",
};
static const char* POS_71_1[] = {
  R"L_REG(^\s*(?:minimize|minimum|min|maximize|maximum|max)(?:\s+multi-objectives)?\s*$)L_REG",
};
static const char* POS_71_2[] = {
  R"L_REG(^\s*#(?:include|const|program|script|show|minimize|maximize|heuristic|project|edge|theory|defined)\b|^\s*(?:[A-Za-z_]\w*(?:\([^)]*\))?\s*:-|:-)\s[^.]*\.|^\s*[a-z_][a-zA-Z0-9_]*(?:\([^)]*\))?\s*\.\s*$)L_REG",
};
static const ComplexRule RULES_71[] = {
  {"Lambdapi", POS_71_0, 1, nullptr, 0},
  {"Linear Programming", POS_71_1, 1, nullptr, 0},
  {"Answer Set Programming", POS_71_2, 1, nullptr, 0},
};
static const char* POS_72_0[] = {
  R"L_REG(^\s*package\s*[\w\.\/\*\s]*\s*\{)L_REG",
};
static const ComplexRule RULES_72[] = {
  {"LoomScript", POS_72_0, 1, nullptr, 0},
  {"LiveScript", nullptr, 0, nullptr, 0},
};
static const char* POS_73_0[] = {
  R"L_REG(^\s*\((?i:defun|in-package|defpackage) )L_REG",
};
static const char* POS_73_1[] = {
  R"L_REG(^\s*\(define )L_REG",
};
static const ComplexRule RULES_73[] = {
  {"Common Lisp", POS_73_0, 1, nullptr, 0},
  {"NewLisp", POS_73_1, 1, nullptr, 0},
};
static const char* POS_74_0[] = {
  R"L_REG(^\s*(@(interface|class|protocol|property|end|synchronised|selector|implementation)\b|#import\s+.+\.h[">]))L_REG",
};
static const char* POS_74_1[] = {
  R"L_REG(:- module)L_REG",
};
static const char* POS_74_2[] = {
  R"L_REG(^: )L_REG",
};
static const char* POS_74_3[] = {
  R"L_REG(^\s*;)L_REG",
};
static const char* POS_74_4[] = {
  R"L_REG(\(\*)L_REG",
  R"L_REG(\*\)$)L_REG",
};
static const char* POS_74_5[] = {
  R"L_REG(^\s*%)L_REG",
};
static const char* POS_74_6[] = {
  R"L_REG(^\w+\s*:\s*module\s*\{)L_REG",
};
static const ComplexRule RULES_74[] = {
  {"Objective-C", POS_74_0, 1, nullptr, 0},
  {"Mercury", POS_74_1, 1, nullptr, 0},
  {"MUF", POS_74_2, 1, nullptr, 0},
  {"M", POS_74_3, 1, nullptr, 0},
  {"Wolfram Language", POS_74_4, 2, nullptr, 0},
  {"MATLAB", POS_74_5, 1, nullptr, 0},
  {"Limbo", POS_74_6, 1, nullptr, 0},
};
static const char* POS_75_0[] = {
  R"L_REG(AC_DEFUN|AC_PREREQ|AC_INIT|^_?m4_)L_REG",
};
static const ComplexRule RULES_75[] = {
  {"M4Sugar", POS_75_0, 1, nullptr, 0},
  {"M4", nullptr, 0, nullptr, 0},
};
static const char* POS_76_0[] = {
  R"L_REG(^[.'][ \t]*Dd +(?:[^"\s]+|"[^"]+"))L_REG",
  R"L_REG(^[.'][ \t]*Dt +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*Sh +(?:[^"\s]|"[^"]+"))L_REG",
};
static const char* POS_76_1[] = {
  R"L_REG(^[.'][ \t]*TH +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*SH +(?:[^"\s]+|"[^"\s]+))L_REG",
};
static const ComplexRule RULES_76[] = {
  {"Roff Manpage", POS_76_0, 3, nullptr, 0},
  {"Roff Manpage", POS_76_1, 2, nullptr, 0},
  {"Roff", nullptr, 0, nullptr, 0},
};
static const char* POS_77_0[] = {
  R"L_REG(tag:unity3d.com)L_REG",
};
static const ComplexRule RULES_77[] = {
  {"Unity3D Asset", POS_77_0, 1, nullptr, 0},
  {"Mask", nullptr, 0, nullptr, 0},
};
static const char* POS_78_0[] = {
  R"L_REG(^[ \t]*(\/\*\s*)?MessageId=|^\.$)L_REG",
};
static const char* POS_78_1[] = {
  R"L_REG(^dnl|^divert\((?:-?\d+)?\)|^\w+\(`[^\r\n]*?'[),])L_REG",
};
static const char* POS_78_2[] = {
  R"L_REG(\b(?:using|module|function|class|var)\s+\w)L_REG",
};
static const ComplexRule RULES_78[] = {
  {"Win32 Message File", POS_78_0, 1, nullptr, 0},
  {"M4", POS_78_1, 1, nullptr, 0},
  {"Monkey C", POS_78_2, 1, nullptr, 0},
};
static const char* POS_79_0[] = {
  R"L_REG((^[-A-Za-z0-9=#!\*\[|>])|<\/|^$)L_REG",
};
static const char* POS_79_1[] = {
  R"L_REG(^(;;|\(define_))L_REG",
};
static const ComplexRule RULES_79[] = {
  {"Markdown", POS_79_0, 1, nullptr, 0},
  {"GCC Machine Description", POS_79_1, 1, nullptr, 0},
  {"Markdown", nullptr, 0, nullptr, 0},
};
static const char* POS_80_0[] = {
  R"L_REG(^[.'][ \t]*Dd +(?:[^"\s]+|"[^"]+"))L_REG",
  R"L_REG(^[.'][ \t]*Dt +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*Sh +(?:[^"\s]|"[^"]+"))L_REG",
};
static const char* POS_80_1[] = {
  R"L_REG(^[.'][ \t]*TH +(?:[^"\s]+|"[^"]+") +"?(?:[1-9]|@[^\s@]+@))L_REG",
  R"L_REG(^[.'][ \t]*SH +(?:[^"\s]+|"[^"\s]+))L_REG",
};
static const ComplexRule RULES_80[] = {
  {"Roff Manpage", POS_80_0, 3, nullptr, 0},
  {"Roff Manpage", POS_80_1, 2, nullptr, 0},
  {"Roff", nullptr, 0, nullptr, 0},
};
static const char* POS_81_0[] = {
  R"L_REG((^\s*module)|let rec |match\s+(\S+\s)+with)L_REG",
};
static const char* POS_81_1[] = {
  R"L_REG(=> |case\s+(\S+\s)+of)L_REG",
};
static const ComplexRule RULES_81[] = {
  {"OCaml", POS_81_0, 1, nullptr, 0},
  {"Standard ML", POS_81_1, 1, nullptr, 0},
};
static const char* POS_82_0[] = {
  R"L_REG(<!ENTITY )L_REG",
};
static const char* POS_82_1[] = {
  R"L_REG(\b(NEURON|INITIAL|UNITS)\b)L_REG",
};
static const char* POS_82_2[] = {
  R"L_REG(^\s*(?i:MODULE|END) [\w\.]+;)L_REG",
};
static const ComplexRule RULES_82[] = {
  {"XML", POS_82_0, 1, nullptr, 0},
  {"NMODL", POS_82_1, 1, nullptr, 0},
  {"Modula-2", POS_82_2, 1, nullptr, 0},
  {"Linux Kernel Module", nullptr, 0, nullptr, 0},
  {"AMPL", nullptr, 0, nullptr, 0},
};
static const char* POS_83_0[] = {
  R"L_REG(^\s*(alias|def|from|fn|import|struct|trait)\s)L_REG",
};
static const char* POS_83_1[] = {
  R"L_REG(^\s*<\?xml)L_REG",
};
static const ComplexRule RULES_83[] = {
  {"Mojo", POS_83_0, 1, nullptr, 0},
  {"XML", POS_83_1, 1, nullptr, 0},
};
static const char* POS_84_0[] = {
  R"L_REG(<persistence)L_REG",
};
static const char* POS_84_1[] = {
  R"L_REG(^\s*(ROWS|COLUMNS)\s*$)L_REG",
};
static const ComplexRule RULES_84[] = {
  {"JetBrains MPS", POS_84_0, 1, nullptr, 0},
  {"Mathematical Programming System", POS_84_1, 1, nullptr, 0},
};
static const char* POS_85_0[] = {
  R"L_REG(^[.'][A-Za-z]{2}(\s|$))L_REG",
};
static const char* POS_85_1[] = {
  R"L_REG(^\s*\.(?:include\s|globa?l\s|[A-Za-z][_A-Za-z0-9]*:))L_REG",
};
static const char* NEG_85_1[] = {
  R"L_REG(/\*)L_REG",
};
static const ComplexRule RULES_85[] = {
  {"Roff", POS_85_0, 1, nullptr, 0},
  {"Unix Assembly", POS_85_1, 1, NEG_85_1, 1},
  {"MAXScript", nullptr, 0, nullptr, 0},
};
static const char* POS_86_0[] = {
  R"L_REG(^cplusplus\(?[\S]*\)?[\s]*\{?\{?|^namespace[\s]+([^.\s]*\.)*[^.\s]*;|^struct[\s]+[\S]+|^message[\s]+[\S]+(extends )?[\S]*[\s]*|^packet[\s]+[\S]+|^class[\s]+[\S]+(extends )?[\S]*[\s]*|^enum[\s]+[\S]+|^import ([^.\s]*\.)*[^.\s]*;)L_REG",
};
static const char* POS_86_1[] = {
  R"L_REG(^[a-z]\w*(?:\/[a-z]\w*)?(?:<=\d+)?(?:\[(?:<=\d+)?\])?\s+\w+\b)L_REG",
};
static const char* NEG_86_1[] = {
  R"L_REG(^\s*[^\s@#\w-])L_REG",
};
static const ComplexRule RULES_86[] = {
  {"OMNeT++ MSG", POS_86_0, 1, nullptr, 0},
  {"ROS Interface", POS_86_1, 1, NEG_86_1, 1},
};
static const char* POS_87_0[] = {
  R"L_REG(^[.'])L_REG",
};
static const char* POS_87_1[] = {
  R"L_REG(^(module|namespace|using)\s)L_REG",
};
static const ComplexRule RULES_87[] = {
  {"Roff", POS_87_0, 1, nullptr, 0},
  {"Nemerle", POS_87_1, 1, nullptr, 0},
};
static const char* POS_88_0[] = {
  R"L_REG(^\s*<\?xml\s+version)L_REG",
};
static const char* POS_88_1[] = {
  R"L_REG(^[DGMT][0-9]{2}\*(?:\r?\n|\r))L_REG",
};
static const char* POS_88_2[] = {
  R"L_REG(^let(?:\srec)?(?:\s[a-zA-Z_][a-zA-Z0-9_]*)?|^import\s"[^"]+"\s+as\s|std\.[a-zA-Z_][a-zA-Z0-9_]*\.)L_REG",
};
static const char* POS_88_3[] = {
  R"L_REG(THE_TITLE)L_REG",
};
static const char* POS_88_4[] = {
  R"L_REG(^load "|^begin$|[0-9]\.$|^;)L_REG",
};
static const ComplexRule RULES_88[] = {
  {"XML", POS_88_0, 1, nullptr, 0},
  {"Gerber Image", POS_88_1, 1, nullptr, 0},
  {"Nickel", POS_88_2, 1, nullptr, 0},
  {"Text", POS_88_3, 1, nullptr, 0},
  {"NCL", POS_88_4, 1, nullptr, 0},
};
static const char* POS_89_0[] = {
  R"L_REG(^(b|g)[0-9]+ )L_REG",
};
static const ComplexRule RULES_89[] = {
  {"NL", POS_89_0, 1, nullptr, 0},
  {"NewLisp", nullptr, 0, nullptr, 0},
};
static const char* POS_90_0[] = {
  R"L_REG(^\.)L_REG",
};
static const ComplexRule RULES_90[] = {
  {"Roff", POS_90_0, 1, nullptr, 0},
  {"Noir", nullptr, 0, nullptr, 0},
};
static const char* POS_91_0[] = {
  R"L_REG(^\s*(import|export|module|def|let|let-env) )L_REG",
};
static const ComplexRule RULES_91[] = {
  {"Nushell", POS_91_0, 1, nullptr, 0},
  {"Nu", nullptr, 0, nullptr, 0},
};
static const char* POS_92_0[] = {
  R"L_REG((?:^|<)\s*[A-Za-z0-9_]+\s*=\s*<)L_REG",
};
static const char* POS_92_1[] = {
  R"L_REG(package\s+\w+|\b(?:im|ex)port\s*"[\w:./]+"|\w+\s*::\s*(?:proc|struct)\s*\(|^\s*//\s)L_REG",
};
static const ComplexRule RULES_92[] = {
  {"Object Data Instance Notation", POS_92_0, 1, nullptr, 0},
  {"Odin", POS_92_1, 1, nullptr, 0},
};
static const char* POS_93_0[] = {
  R"L_REG(^s?plot\b|^set\s+(term|terminal|out|output|[xy]tics|[xy]label|[xy]range|style)\b)L_REG",
};
static const char* POS_93_1[] = {
  R"L_REG(\bDEFINE\s+(?:VARIABLE|TEMP-TABLE|BUFFER|QUERY|INPUT\s+PARAMETER|OUTPUT\s+PARAMETER)\b|\bEND(?:\s+(?:PROCEDURE|FUNCTION|DO|FOR\s+EACH))?\.)L_REG",
};
static const ComplexRule RULES_93[] = {
  {"Gnuplot", POS_93_0, 1, nullptr, 0},
  {"OpenEdge ABL", POS_93_1, 1, nullptr, 0},
};
static const char* POS_94_0[] = {
  R"L_REG(<\?hh)L_REG",
};
static const char* POS_94_1[] = {
  R"L_REG(<\?[^h])L_REG",
};
static const ComplexRule RULES_94[] = {
  {"Hack", POS_94_0, 1, nullptr, 0},
  {"PHP", POS_94_1, 1, nullptr, 0},
};
static const char* POS_95_0[] = {
  R"L_REG(^\s*(module|import|amends|extends|local|const|fixed|abstract|open|class|typealias|@\w+)\b|^\s*[a-zA-Z0-9_$]+\s*(=|{|:)|^\s*`[^`]+`\s*(=|{|:)|for\s*\(|when\s*\()L_REG",
};
static const ComplexRule RULES_95[] = {
  {"Pkl", POS_95_0, 1, nullptr, 0},
  {"Pickle", nullptr, 0, nullptr, 0},
};
static const char* POS_96_0[] = {
  R"L_REG(^[^#]*:-)L_REG",
};
static const char* POS_96_1[] = {
  R"L_REG(\buse\s+(?:strict\b|v?5\b)|^\s*use\s+(?:constant|overload)\b|^\s*(?:\*|(?:our\s*)?@)EXPORT\s*=|^\s*package\s+[^\W\d]\w*(?:::\w+)*\s*(?:[;{]|\sv?\d)|[\s$][^\W\d]\w*(?::\w+)*->[a-zA-Z_\[({])L_REG",
};
static const char* NEG_96_1[] = {
  R"L_REG(^\s*use\s+v6\b)L_REG",
};
static const char* POS_96_2[] = {
  R"L_REG(^\s*(?:use\s+v6\b|\bmodule\b|\b(?:my\s+)?class\b))L_REG",
};
static const ComplexRule RULES_96[] = {
  {"Prolog", POS_96_0, 1, nullptr, 0},
  {"Perl", POS_96_1, 1, NEG_96_1, 1},
  {"Raku", POS_96_2, 1, nullptr, 0},
};
static const char* POS_97_0[] = {
  R"L_REG(^\s*(?:<\?xml\s|<!DOCTYPE\s+plist|<plist(?:\s+version\s*=\s*["']\d+(?:\.\d+)?["'])?\s*>\s*$))L_REG",
};
static const ComplexRule RULES_97[] = {
  {"XML Property List", POS_97_0, 1, nullptr, 0},
  {"OpenStep Property List", nullptr, 0, nullptr, 0},
};
static const char* POS_98_0[] = {
  R"L_REG(^\s*:-)L_REG",
};
static const ComplexRule RULES_98[] = {
  {"Prolog", POS_98_0, 1, nullptr, 0},
  {"Gnuplot", nullptr, 0, nullptr, 0},
};
static const char* POS_99_0[] = {
  R"L_REG(\buse\s+(?:strict\b|v?5\b)|^\s*use\s+(?:constant|overload)\b|^\s*(?:\*|(?:our\s*)?@)EXPORT\s*=|^\s*package\s+[^\W\d]\w*(?:::\w+)*\s*(?:[;{]|\sv?\d)|[\s$][^\W\d]\w*(?::\w+)*->[a-zA-Z_\[({])L_REG",
};
static const char* NEG_99_0[] = {
  R"L_REG(^\s*use\s+v6\b)L_REG",
};
static const char* POS_99_1[] = {
  R"L_REG(^\s*(?:use\s+v6\b|\bmodule\b|\b(?:my\s+)?class\b))L_REG",
};
static const char* POS_99_2[] = {
  R"L_REG(^\s*\/\* XPM \*\/)L_REG",
};
static const ComplexRule RULES_99[] = {
  {"Perl", POS_99_0, 1, NEG_99_0, 1},
  {"Raku", POS_99_1, 1, nullptr, 0},
  {"X PixMap", POS_99_2, 1, nullptr, 0},
};
static const char* POS_100_0[] = {
  R"L_REG(^[\s&&[^\r\n]]*=(comment|begin pod|begin para|item\d+))L_REG",
};
static const ComplexRule RULES_100[] = {
  {"Pod 6", POS_100_0, 1, nullptr, 0},
  {"Pod", nullptr, 0, nullptr, 0},
};
static const char* POS_101_0[] = {
  R"L_REG(^\s*end[.;])L_REG",
};
static const char* POS_101_1[] = {
  R"L_REG(^\s+\w+\s+=>\s)L_REG",
};
static const ComplexRule RULES_101[] = {
  {"Pascal", POS_101_0, 1, nullptr, 0},
  {"Puppet", POS_101_1, 1, nullptr, 0},
};
static const char* POS_102_0[] = {
  R"L_REG(^-(include\b.*\.pro$|keep\b|keepclassmembers\b|keepattributes\b))L_REG",
};
static const char* POS_102_1[] = {
  R"L_REG(^[^\[#]+:-)L_REG",
};
static const char* POS_102_2[] = {
  R"L_REG(last_client=)L_REG",
};
static const char* POS_102_3[] = {
  R"L_REG(HEADERS)L_REG",
  R"L_REG(SOURCES)L_REG",
};
static const char* POS_102_4[] = {
  R"L_REG(^\s*(?i:function|pro|compile_opt) \w[ \w,:]*$)L_REG",
};
static const ComplexRule RULES_102[] = {
  {"Proguard", POS_102_0, 1, nullptr, 0},
  {"Prolog", POS_102_1, 1, nullptr, 0},
  {"INI", POS_102_2, 1, nullptr, 0},
  {"QMake", POS_102_3, 2, nullptr, 0},
  {"IDL", POS_102_4, 1, nullptr, 0},
};
static const char* POS_103_0[] = {
  R"L_REG(^[^#!;][^=]*=)L_REG",
  R"L_REG(^[;\[])L_REG",
};
static const char* POS_103_1[] = {
  R"L_REG(^[^#!;][^=]*=)L_REG",
  R"L_REG(^[#!])L_REG",
};
static const char* POS_103_2[] = {
  R"L_REG(^[^#!;][^=]*=)L_REG",
};
static const char* POS_103_3[] = {
  R"L_REG(^[^#!][^:]*:)L_REG",
};
static const ComplexRule RULES_103[] = {
  {"INI", POS_103_0, 2, nullptr, 0},
  {"Java Properties", POS_103_1, 2, nullptr, 0},
  {"INI", POS_103_2, 1, nullptr, 0},
  {"Java Properties", POS_103_3, 1, nullptr, 0},
};
static const char* POS_104_0[] = {
  R"L_REG(((?i:[A-Z.][\w.]*:\{)|^\\(cd?|d|l|p|ts?) ))L_REG",
};
static const char* POS_104_1[] = {
  R"L_REG((?i:SELECT\s+[\w*,]+\s+FROM|(CREATE|ALTER|DROP)\s(DATABASE|SCHEMA|TABLE)))L_REG",
};
static const ComplexRule RULES_104[] = {
  {"q", POS_104_0, 1, nullptr, 0},
  {"HiveQL", POS_104_1, 1, nullptr, 0},
};
static const char* POS_105_0[] = {
  R"L_REG(^((\/{2,3})?\s*(namespace|operation)\b))L_REG",
};
static const char* POS_105_1[] = {
  R"L_REG((\w+\.prototype\.\w+|===|\bvar\b))L_REG",
};
static const ComplexRule RULES_105[] = {
  {"Q#", POS_105_0, 1, nullptr, 0},
  {"Qt Script", POS_105_1, 1, nullptr, 0},
};
static const char* POS_106_0[] = {
  R"L_REG((?i:\bRebol\b))L_REG",
};
static const char* POS_106_1[] = {
  R"L_REG((#include\s+["<](Types\.r|Carbon\/Carbon\.r)[">])|((resource|data|type)\s+'[A-Za-z0-9]{4}'\s+((\(.*\)\s+){0,1}){))L_REG",
};
static const char* POS_106_2[] = {
  R"L_REG(<-|^\s*#)L_REG",
};
static const ComplexRule RULES_106[] = {
  {"Rebol", POS_106_0, 1, nullptr, 0},
  {"Rez", POS_106_1, 1, nullptr, 0},
  {"R", POS_106_2, 1, nullptr, 0},
};
static const char* POS_107_0[] = {
  R"L_REG(^\s*module\s+type\s|^\s*(?:include|open)\s+\w+\s*;\s*$|^\s*let\s+(?:module\s\w+\s*=\s*\{|\w+:\s+.*=.*;\s*$))L_REG",
};
static const char* POS_107_1[] = {
  R"L_REG(^\s*#(?:(?:if|ifdef|define|pragma)\s+\w|\s*include\s+<[^>]+>)|^\s*template\s*<)L_REG",
};
static const ComplexRule RULES_107[] = {
  {"Reason", POS_107_0, 1, nullptr, 0},
  {"C++", POS_107_1, 1, nullptr, 0},
};
static const char* POS_108_0[] = {
  R"L_REG(^\s*(let|module|type)\s+\w*\s+=\s+|^\s*(?:include|open)\s+\w+\s*$)L_REG",
};
static const ComplexRule RULES_108[] = {
  {"ReScript", POS_108_0, 1, nullptr, 0},
  {"XML", nullptr, 0, nullptr, 0},
};
static const char* POS_109_0[] = {
  R"L_REG(^\*{3} (Settings|Variables|Keywords) \*{3}$)L_REG",
};
static const ComplexRule RULES_109[] = {
  {"RobotFramework", POS_109_0, 1, nullptr, 0},
};
static const char* POS_110_0[] = {
  R"L_REG((?i:^\.!|^\f|\f$|^\.end lit(?:eral)?\b|^\.[a-zA-Z].*?;\.[a-zA-Z](?:[; \t])|\^\*[^\s*][^*]*\\\*(?:$|\s)|^\.c;[ \t]*\w+))L_REG",
};
static const char* POS_110_1[] = {
  R"L_REG(^\.\\" )L_REG",
};
static const ComplexRule RULES_110[] = {
  {"RUNOFF", POS_110_0, 1, nullptr, 0},
  {"Roff", POS_110_1, 1, nullptr, 0},
};
static const char* POS_111_0[] = {
  R"L_REG(^(import|from|class|def)\s)L_REG",
};
static const ComplexRule RULES_111[] = {
  {"Python", POS_111_0, 1, nullptr, 0},
  {"Ren'Py", nullptr, 0, nullptr, 0},
};
static const char* POS_112_0[] = {
  R"L_REG(^(use |fn |mod |pub |macro_rules|impl|#!?\[))L_REG",
};
static const char* POS_112_1[] = {
  R"L_REG(#include|#pragma\s+(rs|version)|__attribute__)L_REG",
};
static const char* POS_112_2[] = {
  R"L_REG(^\s*<\?xml)L_REG",
};
static const ComplexRule RULES_112[] = {
  {"Rust", POS_112_0, 1, nullptr, 0},
  {"RenderScript", POS_112_1, 1, nullptr, 0},
  {"XML", POS_112_2, 1, nullptr, 0},
};
static const char* POS_113_0[] = {
  R"L_REG((?i:mov[lq]?)\s+[%\$])L_REG",
};
static const char* POS_113_1[] = {
  R"L_REG((?i:mov)\s+[^\s%]{2,},)L_REG",
};
static const ComplexRule RULES_113[] = {
  {"Unix Assembly", POS_113_0, 1, nullptr, 0},
  {"Assembly", POS_113_1, 1, nullptr, 0},
  {"Motorola 68K Assembly", nullptr, 0, nullptr, 0},
};
static const char* POS_114_0[] = {
  R"L_REG((?i:\^(this|super)\.|^\s*~\w+\s*=\.))L_REG",
};
static const char* POS_114_1[] = {
  R"L_REG((^\s*import (scala|java)\.|^\s*class\b))L_REG",
};
static const ComplexRule RULES_114[] = {
  {"SuperCollider", POS_114_0, 1, nullptr, 0},
  {"Scala", POS_114_1, 1, nullptr, 0},
};
static const char* POS_115_0[] = {
  R"L_REG((?i:\^(this|super)\.|^\s*(~\w+\s*=\.|SynthDef\b)))L_REG",
};
static const char* POS_115_1[] = {
  R"L_REG(^#+\s+(NAME|SYNOPSIS|DESCRIPTION))L_REG",
};
static const ComplexRule RULES_115[] = {
  {"SuperCollider", POS_115_0, 1, nullptr, 0},
  {"Markdown", POS_115_1, 1, nullptr, 0},
};
static const char* POS_116_0[] = {
  R"L_REG(\(#[\w-]+[!\?]|(?:[\)\]]\s*[\*\+\?](?:\s|$))|(?:^\s*\w+:\s*[\(\[\"])|\(#(?:set!|(?:not-)?(?:any-of|match)\?)|@[\w.-]+(?:\)\s|$))L_REG",
};
static const char* NEG_116_0[] = {
  R"L_REG(\([+\-:<>\/=~\)])L_REG",
};
static const char* POS_116_1[] = {
  R"L_REG((?:'[\(\*#]|\w->\w|\.\.\.[\s\)]|\([+\-:<>\/=~\)]|~>|[#`]\(|#:\w)|^\s*\((?:define\*?|import|library|lambda))L_REG",
};
static const char* NEG_116_1[] = {
  R"L_REG(\(#[\w-]+[!\?]|(?:[\)\]]\s*[\*\+\?](?:\s|$))|@[\w.-]+(?:\)\s|$))L_REG",
};
static const ComplexRule RULES_116[] = {
  {"Tree-sitter Query", POS_116_0, 1, NEG_116_0, 1},
  {"Scheme", POS_116_1, 1, NEG_116_1, 1},
};
static const char* POS_117_0[] = {
  R"L_REG(\bpragma\s+solidity\b|\b(?:abstract\s+)?contract\s+[a-zA-Z$_][a-zA-Z0-9$_]*(?:\s+is\s+(?:[a-zA-Z0-9$_][^\{]*?)?)?\s*\{)L_REG",
};
static const char* POS_117_1[] = {
  R"L_REG(^[DGMT][0-9]{2}\*(?:\r?\n|\r))L_REG",
};
static const ComplexRule RULES_117[] = {
  {"Solidity", POS_117_0, 1, nullptr, 0},
  {"Gerber Image", POS_117_1, 1, nullptr, 0},
};
static const char* POS_118_0[] = {
  R"L_REG((?i:^\\i\b|AS\s+\$\$|LANGUAGE\s+'?plpgsql'?|BEGIN(\s+WORK)?\s*;))L_REG",
};
static const char* POS_118_1[] = {
  R"L_REG((?i:ALTER\s+MODULE|MODE\s+DB2SQL|\bSYS(CAT|PROC)\.|ASSOCIATE\s+RESULT\s+SET|\bEND!\s*$))L_REG",
};
static const char* POS_118_2[] = {
  R"L_REG((?i:\$\$PLSQL_|XMLTYPE|systimestamp|\.nextval|CONNECT\s+BY|AUTHID\s+(DEFINER|CURRENT_USER)|constructor\W+function))L_REG",
};
static const char* POS_118_3[] = {
  R"L_REG((?i:^\s*GO\b|BEGIN(\s+TRY|\s+CATCH)|OUTPUT\s+INSERTED|DECLARE\s+@|\[dbo\]))L_REG",
};
static const ComplexRule RULES_118[] = {
  {"PLpgSQL", POS_118_0, 1, nullptr, 0},
  {"SQLPL", POS_118_1, 1, nullptr, 0},
  {"PLSQL", POS_118_2, 1, nullptr, 0},
  {"TSQL", POS_118_3, 1, nullptr, 0},
  {"SQL", nullptr, 0, nullptr, 0},
};
static const char* POS_119_0[] = {
  R"L_REG(^(\d{2}:\d{2}:\d{2},\d{3})\s*(-->)\s*(\d{2}:\d{2}:\d{2},\d{3})$)L_REG",
};
static const ComplexRule RULES_119[] = {
  {"SubRip Text", POS_119_0, 1, nullptr, 0},
  {"SRecode Template", nullptr, 0, nullptr, 0},
};
static const char* POS_120_0[] = {
  R"L_REG(^[a-z]\w*(?:\/[a-z]\w*)?(?:<=\d+)?(?:\[(?:<=\d+)?\])?\s+\w+\b)L_REG",
  R"L_REG(^---\s*$)L_REG",
};
static const char* NEG_120_0[] = {
  R"L_REG(^\s*[^\s@#\w-])L_REG",
};
static const ComplexRule RULES_120[] = {
  {"ROS Interface", POS_120_0, 2, NEG_120_0, 1},
};
static const char* POS_121_0[] = {
  R"L_REG(\$\w+[($]|.!\s*.+?\s*!.|<!\s*.+?\s*!>|\[!\s*.+?\s*!\]|\{!\s*.+?\s*!\})L_REG",
};
static const char* POS_121_1[] = {
  R"L_REG(^\s*[\[{(^"'\w#]|[a-zA-Z_]\w*\s*:=\s*[a-zA-Z_]\w*|class\s*>>\s*[a-zA-Z_]\w*|^[a-zA-Z_]\w*\s+[a-zA-Z_]\w*:|^Class\s*\{|if(?:True|False):\s*\[)L_REG",
};
static const ComplexRule RULES_121[] = {
  {"StringTemplate", POS_121_0, 1, nullptr, 0},
  {"Smalltalk", POS_121_1, 1, nullptr, 0},
};
static const char* POS_122_0[] = {
  R"L_REG(^loop_\s*$)L_REG",
};
static const ComplexRule RULES_122[] = {
  {"STAR", POS_122_0, 1, nullptr, 0},
  {"Starlark", nullptr, 0, nullptr, 0},
};
static const char* POS_123_0[] = {
  R"L_REG(^\s*solid(?:$|\s)[\s\S]*^endsolid(?:$|\s))L_REG",
};
static const ComplexRule RULES_123[] = {
  {"STL", POS_123_0, 1, nullptr, 0},
};
static const char* POS_124_0[] = {
  R"L_REG(^(;|\*[^*]+$))L_REG",
};
static const ComplexRule RULES_124[] = {
  {"Survex data", POS_124_0, 1, nullptr, 0},
  {"mdsvex", nullptr, 0, nullptr, 0},
};
static const char* POS_125_0[] = {
  R"L_REG(^\s*(?:(?:abi|dep|fn|impl|mod|pub|trait)\s|#\[))L_REG",
};
static const char* POS_125_1[] = {
  R"L_REG(^\s*<\?xml\s+version)L_REG",
};
static const ComplexRule RULES_125[] = {
  {"Sway", POS_125_0, 1, nullptr, 0},
  {"XML", POS_125_1, 1, nullptr, 0},
};
static const char* POS_126_0[] = {
  R"L_REG(\buse\s+(?:strict\b|v?5\b)|^\s*use\s+(?:constant|overload)\b|^\s*(?:\*|(?:our\s*)?@)EXPORT\s*=|^\s*package\s+[^\W\d]\w*(?:::\w+)*\s*(?:[;{]|\sv?\d)|[\s$][^\W\d]\w*(?::\w+)*->[a-zA-Z_\[({])L_REG",
};
static const char* NEG_126_0[] = {
  R"L_REG(^\s*use\s+v6\b)L_REG",
};
static const char* POS_126_1[] = {
  R"L_REG(^\s*(?:use\s+v6\b|\bmodule\b|\bmy\s+class\b))L_REG",
};
static const char* POS_126_2[] = {
  R"L_REG(^\s*%[ \t]+|^\s*var\s+\w+(\s*:\s*\w+)?\s*:=\s*\w+)L_REG",
};
static const ComplexRule RULES_126[] = {
  {"Perl", POS_126_0, 1, NEG_126_0, 1},
  {"Raku", POS_126_1, 1, nullptr, 0},
  {"Turing", POS_126_2, 1, nullptr, 0},
  {"Terra", nullptr, 0, nullptr, 0},
};
static const char* POS_127_0[] = {
  R"L_REG(^\s*\{\")L_REG",
};
static const ComplexRule RULES_127[] = {
  {"JSON", POS_127_0, 1, nullptr, 0},
  {"Tact", nullptr, 0, nullptr, 0},
};
static const char* POS_128_0[] = {
  R"L_REG(<%[@!=\s]?\s*(taglib|tag|include|attribute|variable)\s)L_REG",
};
static const ComplexRule RULES_128[] = {
  {"Java Server Pages", POS_128_0, 1, nullptr, 0},
};
static const char* POS_129_0[] = {
  R"L_REG(--.*)L_REG",
  R"L_REG(\b(local|function|end|record|interface|enum)\b)L_REG",
};
static const ComplexRule RULES_129[] = {
  {"Teal", POS_129_0, 2, nullptr, 0},
  {"Type Language", nullptr, 0, nullptr, 0},
};
static const char* POS_130_0[] = {
  R"L_REG(^\\.{0,10}TLV_version)L_REG",
};
static const ComplexRule RULES_130[] = {
  {"TL-Verilog", POS_130_0, 1, nullptr, 0},
};
static const char* POS_131_0[] = {
  R"L_REG(^## |@no-lib-strip@)L_REG",
};
static const char* POS_131_1[] = {
  R"L_REG(^\\(contentsline|defcounter|beamer|boolfalse))L_REG",
};
static const ComplexRule RULES_131[] = {
  {"World of Warcraft Addon Data", POS_131_0, 1, nullptr, 0},
  {"TeX", POS_131_1, 1, nullptr, 0},
};
static const char* POS_132_0[] = {
  R"L_REG(\{\{-?\s*(\`?\"\\?\"?|\/\*\s|\w*)\b)L_REG",
};
static const char* POS_132_1[] = {
  R"L_REG((?<!\{)\{(\*\s|\$|\/)?\w*\b)L_REG",
};
static const ComplexRule RULES_132[] = {
  {"Go Template", POS_132_0, 1, nullptr, 0},
  {"Smarty", POS_132_1, 1, nullptr, 0},
};
static const char* POS_133_0[] = {
  R"L_REG(<TS\b)L_REG",
};
static const ComplexRule RULES_133[] = {
  {"XML", POS_133_0, 1, nullptr, 0},
  {"TypeScript", nullptr, 0, nullptr, 0},
};
static const char* POS_134_0[] = {
  R"L_REG(^(import|using|namespace|interface|op|model|scalar|alias|union|enum)\s)L_REG",
};
static const char* POS_134_1[] = {
  R"L_REG(^(NAME|TYPE|DIMENSION|EDGE_WEIGHT_TYPE|EDGE_WEIGHT_FORMAT)\s*:)L_REG",
};
static const ComplexRule RULES_134[] = {
  {"TypeSpec", POS_134_0, 1, nullptr, 0},
  {"TSPLIB data", POS_134_1, 1, nullptr, 0},
};
static const char* POS_135_0[] = {
  R"L_REG(gap> )L_REG",
};
static const ComplexRule RULES_135[] = {
  {"GAP", POS_135_0, 1, nullptr, 0},
  {"Scilab", nullptr, 0, nullptr, 0},
};
static const char* POS_136_0[] = {
  R"L_REG((?i:^\s*<\?xml\s+version))L_REG",
};
static const ComplexRule RULES_136[] = {
  {"XML", POS_136_0, 1, nullptr, 0},
  {"TSX", nullptr, 0, nullptr, 0},
};
static const char* POS_137_0[] = {
  R"L_REG((?:(?:^|[ \t])(?:vi|Vi(?=m))(?:m[<=>]?[0-9]+|m)?|[ \t]ex)(?=:(?=[ \t]*set?[ \t][^\r\n:]+:)|:(?![ \t]*set?[ \t]))(?:(?:[ \t]*:[ \t]*|[ \t])\w*(?:[ \t]*=(?:[^\\\s]|\\.)*)?)*[ \t:](?:filetype|ft|syntax)[ \t]*=(help)(?=$|\s|:))L_REG",
};
static const char* POS_137_1[] = {
  R"L_REG( ^\n\n# IPv4 address\n(?:\n  (?!\.)\n  (?:\.?\n    (?: 25[0-5]  # 250-255\n    |   2[0-4]\d # 200-249\n    |   1\d\d    # 100-199\n    |   [1-9]?\d # 0-99\n    )\b\n){4})\n\n# CIDR notation: /[0-32]\n(?:/(3[0-2]|[12]?\d)\b)?\n\n# Domains list\n(?:\n  [ \t]+\n  \w[-\w]* (?:\.\w[-\w]*)*\n  (?<!-)\b\n)*+\n\n(?:$|\s))L_REG",
};
static const ComplexRule RULES_137[] = {
  {"Vim Help File", POS_137_0, 1, nullptr, 0},
  {"Hosts File", POS_137_1, 1, nullptr, 0},
  {"Adblock Filter List", nullptr, 0, nullptr, 0},
  {"Text", nullptr, 0, nullptr, 0},
};
static const char* POS_138_0[] = {
  R"L_REG(^#(import|show|let|set))L_REG",
};
static const ComplexRule RULES_138[] = {
  {"Typst", POS_138_0, 1, nullptr, 0},
  {"XML", nullptr, 0, nullptr, 0},
};
static const char* POS_139_0[] = {
  R"L_REG(^\[InternetShortcut\](?:\r?\n|\r)([^\s\[][^\r\n]*(?:\r?\n|\r)){0,20}URL=)L_REG",
};
static const ComplexRule RULES_139[] = {
  {"INI", POS_139_0, 1, nullptr, 0},
};
static const char* POS_140_0[] = {
  R"L_REG((?:^|\s)(?:Proof|Qed)\.(?:$|\s)|(?:^|\s)Require[ \t]+(Import|Export)\s)L_REG",
};
static const char* POS_140_1[] = {
  R"L_REG(^[ \t]*module\s+[^\s()]+\s*\#?\(|^[ \t]*`(?:define|ifdef|ifndef|include|timescale|pragma)|^[ \t]*always[ \t]*@|^[ \t]*initial[ \t]*(begin|@))L_REG",
};
static const char* POS_140_2[] = {
  R"L_REG(\$(?:if|else)[ \t]|^[ \t]*fn\s+[^\s()]+\(.*?\).*?\{|^[ \t]*for\s*\{)L_REG",
};
static const ComplexRule RULES_140[] = {
  {"Rocq Prover", POS_140_0, 1, nullptr, 0},
  {"Verilog", POS_140_1, 1, nullptr, 0},
  {"V", POS_140_2, 1, nullptr, 0},
};
static const char* POS_141_0[] = {
  R"L_REG(^UseVimball)L_REG",
};
static const ComplexRule RULES_141[] = {
  {"Vim Script", POS_141_0, 1, nullptr, 0},
  {"VBA", nullptr, 0, nullptr, 0},
};
static const char* POS_142_0[] = {
  R"L_REG(^##fileformat=VCF)L_REG",
};
static const char* POS_142_1[] = {
  R"L_REG(^BEGIN:VCARD)L_REG",
};
static const ComplexRule RULES_142[] = {
  {"TSV", POS_142_0, 1, nullptr, 0},
  {"vCard", POS_142_1, 1, nullptr, 0},
};
static const char* POS_143_0[] = {
  R"L_REG(&ANALYZE-SUSPEND _UIB-CODE-BLOCK _CUSTOM _DEFINITIONS)L_REG",
};
static const char* POS_143_1[] = {
  R"L_REG(^@(<|\w+\.))L_REG",
};
static const ComplexRule RULES_143[] = {
  {"OpenEdge ABL", POS_143_0, 1, nullptr, 0},
  {"CWeb", POS_143_1, 1, nullptr, 0},
};
static const char* POS_144_0[] = {
  R"L_REG(^xof 030(2|3)(?:txt|bin|tzip|bzip)\b)L_REG",
};
static const char* POS_144_1[] = {
  R"L_REG(\b(program|version)\s+\w+\s*\{|\bunion\s+\w+\s+switch\s*\()L_REG",
};
static const char* POS_144_2[] = {
  R"L_REG(^%(end|ctor|hook|group)\b)L_REG",
};
static const char* POS_144_3[] = {
  R"L_REG(OUTPUT_ARCH\(|OUTPUT_FORMAT\(|SECTIONS)L_REG",
};
static const ComplexRule RULES_144[] = {
  {"DirectX 3D File", POS_144_0, 1, nullptr, 0},
  {"RPC", POS_144_1, 1, nullptr, 0},
  {"Logos", POS_144_2, 1, nullptr, 0},
  {"Linker Script", POS_144_3, 1, nullptr, 0},
};
static const char* POS_145_0[] = {
  R"L_REG(^\t+.*?[^\s:].*?:)L_REG",
};
static const char* NEG_145_0[] = {
  R"L_REG(---)L_REG",
};
static const char* POS_145_1[] = {
  R"L_REG(swagger:\s?'?"?2.[0-9.]+'?"?)L_REG",
};
static const char* POS_145_2[] = {
  R"L_REG(openapi:\s?'?"?3.[0-9.]+'?"?)L_REG",
};
static const ComplexRule RULES_145[] = {
  {"MiniYAML", POS_145_0, 1, NEG_145_0, 1},
  {"OASv2-yaml", POS_145_1, 1, nullptr, 0},
  {"OASv3-yaml", POS_145_2, 1, nullptr, 0},
  {"YAML", nullptr, 0, nullptr, 0},
};
static const char* POS_146_0[] = {
  R"L_REG(^\t+.*?[^\s:].*?:)L_REG",
};
static const char* NEG_146_0[] = {
  R"L_REG(---)L_REG",
};
static const char* POS_146_1[] = {
  R"L_REG(swagger:\s?'?"?2.[0-9.]+'?"?)L_REG",
};
static const char* POS_146_2[] = {
  R"L_REG(openapi:\s?'?"?3.[0-9.]+'?"?)L_REG",
};
static const ComplexRule RULES_146[] = {
  {"MiniYAML", POS_146_0, 1, NEG_146_0, 1},
  {"OASv2-yaml", POS_146_1, 1, nullptr, 0},
  {"OASv3-yaml", POS_146_2, 1, nullptr, 0},
  {"YAML", nullptr, 0, nullptr, 0},
};
static const char* POS_147_0[] = {
  R"L_REG(^\s*[{\[])L_REG",
};
static const ComplexRule RULES_147[] = {
  {"JSON", POS_147_0, 1, nullptr, 0},
  {"Yacc", nullptr, 0, nullptr, 0},
};

const DisambiguationEntry GENERATED_DISAMBIG_MAP[] = {
  {".1", RULES_0, 4},
  {".1in", RULES_1, 3},
  {".1m", RULES_2, 3},
  {".1x", RULES_3, 3},
  {".2", RULES_4, 4},
  {".3", RULES_5, 4},
  {".3in", RULES_6, 3},
  {".3m", RULES_7, 3},
  {".3p", RULES_8, 3},
  {".3pm", RULES_9, 3},
  {".3qt", RULES_10, 3},
  {".3x", RULES_11, 3},
  {".4", RULES_12, 4},
  {".5", RULES_13, 4},
  {".6", RULES_14, 4},
  {".7", RULES_15, 4},
  {".8", RULES_16, 4},
  {".9", RULES_17, 4},
  {".action", RULES_18, 1},
  {".al", RULES_19, 2},
  {".alg", RULES_20, 1},
  {".app", RULES_21, 1},
  {".as", RULES_22, 2},
  {".asc", RULES_23, 3},
  {".asm", RULES_24, 2},
  {".asy", RULES_25, 2},
  {".bas", RULES_26, 7},
  {".bb", RULES_27, 3},
  {".bf", RULES_28, 4},
  {".bi", RULES_29, 3},
  {".bs", RULES_30, 3},
  {".bst", RULES_31, 2},
  {".builds", RULES_32, 1},
  {".cairo", RULES_33, 2},
  {".ch", RULES_34, 2},
  {".cl", RULES_35, 3},
  {".cls", RULES_36, 6},
  {".cmp", RULES_37, 1},
  {".cs", RULES_38, 2},
  {".csc", RULES_39, 1},
  {".csl", RULES_40, 2},
  {".d", RULES_41, 3},
  {".dsp", RULES_42, 2},
  {".e", RULES_43, 3},
  {".ecl", RULES_44, 2},
  {".es", RULES_45, 2},
  {".ex", RULES_46, 2},
  {".f", RULES_47, 3},
  {".for", RULES_48, 3},
  {".fr", RULES_49, 3},
  {".frm", RULES_50, 3},
  {".fs", RULES_51, 4},
  {".ftl", RULES_52, 2},
  {".g", RULES_53, 2},
  {".gd", RULES_54, 2},
  {".gml", RULES_55, 4},
  {".gs", RULES_56, 4},
  {".gsc", RULES_57, 1},
  {".gsh", RULES_58, 1},
  {".gts", RULES_59, 2},
  {".h", RULES_60, 3},
  {".hh", RULES_61, 2},
  {".html", RULES_62, 2},
  {".i", RULES_63, 3},
  {".ice", RULES_64, 2},
  {".inc", RULES_65, 12},
  {".json", RULES_66, 3},
  {".k", RULES_67, 2},
  {".l", RULES_68, 4},
  {".lean", RULES_69, 2},
  {".lisp", RULES_70, 2},
  {".lp", RULES_71, 3},
  {".ls", RULES_72, 2},
  {".lsp", RULES_73, 2},
  {".m", RULES_74, 7},
  {".m4", RULES_75, 2},
  {".man", RULES_76, 3},
  {".mask", RULES_77, 2},
  {".mc", RULES_78, 3},
  {".md", RULES_79, 3},
  {".mdoc", RULES_80, 3},
  {".ml", RULES_81, 2},
  {".mod", RULES_82, 5},
  {".mojo", RULES_83, 2},
  {".mps", RULES_84, 2},
  {".ms", RULES_85, 3},
  {".msg", RULES_86, 2},
  {".n", RULES_87, 2},
  {".ncl", RULES_88, 5},
  {".nl", RULES_89, 2},
  {".nr", RULES_90, 2},
  {".nu", RULES_91, 2},
  {".odin", RULES_92, 2},
  {".p", RULES_93, 2},
  {".php", RULES_94, 2},
  {".pkl", RULES_95, 2},
  {".pl", RULES_96, 3},
  {".plist", RULES_97, 2},
  {".plt", RULES_98, 2},
  {".pm", RULES_99, 3},
  {".pod", RULES_100, 2},
  {".pp", RULES_101, 2},
  {".pro", RULES_102, 5},
  {".properties", RULES_103, 4},
  {".q", RULES_104, 2},
  {".qs", RULES_105, 2},
  {".r", RULES_106, 3},
  {".re", RULES_107, 2},
  {".res", RULES_108, 2},
  {".resource", RULES_109, 1},
  {".rno", RULES_110, 2},
  {".rpy", RULES_111, 2},
  {".rs", RULES_112, 3},
  {".s", RULES_113, 3},
  {".sc", RULES_114, 2},
  {".scd", RULES_115, 2},
  {".scm", RULES_116, 2},
  {".sol", RULES_117, 2},
  {".sql", RULES_118, 5},
  {".srt", RULES_119, 2},
  {".srv", RULES_120, 1},
  {".st", RULES_121, 2},
  {".star", RULES_122, 2},
  {".stl", RULES_123, 1},
  {".svx", RULES_124, 2},
  {".sw", RULES_125, 2},
  {".t", RULES_126, 4},
  {".tact", RULES_127, 2},
  {".tag", RULES_128, 1},
  {".tl", RULES_129, 2},
  {".tlv", RULES_130, 1},
  {".toc", RULES_131, 2},
  {".tpl", RULES_132, 2},
  {".ts", RULES_133, 2},
  {".tsp", RULES_134, 2},
  {".tst", RULES_135, 2},
  {".tsx", RULES_136, 2},
  {".txt", RULES_137, 4},
  {".typ", RULES_138, 2},
  {".url", RULES_139, 1},
  {".v", RULES_140, 3},
  {".vba", RULES_141, 2},
  {".vcf", RULES_142, 2},
  {".w", RULES_143, 2},
  {".x", RULES_144, 4},
  {".yaml", RULES_145, 4},
  {".yml", RULES_146, 4},
  {".yy", RULES_147, 2},
};
const size_t GENERATED_DISAMBIG_MAP_SIZE = 148;

const LangEntry GENERATED_EXT_MAP[] = {
  {".1", "Roff"},
  {".1in", "Roff"},
  {".1m", "Roff"},
  {".1x", "Roff"},
  {".2", "Roff"},
  {".2da", "2-Dimensional Array"},
  {".3", "Roff"},
  {".3in", "Roff"},
  {".3m", "Roff"},
  {".3p", "Roff"},
  {".3pm", "Roff"},
  {".3qt", "Roff"},
  {".3x", "Roff"},
  {".4", "Roff"},
  {".4dform", "JSON"},
  {".4dm", "4D"},
  {".4dproject", "JSON"},
  {".4gl", "Genero 4gl"},
  {".4th", "Forth"},
  {".5", "Roff"},
  {".6", "Roff"},
  {".6pl", "Raku"},
  {".6pm", "Raku"},
  {".7", "Roff"},
  {".8", "Roff"},
  {".8xp", "TI Program"},
  {".8xp.txt", "TI Program"},
  {".9", "Roff"},
  {"._coffee", "CoffeeScript"},
  {"._js", "JavaScript"},
  {"._ls", "LiveScript"},
  {".a51", "Assembly"},
  {".abap", "ABAP"},
  {".abnf", "ABNF"},
  {".action", "ROS Interface"},
  {".ada", "Ada"},
  {".adb", "Ada"},
  {".adml", "XML"},
  {".admx", "XML"},
  {".ado", "Stata"},
  {".adp", "Tcl"},
  {".ads", "Ada"},
  {".afm", "Adobe Font Metrics"},
  {".agc", "Apollo Guidance Computer"},
  {".agda", "Agda"},
  {".ahk", "AutoHotkey"},
  {".ahkl", "AutoHotkey"},
  {".aidl", "AIDL"},
  {".aj", "AspectJ"},
  {".ak", "Aiken"},
  {".al", "Perl"},
  {".alg", "ALGOL"},
  {".als", "Alloy"},
  {".ampl", "AMPL"},
  {".angelscript", "AngelScript"},
  {".anim", "Unity3D Asset"},
  {".ant", "XML"},
  {".antlers.html", "Antlers"},
  {".antlers.php", "Antlers"},
  {".antlers.xml", "Antlers"},
  {".apacheconf", "ApacheConf"},
  {".apex", "Apex"},
  {".apib", "API Blueprint"},
  {".apl", "APL"},
  {".app", "Erlang"},
  {".app.src", "Erlang"},
  {".applescript", "AppleScript"},
  {".arc", "Arc"},
  {".arpa", "DNS Zone"},
  {".arr", "Pyret"},
  {".as", "ActionScript"},
  {".asax", "ASP.NET"},
  {".asc", "AGS Script"},
  {".ascx", "ASP.NET"},
  {".asd", "Common Lisp"},
  {".asddls", "ABAP CDS"},
  {".ash", "AGS Script"},
  {".ashx", "ASP.NET"},
  {".asl", "ASL"},
  {".asm", "Assembly"},
  {".asmx", "ASP.NET"},
  {".asn", "ASN.1"},
  {".asn1", "ASN.1"},
  {".asp", "Classic ASP"},
  {".aspx", "ASP.NET"},
  {".asset", "Unity3D Asset"},
  {".astro", "Astro"},
  {".asy", "Asymptote"},
  {".au3", "AutoIt"},
  {".aug", "Augeas"},
  {".auk", "Awk"},
  {".aux", "TeX"},
  {".avdl", "Avro IDL"},
  {".avsc", "JSON"},
  {".aw", "PHP"},
  {".awk", "Awk"},
  {".axaml", "XML"},
  {".axd", "ASP.NET"},
  {".axi", "NetLinx"},
  {".axi.erb", "NetLinx+ERB"},
  {".axml", "XML"},
  {".axs", "NetLinx"},
  {".axs.erb", "NetLinx+ERB"},
  {".b", "Brainfuck"},
  {".bal", "Ballerina"},
  {".bas", "B4X"},
  {".bash", "Shell"},
  {".bat", "Batchfile"},
  {".bats", "Shell"},
  {".bb", "BitBake"},
  {".bbappend", "BitBake"},
  {".bbclass", "BitBake"},
  {".bbx", "TeX"},
  {".bdf", "Glyph Bitmap Distribution Format"},
  {".bdy", "PLSQL"},
  {".be", "Berry"},
  {".befunge", "Befunge"},
  {".bf", "Beef"},
  {".bi", "FreeBASIC"},
  {".bib", "BibTeX"},
  {".bibtex", "BibTeX"},
  {".bicep", "Bicep"},
  {".bicepparam", "Bicep"},
  {".bison", "Bison"},
  {".blade", "Blade"},
  {".blade.php", "Blade"},
  {".bmx", "BlitzMax"},
  {".bones", "JavaScript"},
  {".boo", "Boo"},
  {".boot", "Clojure"},
  {".bpl", "Boogie"},
  {".bqn", "BQN"},
  {".brd", "Eagle"},
  {".bro", "Zeek"},
  {".brs", "Brightscript"},
  {".bru", "Bru"},
  {".bs", "Bikeshed"},
  {".bsl", "1C Enterprise"},
  {".bst", "BibTeX Style"},
  {".bsv", "Bluespec"},
  {".builder", "Ruby"},
  {".builds", "XML"},
  {".bzl", "Starlark"},
  {".c", "C"},
  {".c++", "C++"},
  {".c++-objdump", "Cpp-ObjDump"},
  {".c++objdump", "Cpp-ObjDump"},
  {".c-objdump", "C-ObjDump"},
  {".c3", "C3"},
  {".cabal", "Cabal Config"},
  {".caddyfile", "Caddyfile"},
  {".cairo", "Cairo"},
  {".cake", "C#"},
  {".capnp", "Cap'n Proto"},
  {".carbon", "Carbon"},
  {".cats", "C"},
  {".cbl", "COBOL"},
  {".cbx", "TeX"},
  {".cc", "C++"},
  {".ccp", "COBOL"},
  {".ccproj", "XML"},
  {".ccxml", "XML"},
  {".cdc", "Cadence"},
  {".cdf", "Wolfram Language"},
  {".cds", "CAP CDS"},
  {".ceylon", "Ceylon"},
  {".cfc", "ColdFusion CFC"},
  {".cfg", "HAProxy"},
  {".cfm", "ColdFusion"},
  {".cfml", "ColdFusion"},
  {".cgi", "Perl"},
  {".cginc", "HLSL"},
  {".ch", "Charity"},
  {".chem", "Pic"},
  {".chpl", "Chapel"},
  {".chs", "C2hs Haskell"},
  {".cil", "CIL"},
  {".circom", "Circom"},
  {".cirru", "Cirru"},
  {".cj", "Cangjie"},
  {".cjs", "JavaScript"},
  {".cjsx", "CoffeeScript"},
  {".ck", "ChucK"},
  {".cl", "Common Lisp"},
  {".cl2", "Clojure"},
  {".clar", "Clarity"},
  {".click", "Click"},
  {".clixml", "XML"},
  {".clj", "Clojure"},
  {".cljc", "Clojure"},
  {".cljs", "Clojure"},
  {".cljs.hl", "Clojure"},
  {".cljscm", "Clojure"},
  {".cljx", "Clojure"},
  {".clp", "CLIPS"},
  {".cls", "Apex"},
  {".clue", "Clue"},
  {".clw", "Clarion"},
  {".cmake", "CMake"},
  {".cmake.in", "CMake"},
  {".cmd", "Batchfile"},
  {".cmp", "Gerber Image"},
  {".cnc", "G-code"},
  {".cnf", "INI"},
  {".cob", "COBOL"},
  {".cobol", "COBOL"},
  {".cocci", "SmPL"},
  {".code-snippets", "JSON with Comments"},
  {".code-workspace", "JSON with Comments"},
  {".coffee", "CoffeeScript"},
  {".coffee.md", "Literate CoffeeScript"},
  {".com", "DIGITAL Command Language"},
  {".command", "Shell"},
  {".conll", "CoNLL-U"},
  {".conllu", "CoNLL-U"},
  {".containerfile", "Dockerfile"},
  {".cook", "Cooklang"},
  {".coq", "Rocq Prover"},
  {".cp", "C++"},
  {".cpp", "C++"},
  {".cpp-objdump", "Cpp-ObjDump"},
  {".cppm", "C++"},
  {".cppobjdump", "Cpp-ObjDump"},
  {".cproject", "XML"},
  {".cps", "Component Pascal"},
  {".cpy", "COBOL"},
  {".cql", "CQL"},
  {".cr", "Crystal"},
  {".crc32", "Checksums"},
  {".cs", "C#"},
  {".cs.pp", "C#"},
  {".csc", "GSC"},
  {".cscfg", "XML"},
  {".csd", "Csound Document"},
  {".csdef", "XML"},
  {".csh", "Tcsh"},
  {".cshtml", "HTML+Razor"},
  {".csl", "Kusto"},
  {".cson", "CSON"},
  {".csproj", "XML"},
  {".css", "CSS"},
  {".csv", "CSV"},
  {".csx", "C#"},
  {".ct", "XML"},
  {".ctl", "Visual Basic 6.0"},
  {".ctp", "PHP"},
  {".cts", "TypeScript"},
  {".cu", "Cuda"},
  {".cue", "CUE"},
  {".cuh", "Cuda"},
  {".curry", "Curry"},
  {".cw", "Redcode"},
  {".cwl", "Common Workflow Language"},
  {".cxx", "C++"},
  {".cxx-objdump", "Cpp-ObjDump"},
  {".cy", "Cycript"},
  {".cylc", "Cylc"},
  {".cyp", "Cypher"},
  {".cypher", "Cypher"},
  {".d", "D"},
  {".d-objdump", "D-ObjDump"},
  {".d2", "D2"},
  {".dae", "COLLADA"},
  {".darcspatch", "Darcs Patch"},
  {".dart", "Dart"},
  {".das", "Daslang"},
  {".dats", "ATS"},
  {".db2", "SQLPL"},
  {".dcl", "Clean"},
  {".ddl", "PLSQL"},
  {".decls", "BlitzBasic"},
  {".depproj", "XML"},
  {".desktop", "desktop"},
  {".desktop.in", "desktop"},
  {".dfm", "Pascal"},
  {".dfy", "Dafny"},
  {".dhall", "Dhall"},
  {".di", "D"},
  {".diff", "Diff"},
  {".dircolors", "dircolors"},
  {".dita", "XML"},
  {".ditamap", "XML"},
  {".ditaval", "XML"},
  {".djs", "Dogescript"},
  {".dll.config", "XML"},
  {".dlm", "IDL"},
  {".dm", "DM"},
  {".do", "Stata"},
  {".dockerfile", "Dockerfile"},
  {".dof", "INI"},
  {".doh", "Stata"},
  {".dot", "Graphviz (DOT)"},
  {".dotsettings", "XML"},
  {".dpatch", "Darcs Patch"},
  {".dpr", "Pascal"},
  {".druby", "Mirah"},
  {".dsc", "Debian Package Control File"},
  {".dsl", "ASL"},
  {".dsp", "Faust"},
  {".dsr", "Visual Basic 6.0"},
  {".dtx", "TeX"},
  {".duby", "Mirah"},
  {".dwl", "DataWeave"},
  {".dyalog", "APL"},
  {".dyl", "Dylan"},
  {".dylan", "Dylan"},
  {".dzn", "MiniZinc Data"},
  {".e", "E"},
  {".eam.fs", "Formatted"},
  {".eb", "Easybuild"},
  {".ebnf", "EBNF"},
  {".ebuild", "Gentoo Ebuild"},
  {".ec", "eC"},
  {".ecl", "ECL"},
  {".eclass", "Gentoo Eclass"},
  {".eclxml", "ECL"},
  {".ecr", "HTML+ECR"},
  {".ect", "EJS"},
  {".edc", "Edje Data Collection"},
  {".edge", "Edge"},
  {".edgeql", "EdgeQL"},
  {".editorconfig", "EditorConfig"},
  {".edn", "edn"},
  {".eh", "eC"},
  {".ejs", "EJS"},
  {".ejs.t", "EJS"},
  {".el", "Emacs Lisp"},
  {".eliom", "OCaml"},
  {".eliomi", "OCaml"},
  {".elm", "Elm"},
  {".elv", "Elvish"},
  {".em", "EmberScript"},
  {".emacs", "Emacs Lisp"},
  {".emacs.desktop", "Emacs Lisp"},
  {".emberscript", "EmberScript"},
  {".eml", "E-mail"},
  {".env", "Dotenv"},
  {".epj", "Ecere Projects"},
  {".eps", "PostScript"},
  {".epsi", "PostScript"},
  {".eq", "EQ"},
  {".erb", "HTML+ERB"},
  {".erb.deface", "HTML+ERB"},
  {".erl", "Erlang"},
  {".es", "JavaScript"},
  {".es6", "JavaScript"},
  {".escript", "Erlang"},
  {".esdl", "EdgeQL"},
  {".ex", "Elixir"},
  {".exs", "Elixir"},
  {".eye", "Ruby"},
  {".f", "Filebench WML"},
  {".f03", "Fortran Free Form"},
  {".f08", "Fortran Free Form"},
  {".f77", "Fortran"},
  {".f90", "Fortran Free Form"},
  {".f95", "Fortran Free Form"},
  {".factor", "Factor"},
  {".fan", "Fantom"},
  {".fancypack", "Fancy"},
  {".fbs", "FlatBuffers"},
  {".fcgi", "Perl"},
  {".fea", "OpenType Feature File"},
  {".feature", "Gherkin"},
  {".filters", "XML"},
  {".fir", "FIRRTL"},
  {".fish", "fish"},
  {".flex", "JFlex"},
  {".flf", "FIGlet Font"},
  {".flix", "Flix"},
  {".flux", "FLUX"},
  {".fnc", "PLSQL"},
  {".fnl", "Fennel"},
  {".for", "Formatted"},
  {".forth", "Forth"},
  {".fp", "GLSL"},
  {".fpp", "Fortran"},
  {".fr", "Forth"},
  {".frag", "JavaScript"},
  {".frg", "GLSL"},
  {".frm", "INI"},
  {".frt", "Forth"},
  {".fs", "F#"},
  {".fsh", "GLSL"},
  {".fshader", "GLSL"},
  {".fsi", "F#"},
  {".fsproj", "XML"},
  {".fst", "F*"},
  {".fsti", "F*"},
  {".fsx", "F#"},
  {".fth", "Forth"},
  {".ftl", "Fluent"},
  {".ftlh", "FreeMarker"},
  {".fun", "Standard ML"},
  {".fut", "Futhark"},
  {".fx", "FLUX"},
  {".fxh", "HLSL"},
  {".fxml", "XML"},
  {".fy", "Fancy"},
  {".g", "G-code"},
  {".g4", "ANTLR"},
  {".gaml", "GAML"},
  {".gap", "GAP"},
  {".gawk", "Awk"},
  {".gbl", "Gerber Image"},
  {".gbo", "Gerber Image"},
  {".gbp", "Gerber Image"},
  {".gbr", "Gerber Image"},
  {".gbs", "Gerber Image"},
  {".gco", "G-code"},
  {".gcode", "G-code"},
  {".gd", "GAP"},
  {".gdb", "GDB"},
  {".gdbinit", "GDB"},
  {".gdnlib", "Godot Resource"},
  {".gdns", "Godot Resource"},
  {".gdshader", "GDShader"},
  {".gdshaderinc", "GDShader"},
  {".ged", "GEDCOM"},
  {".gemspec", "Ruby"},
  {".geo", "GLSL"},
  {".geojson", "JSON"},
  {".geom", "GLSL"},
  {".gf", "Grammatical Framework"},
  {".gi", "GAP"},
  {".gitconfig", "Git Config"},
  {".gitignore", "Ignore List"},
  {".gjs", "Glimmer JS"},
  {".gko", "Gerber Image"},
  {".glade", "XML"},
  {".gleam", "Gleam"},
  {".glf", "Glyph"},
  {".glsl", "GLSL"},
  {".glslf", "GLSL"},
  {".glslv", "GLSL"},
  {".gltf", "JSON"},
  {".glyphs", "OpenStep Property List"},
  {".gml", "Game Maker Language"},
  {".gms", "GAMS"},
  {".gmx", "XML"},
  {".gn", "GN"},
  {".gni", "GN"},
  {".gnu", "Gnuplot"},
  {".gnuplot", "Gnuplot"},
  {".go", "Go"},
  {".god", "Ruby"},
  {".gohtml", "Go Template"},
  {".golo", "Golo"},
  {".gotmpl", "Go Template"},
  {".gp", "Gnuplot"},
  {".gpb", "Gerber Image"},
  {".gpt", "Gerber Image"},
  {".gpx", "XML"},
  {".gql", "GraphQL"},
  {".grace", "Grace"},
  {".gradle", "Gradle"},
  {".gradle.kts", "Gradle Kotlin DSL"},
  {".graphql", "GraphQL"},
  {".graphqls", "GraphQL"},
  {".groovy", "Groovy"},
  {".grt", "Groovy"},
  {".grxml", "XML"},
  {".gs", "JavaScript"},
  {".gsc", "GSC"},
  {".gsh", "GSC"},
  {".gshader", "GLSL"},
  {".gsp", "Groovy Server Pages"},
  {".gst", "Gosu"},
  {".gsx", "Gosu"},
  {".gtl", "Gerber Image"},
  {".gto", "Gerber Image"},
  {".gtp", "Gerber Image"},
  {".gtpl", "Groovy"},
  {".gts", "Gerber Image"},
  {".gv", "Graphviz (DOT)"},
  {".gvy", "Groovy"},
  {".gyp", "Python"},
  {".gypi", "Python"},
  {".h", "C"},
  {".h++", "C++"},
  {".h.in", "C"},
  {".ha", "Hare"},
  {".hack", "Hack"},
  {".haml", "Haml"},
  {".haml.deface", "Haml"},
  {".handlebars", "Handlebars"},
  {".har", "JSON"},
  {".hats", "ATS"},
  {".hb", "Harbour"},
  {".hbs", "Handlebars"},
  {".hc", "HolyC"},
  {".hcl", "HCL"},
  {".heex", "HTML+EEX"},
  {".hh", "C++"},
  {".hhi", "Hack"},
  {".hic", "Clojure"},
  {".hip", "HIP"},
  {".hlean", "Lean"},
  {".hlsl", "HLSL"},
  {".hlsli", "HLSL"},
  {".hocon", "HOCON"},
  {".hoon", "hoon"},
  {".hpp", "C++"},
  {".hqf", "SQF"},
  {".hql", "HiveQL"},
  {".hrl", "Erlang"},
  {".hs", "Haskell"},
  {".hs-boot", "Haskell"},
  {".hsc", "Haskell"},
  {".hta", "HTML"},
  {".htm", "HTML"},
  {".html", "HTML"},
  {".html.eex", "HTML+EEX"},
  {".html.hl", "HTML"},
  {".html.tmpl", "Go Template"},
  {".http", "HTTP"},
  {".hurl", "Hurl"},
  {".hx", "Haxe"},
  {".hxml", "HXML"},
  {".hxsl", "Haxe"},
  {".hxx", "C++"},
  {".hy", "Hy"},
  {".hzp", "XML"},
  {".i", "Assembly"},
  {".i3", "Modula-3"},
  {".i7x", "Inform 7"},
  {".ical", "iCalendar"},
  {".ice", "JSON"},
  {".iced", "CoffeeScript"},
  {".icl", "Clean"},
  {".icls", "XML"},
  {".ics", "iCalendar"},
  {".idc", "C"},
  {".idr", "Idris"},
  {".ig", "Modula-3"},
  {".ihlp", "Stata"},
  {".ijm", "ImageJ Macro"},
  {".ijs", "J"},
  {".ik", "Ioke"},
  {".ily", "LilyPond"},
  {".imba", "Imba"},
  {".iml", "XML"},
  {".inc", "C++"},
  {".ini", "INI"},
  {".ink", "Ink"},
  {".inl", "C++"},
  {".ino", "C++"},
  {".ins", "TeX"},
  {".intr", "Dylan"},
  {".io", "Io"},
  {".iol", "Jolie"},
  {".ipf", "IGOR Pro"},
  {".ipp", "C++"},
  {".ipynb", "Jupyter Notebook"},
  {".irclog", "IRC log"},
  {".isl", "Inno Setup"},
  {".ispc", "ISPC"},
  {".iss", "Inno Setup"},
  {".iuml", "PlantUML"},
  {".ivy", "XML"},
  {".ixx", "C++"},
  {".j", "Jasmin"},
  {".j2", "Jinja"},
  {".jac", "Jac"},
  {".jade", "Pug"},
  {".jai", "Jai"},
  {".jake", "JavaScript"},
  {".janet", "Janet"},
  {".jav", "Java"},
  {".java", "Java"},
  {".javascript", "JavaScript"},
  {".jbuilder", "Ruby"},
  {".jcl", "JCL"},
  {".jelly", "XML"},
  {".jflex", "JFlex"},
  {".jinja", "Jinja"},
  {".jinja2", "Jinja"},
  {".jison", "Jison"},
  {".jisonlex", "Jison Lex"},
  {".jl", "Julia"},
  {".jq", "JSONiq"},
  {".js", "JavaScript"},
  {".js.erb", "JavaScript+ERB"},
  {".jsb", "JavaScript"},
  {".jscad", "JavaScript"},
  {".jsfl", "JavaScript"},
  {".jsh", "Java"},
  {".jslib", "JavaScript"},
  {".jsm", "JavaScript"},
  {".json", "JSON"},
  {".json-tmlanguage", "JSON"},
  {".json.example", "JSON"},
  {".json5", "JSON5"},
  {".jsonc", "JSON with Comments"},
  {".jsonl", "JSON"},
  {".jsonld", "JSONLD"},
  {".jsonnet", "Jsonnet"},
  {".jsp", "Java Server Pages"},
  {".jspre", "JavaScript"},
  {".jsproj", "XML"},
  {".jss", "JavaScript"},
  {".jst", "EJS"},
  {".jsx", "JavaScript"},
  {".jte", "Java Template Engine"},
  {".just", "Just"},
  {".k", "KCL"},
  {".kak", "KakouneScript"},
  {".kdl", "KDL"},
  {".kicad_mod", "KiCad Layout"},
  {".kicad_pcb", "KiCad Layout"},
  {".kicad_sch", "KiCad Schematic"},
  {".kicad_sym", "KiCad Schematic"},
  {".kicad_wks", "KiCad Layout"},
  {".kid", "Genshi"},
  {".kit", "Kit"},
  {".kk", "Koka"},
  {".kml", "XML"},
  {".kojo", "Scala"},
  {".kql", "Kusto"},
  {".krl", "KRL"},
  {".ks", "KerboScript"},
  {".ksh", "Shell"},
  {".ksy", "Kaitai Struct"},
  {".kt", "Kotlin"},
  {".ktm", "Kotlin"},
  {".kts", "Kotlin"},
  {".kv", "kvlang"},
  {".l", "Common Lisp"},
  {".lagda", "Literate Agda"},
  {".langium", "Langium"},
  {".lark", "Lark"},
  {".las", "Lasso"},
  {".lasso", "Lasso"},
  {".lasso8", "Lasso"},
  {".lasso9", "Lasso"},
  {".latte", "Latte"},
  {".launch", "XML"},
  {".lbx", "TeX"},
  {".ld", "Linker Script"},
  {".lds", "Linker Script"},
  {".lean", "Lean"},
  {".leex", "HTML+EEX"},
  {".lektorproject", "INI"},
  {".leo", "Leo"},
  {".less", "Less"},
  {".lex", "Lex"},
  {".lfe", "LFE"},
  {".lgt", "Logtalk"},
  {".lhs", "Literate Haskell"},
  {".libsonnet", "Jsonnet"},
  {".lid", "Dylan"},
  {".lidr", "Idris"},
  {".ligo", "LigoLANG"},
  {".linq", "C#"},
  {".liq", "Liquidsoap"},
  {".liquid", "Liquid"},
  {".lisp", "Common Lisp"},
  {".litcoffee", "Literate CoffeeScript"},
  {".livecodescript", "LiveCode Script"},
  {".lkml", "LookML"},
  {".ll", "LLVM"},
  {".lmi", "Python"},
  {".logtalk", "Logtalk"},
  {".lol", "LOLCODE"},
  {".lookml", "LookML"},
  {".lp", "Answer Set Programming"},
  {".lpr", "Pascal"},
  {".ls", "LiveScript"},
  {".lsl", "LSL"},
  {".lslp", "LSL"},
  {".lsp", "Common Lisp"},
  {".ltx", "TeX"},
  {".lua", "Lua"},
  {".luau", "Luau"},
  {".lvclass", "LabVIEW"},
  {".lvlib", "LabVIEW"},
  {".lvproj", "LabVIEW"},
  {".ly", "LilyPond"},
  {".m", "Objective-C"},
  {".m2", "Macaulay2"},
  {".m3", "Modula-3"},
  {".m3u", "M3U"},
  {".m3u8", "M3U"},
  {".m4", "M4"},
  {".ma", "Wolfram Language"},
  {".mak", "Makefile"},
  {".make", "Makefile"},
  {".makefile", "Makefile"},
  {".mako", "Mako"},
  {".man", "Roff"},
  {".mao", "Mako"},
  {".marko", "Marko"},
  {".mask", "Mask"},
  {".mat", "Unity3D Asset"},
  {".mata", "Stata"},
  {".matah", "Stata"},
  {".mathematica", "Wolfram Language"},
  {".matlab", "MATLAB"},
  {".mawk", "Awk"},
  {".maxhelp", "Max"},
  {".maxpat", "Max"},
  {".maxproj", "Max"},
  {".mbox", "E-mail"},
  {".mbt", "MoonBit"},
  {".mc", "M4"},
  {".mcfunction", "mcfunction"},
  {".mch", "B (Formal Method)"},
  {".mcmeta", "JSON"},
  {".mcr", "MAXScript"},
  {".md", "GCC Machine Description"},
  {".md2", "Checksums"},
  {".md4", "Checksums"},
  {".md5", "Checksums"},
  {".mdoc", "Roff"},
  {".mdpolicy", "XML"},
  {".mdx", "MDX"},
  {".me", "Roff"},
  {".mermaid", "Mermaid"},
  {".meta", "Unity3D Asset"},
  {".metal", "Metal"},
  {".metta", "MeTTa"},
  {".mg", "Modula-3"},
  {".minid", "MiniD"},
  {".mint", "Mint"},
  {".mir", "YAML"},
  {".mirah", "Mirah"},
  {".mjml", "XML"},
  {".mjs", "JavaScript"},
  {".mk", "Makefile"},
  {".mkfile", "Makefile"},
  {".mkii", "TeX"},
  {".mkiv", "TeX"},
  {".mkvi", "TeX"},
  {".ml", "OCaml"},
  {".ml4", "OCaml"},
  {".mli", "OCaml"},
  {".mligo", "CameLIGO"},
  {".mlir", "MLIR"},
  {".mll", "OCaml"},
  {".mly", "OCaml"},
  {".mm", "Objective-C++"},
  {".mmd", "Mermaid"},
  {".mmk", "Module Management System"},
  {".mms", "Module Management System"},
  {".mo", "Modelica"},
  {".mod", "AMPL"},
  {".mojo", "Mojo"},
  {".monkey", "Monkey"},
  {".monkey2", "Monkey"},
  {".moo", "Mercury"},
  {".moon", "MoonScript"},
  {".move", "Move"},
  {".mpl", "JetBrains MPS"},
  {".mps", "JetBrains MPS"},
  {".mq4", "MQL4"},
  {".mq5", "MQL5"},
  {".mqh", "MQL4"},
  {".mrc", "mIRC Script"},
  {".ms", "MAXScript"},
  {".msd", "JetBrains MPS"},
  {".msg", "OMNeT++ MSG"},
  {".mspec", "Ruby"},
  {".mss", "CartoCSS"},
  {".mt", "Wolfram Language"},
  {".mtl", "Wavefront Material"},
  {".mtml", "MTML"},
  {".mts", "TypeScript"},
  {".mu", "mupad"},
  {".mud", "ZIL"},
  {".muf", "MUF"},
  {".mumps", "M"},
  {".mustache", "Mustache"},
  {".mxml", "XML"},
  {".mxt", "Max"},
  {".mysql", "SQL"},
  {".myt", "Myghty"},
  {".mzn", "MiniZinc"},
  {".n", "Nemerle"},
  {".nanorc", "nanorc"},
  {".nas", "Assembly"},
  {".nasl", "NASL"},
  {".nasm", "Assembly"},
  {".natvis", "XML"},
  {".nawk", "Awk"},
  {".nb", "Wolfram Language"},
  {".nbp", "Wolfram Language"},
  {".nc", "nesC"},
  {".ncl", "Gerber Image"},
  {".ndproj", "XML"},
  {".ne", "Nearley"},
  {".nearley", "Nearley"},
  {".ned", "OMNeT++ NED"},
  {".neon", "NEON"},
  {".nf", "Nextflow"},
  {".nginx", "Nginx"},
  {".nginxconf", "Nginx"},
  {".ni", "Inform 7"},
  {".nim", "Nim"},
  {".nim.cfg", "Nim"},
  {".nimble", "Nim"},
  {".nimrod", "Nim"},
  {".nims", "Nim"},
  {".ninja", "Ninja"},
  {".nit", "Nit"},
  {".nix", "Nix"},
  {".njk", "Nunjucks"},
  {".njs", "JavaScript"},
  {".nl", "NL"},
  {".nlogo", "NetLogo"},
  {".nomad", "HCL"},
  {".nproj", "XML"},
  {".nqp", "Raku"},
  {".nr", "Noir"},
  {".nse", "Lua"},
  {".nsh", "NSIS"},
  {".nsi", "NSIS"},
  {".nss", "NWScript"},
  {".nu", "Nu"},
  {".numpy", "NumPy"},
  {".numpyw", "NumPy"},
  {".numsc", "NumPy"},
  {".nuspec", "XML"},
  {".nut", "Squirrel"},
  {".ny", "Common Lisp"},
  {".ob2", "Oberon"},
  {".obj", "Wavefront Object"},
  {".objdump", "ObjDump"},
  {".odd", "XML"},
  {".odin", "Object Data Instance Notation"},
  {".ol", "Jolie"},
  {".omgrofl", "Omgrofl"},
  {".ooc", "ooc"},
  {".opa", "Opa"},
  {".opal", "Opal"},
  {".opencl", "OpenCL"},
  {".orc", "Csound"},
  {".os", "1C Enterprise"},
  {".osm", "XML"},
  {".outjob", "Altium Designer"},
  {".overpassql", "OverpassQL"},
  {".owl", "Web Ontology Language"},
  {".ox", "Ox"},
  {".oxh", "Ox"},
  {".oxo", "Ox"},
  {".oxygene", "Oxygene"},
  {".oz", "Oz"},
  {".p", "Gnuplot"},
  {".p4", "P4"},
  {".p6", "Raku"},
  {".p6l", "Raku"},
  {".p6m", "Raku"},
  {".p8", "Lua"},
  {".pac", "JavaScript"},
  {".pact", "Pact"},
  {".pan", "Pan"},
  {".parrot", "Parrot"},
  {".pas", "Pascal"},
  {".pascal", "Pascal"},
  {".pasm", "Parrot Assembly"},
  {".pat", "Max"},
  {".patch", "Diff"},
  {".pb", "PureBasic"},
  {".pbi", "PureBasic"},
  {".pbt", "PowerBuilder"},
  {".pbtxt", "Protocol Buffer Text Format"},
  {".pcbdoc", "Altium Designer"},
  {".pck", "PLSQL"},
  {".pcss", "PostCSS"},
  {".pd", "Pure Data"},
  {".pd_lua", "Lua"},
  {".pddl", "PDDL"},
  {".pde", "Processing"},
  {".peggy", "PEG.js"},
  {".pegjs", "PEG.js"},
  {".pep", "Pep8"},
  {".per", "Genero per"},
  {".perl", "Perl"},
  {".pfa", "PostScript"},
  {".pgsql", "PLpgSQL"},
  {".ph", "Perl"},
  {".php", "PHP"},
  {".php3", "PHP"},
  {".php4", "PHP"},
  {".php5", "PHP"},
  {".phps", "PHP"},
  {".phpt", "PHP"},
  {".phtml", "HTML+PHP"},
  {".pic", "Pic"},
  {".pig", "PigLatin"},
  {".pike", "Pike"},
  {".pir", "Parrot Internal Representation"},
  {".pkb", "PLSQL"},
  {".pkgproj", "XML"},
  {".pkl", "Pickle"},
  {".pks", "PLSQL"},
  {".pl", "Perl"},
  {".pl6", "Raku"},
  {".plantuml", "PlantUML"},
  {".plb", "PLSQL"},
  {".plist", "OpenStep Property List"},
  {".plot", "Gnuplot"},
  {".pls", "PLSQL"},
  {".plsql", "PLSQL"},
  {".plt", "Gnuplot"},
  {".pluginspec", "Ruby"},
  {".plx", "Perl"},
  {".pm", "Perl"},
  {".pm6", "Raku"},
  {".pml", "Promela"},
  {".pmod", "Pike"},
  {".podsl", "Common Lisp"},
  {".podspec", "Ruby"},
  {".pogo", "PogoScript"},
  {".polar", "Polar"},
  {".pony", "Pony"},
  {".por", "Portugol"},
  {".postcss", "PostCSS"},
  {".pov", "POV-Ray SDL"},
  {".pp", "Pascal"},
  {".pprx", "REXX"},
  {".praat", "Praat"},
  {".prawn", "Ruby"},
  {".prc", "PLSQL"},
  {".prefab", "Unity3D Asset"},
  {".prefs", "INI"},
  {".prg", "xBase"},
  {".pri", "QMake"},
  {".prisma", "Prisma"},
  {".prjpcb", "Altium Designer"},
  {".pro", "IDL"},
  {".proj", "XML"},
  {".prolog", "Prolog"},
  {".properties", "INI"},
  {".props", "XML"},
  {".proto", "Protocol Buffer"},
  {".prw", "xBase"},
  {".ps", "PostScript"},
  {".ps1", "PowerShell"},
  {".ps1xml", "XML"},
  {".psc", "Papyrus"},
  {".psc1", "XML"},
  {".psd1", "PowerShell"},
  {".psgi", "Perl"},
  {".psm1", "PowerShell"},
  {".pt", "XML"},
  {".pub", "Public Key"},
  {".pubxml", "XML"},
  {".pug", "Pug"},
  {".puml", "PlantUML"},
  {".purs", "PureScript"},
  {".pwn", "Pawn"},
  {".pxd", "Cython"},
  {".pxi", "Cython"},
  {".py", "Python"},
  {".py3", "Python"},
  {".pyde", "Python"},
  {".pyi", "Python"},
  {".pyp", "Python"},
  {".pyt", "Python"},
  {".pytb", "Python traceback"},
  {".pyw", "Python"},
  {".pyx", "Cython"},
  {".q", "HiveQL"},
  {".qasm", "OpenQASM"},
  {".qbs", "QML"},
  {".qc", "QuakeC"},
  {".qhelp", "XML"},
  {".ql", "CodeQL"},
  {".qll", "CodeQL"},
  {".qml", "QML"},
  {".qs", "Q#"},
  {".r", "R"},
  {".r2", "Rebol"},
  {".r3", "Rebol"},
  {".rabl", "Ruby"},
  {".rake", "Ruby"},
  {".raku", "Raku"},
  {".rakumod", "Raku"},
  {".raml", "RAML"},
  {".rascript", "RAScript"},
  {".raw", "Raw token data"},
  {".razor", "HTML+Razor"},
  {".rb", "Ruby"},
  {".rbbas", "REALbasic"},
  {".rbfrm", "REALbasic"},
  {".rbi", "Ruby"},
  {".rbmnu", "REALbasic"},
  {".rbres", "REALbasic"},
  {".rbs", "RBS"},
  {".rbtbar", "REALbasic"},
  {".rbuild", "Ruby"},
  {".rbuistate", "REALbasic"},
  {".rbw", "Ruby"},
  {".rbx", "Ruby"},
  {".rbxs", "Lua"},
  {".rchit", "GLSL"},
  {".rd", "R"},
  {".rdf", "XML"},
  {".re", "C++"},
  {".reb", "Rebol"},
  {".rebol", "Rebol"},
  {".red", "Red"},
  {".reds", "Red"},
  {".reek", "YAML"},
  {".reg", "Windows Registry Entries"},
  {".regex", "Regular Expression"},
  {".regexp", "Regular Expression"},
  {".rego", "Open Policy Agent"},
  {".rei", "Reason"},
  {".religo", "ReasonLIGO"},
  {".res", "ReScript"},
  {".resi", "ReScript"},
  {".resource", "RobotFramework"},
  {".resx", "XML"},
  {".rex", "REXX"},
  {".rexx", "REXX"},
  {".rg", "Rouge"},
  {".rhtml", "HTML+ERB"},
  {".ring", "Ring"},
  {".riot", "Riot"},
  {".rkt", "Racket"},
  {".rktd", "Racket"},
  {".rktl", "Racket"},
  {".rl", "Ragel"},
  {".rmiss", "GLSL"},
  {".rnh", "RUNOFF"},
  {".rno", "RUNOFF"},
  {".robot", "RobotFramework"},
  {".roc", "Roc"},
  {".rockspec", "Lua"},
  {".roff", "Roff"},
  {".ron", "RON"},
  {".rpgle", "RPGLE"},
  {".rpy", "Python"},
  {".rq", "SPARQL"},
  {".rs", "Rust"},
  {".rs.in", "Rust"},
  {".rsc", "Rascal"},
  {".rsh", "RenderScript"},
  {".rss", "XML"},
  {".rsx", "R"},
  {".rtf", "Rich Text Format"},
  {".ru", "Ruby"},
  {".ruby", "Ruby"},
  {".rviz", "YAML"},
  {".s", "Assembly"},
  {".sage", "Sage"},
  {".sagews", "Sage"},
  {".sail", "Sail"},
  {".sarif", "JSON"},
  {".sas", "SAS"},
  {".sass", "Sass"},
  {".sats", "ATS"},
  {".sbatch", "Shell"},
  {".sbt", "Scala"},
  {".sc", "Scala"},
  {".scad", "OpenSCAD"},
  {".scala", "Scala"},
  {".scaml", "Scaml"},
  {".scd", "SuperCollider"},
  {".sce", "Scilab"},
  {".scenic", "Scenic"},
  {".sch", "Eagle"},
  {".schdoc", "Altium Designer"},
  {".sci", "Scilab"},
  {".scm", "Scheme"},
  {".sco", "Csound Score"},
  {".scpt", "AppleScript"},
  {".scrbl", "Racket"},
  {".scss", "SCSS"},
  {".scxml", "XML"},
  {".sdc", "Tcl"},
  {".sed", "sed"},
  {".self", "Self"},
  {".service", "desktop"},
  {".sexp", "Common Lisp"},
  {".sfd", "Spline Font Database"},
  {".sfproj", "XML"},
  {".sfv", "Simple File Verification"},
  {".sh", "Shell"},
  {".sh-session", "ShellSession"},
  {".sh.in", "Shell"},
  {".sha1", "Checksums"},
  {".sha2", "Checksums"},
  {".sha224", "Checksums"},
  {".sha256", "Checksums"},
  {".sha256sum", "Checksums"},
  {".sha3", "Checksums"},
  {".sha384", "Checksums"},
  {".sha512", "Checksums"},
  {".shader", "GLSL"},
  {".shen", "Shen"},
  {".shproj", "XML"},
  {".sieve", "Sieve"},
  {".sig", "Standard ML"},
  {".sj", "Objective-J"},
  {".sjs", "JavaScript"},
  {".sl", "Slash"},
  {".slang", "Slang"},
  {".sld", "Scheme"},
  {".slim", "Slim"},
  {".slint", "Slint"},
  {".sln", "Microsoft Visual Studio Solution"},
  {".slnx", "XML"},
  {".sls", "SaltStack"},
  {".slurm", "Shell"},
  {".sma", "Pawn"},
  {".smali", "Smali"},
  {".smithy", "Smithy"},
  {".smk", "Snakemake"},
  {".sml", "Standard ML"},
  {".smt", "SMT"},
  {".smt2", "SMT"},
  {".snakefile", "Snakemake"},
  {".snap", "Jest Snapshot"},
  {".snip", "Vim Snippet"},
  {".snippet", "Vim Snippet"},
  {".snippets", "Vim Snippet"},
  {".sol", "Gerber Image"},
  {".soy", "Closure Templates"},
  {".sp", "SourcePawn"},
  {".sparql", "SPARQL"},
  {".spc", "PLSQL"},
  {".spec", "Python"},
  {".spin", "Propeller Spin"},
  {".sps", "Scheme"},
  {".sqf", "SQF"},
  {".sql", "PLSQL"},
  {".sqlrpgle", "RPGLE"},
  {".sra", "PowerBuilder"},
  {".srdf", "XML"},
  {".srt", "SRecode Template"},
  {".sru", "PowerBuilder"},
  {".srv", "ROS Interface"},
  {".srw", "PowerBuilder"},
  {".ss", "Scheme"},
  {".ssjs", "JavaScript"},
  {".sss", "SugarSS"},
  {".st", "Smalltalk"},
  {".stan", "Stan"},
  {".star", "STAR"},
  {".sthlp", "Stata"},
  {".stl", "STL"},
  {".ston", "STON"},
  {".story", "Gherkin"},
  {".storyboard", "XML"},
  {".sttheme", "XML Property List"},
  {".sty", "TeX"},
  {".styl", "Stylus"},
  {".sublime-build", "JSON with Comments"},
  {".sublime-color-scheme", "JSON with Comments"},
  {".sublime-commands", "JSON with Comments"},
  {".sublime-completions", "JSON with Comments"},
  {".sublime-keymap", "JSON with Comments"},
  {".sublime-macro", "JSON with Comments"},
  {".sublime-menu", "JSON with Comments"},
  {".sublime-mousemap", "JSON with Comments"},
  {".sublime-project", "JSON with Comments"},
  {".sublime-settings", "JSON with Comments"},
  {".sublime-snippet", "XML"},
  {".sublime-syntax", "YAML"},
  {".sublime-theme", "JSON with Comments"},
  {".sublime-workspace", "JSON with Comments"},
  {".sublime_metrics", "JSON with Comments"},
  {".sublime_session", "JSON with Comments"},
  {".surql", "SurrealQL"},
  {".sv", "SystemVerilog"},
  {".svelte", "Svelte"},
  {".svg", "SVG"},
  {".svh", "SystemVerilog"},
  {".svx", "Survex data"},
  {".sw", "Sway"},
  {".swg", "SWIG"},
  {".swift", "Swift"},
  {".swig", "SWIG"},
  {".syntax", "YAML"},
  {".t", "Perl"},
  {".tab", "SQL"},
  {".tac", "Python"},
  {".tact", "JSON"},
  {".tag", "Java Server Pages"},
  {".talon", "Talon"},
  {".targets", "XML"},
  {".tcc", "C++"},
  {".tcl", "Tcl"},
  {".tcl.in", "Tcl"},
  {".tcsh", "Tcsh"},
  {".te", "SELinux Policy"},
  {".tea", "Tea"},
  {".templ", "templ"},
  {".tesc", "GLSL"},
  {".tese", "GLSL"},
  {".tex", "TeX"},
  {".textgrid", "TextGrid"},
  {".textproto", "Protocol Buffer Text Format"},
  {".tf", "HCL"},
  {".tfstate", "JSON"},
  {".tfstate.backup", "JSON"},
  {".tftpl", "Terraform Template"},
  {".tfvars", "HCL"},
  {".thor", "Ruby"},
  {".thrift", "Thrift"},
  {".thy", "Isabelle"},
  {".tl", "Teal"},
  {".tla", "TLA"},
  {".tlv", "TL-Verilog"},
  {".tm", "Tcl"},
  {".tmac", "Roff"},
  {".tmcommand", "XML Property List"},
  {".tmdl", "TMDL"},
  {".tml", "XML"},
  {".tmlanguage", "XML Property List"},
  {".tmpl", "Go Template"},
  {".tmpreferences", "XML Property List"},
  {".tmsnippet", "XML Property List"},
  {".tmtheme", "XML Property List"},
  {".tmux", "Shell"},
  {".toc", "TeX"},
  {".tofu", "HCL"},
  {".toit", "Toit"},
  {".toml", "TOML"},
  {".toml.example", "TOML"},
  {".tool", "Shell"},
  {".topojson", "JSON"},
  {".tpb", "PLSQL"},
  {".tpl", "Go Template"},
  {".tpp", "C++"},
  {".tps", "PLSQL"},
  {".tres", "Godot Resource"},
  {".trg", "PLSQL"},
  {".trigger", "Shell"},
  {".ts", "TypeScript"},
  {".tscn", "Godot Resource"},
  {".tsconfig.json", "JSON with Comments"},
  {".tsp", "TSPLIB data"},
  {".tst", "GAP"},
  {".tsv", "TSV"},
  {".tsx", "TSX"},
  {".ttl", "Turtle"},
  {".tu", "Turing"},
  {".twig", "Twig"},
  {".txl", "TXL"},
  {".txt", "Adblock Filter List"},
  {".txtpb", "Protocol Buffer Text Format"},
  {".txx", "C++"},
  {".typ", "Typst"},
  {".uc", "UnrealScript"},
  {".udf", "SQL"},
  {".udo", "Csound"},
  {".ui", "XML"},
  {".unity", "Unity3D Asset"},
  {".uno", "Uno"},
  {".upc", "Unified Parallel C"},
  {".uplc", "Untyped Plutus Core"},
  {".ur", "UrWeb"},
  {".urdf", "XML"},
  {".url", "INI"},
  {".urs", "UrWeb"},
  {".ux", "XML"},
  {".v", "Rocq Prover"},
  {".vala", "Vala"},
  {".vapi", "Vala"},
  {".vark", "Gosu"},
  {".vb", "Visual Basic .NET"},
  {".vba", "VBA"},
  {".vbhtml", "Visual Basic .NET"},
  {".vbproj", "XML"},
  {".vbs", "VBScript"},
  {".vcf", "TSV"},
  {".vcl", "VCL"},
  {".vcxproj", "XML"},
  {".vdf", "Valve Data Format"},
  {".veo", "Verilog"},
  {".vert", "GLSL"},
  {".vh", "SystemVerilog"},
  {".vhd", "VHDL"},
  {".vhdl", "VHDL"},
  {".vhf", "VHDL"},
  {".vhi", "VHDL"},
  {".vho", "VHDL"},
  {".vhost", "ApacheConf"},
  {".vhs", "VHDL"},
  {".vht", "VHDL"},
  {".vhw", "VHDL"},
  {".vim", "Vim Script"},
  {".vimrc", "Vim Script"},
  {".viw", "SQL"},
  {".vmb", "Vim Script"},
  {".volt", "Volt"},
  {".vrx", "GLSL"},
  {".vs", "GLSL"},
  {".vsh", "GLSL"},
  {".vshader", "GLSL"},
  {".vsixmanifest", "XML"},
  {".vssettings", "XML"},
  {".vstemplate", "XML"},
  {".vtl", "Velocity Template Language"},
  {".vto", "Vento"},
  {".vtt", "WebVTT"},
  {".vue", "Vue"},
  {".vw", "PLSQL"},
  {".vxml", "XML"},
  {".vy", "Vyper"},
  {".w", "CWeb"},
  {".wast", "WebAssembly"},
  {".wat", "WebAssembly"},
  {".watchr", "Ruby"},
  {".wdl", "WDL"},
  {".webapp", "JSON"},
  {".webidl", "WebIDL"},
  {".webmanifest", "JSON"},
  {".weechatlog", "IRC log"},
  {".wgsl", "WGSL"},
  {".whiley", "Whiley"},
  {".wisp", "wisp"},
  {".wit", "WebAssembly Interface Type"},
  {".wixproj", "XML"},
  {".wl", "Wolfram Language"},
  {".wlk", "Wollok"},
  {".wls", "Wolfram Language"},
  {".wlt", "Wolfram Language"},
  {".wlua", "Lua"},
  {".workflow", "HCL"},
  {".wren", "Wren"},
  {".ws", "Witcher Script"},
  {".wsdl", "XML"},
  {".wsf", "XML"},
  {".wsgi", "Python"},
  {".wxi", "XML"},
  {".wxl", "XML"},
  {".wxs", "XML"},
  {".x", "DirectX 3D File"},
  {".x10", "X10"},
  {".x3d", "XML"},
  {".x68", "Motorola 68K Assembly"},
  {".xacro", "XML"},
  {".xaml", "XML"},
  {".xbm", "X BitMap"},
  {".xc", "XC"},
  {".xdc", "Tcl"},
  {".xht", "HTML"},
  {".xhtml", "HTML"},
  {".xi", "Logos"},
  {".xib", "XML"},
  {".xlf", "XML"},
  {".xliff", "XML"},
  {".xm", "Logos"},
  {".xmi", "XML"},
  {".xml", "XML"},
  {".xml.dist", "XML"},
  {".xmp", "XML"},
  {".xojo_code", "Xojo"},
  {".xojo_menu", "Xojo"},
  {".xojo_report", "Xojo"},
  {".xojo_script", "Xojo"},
  {".xojo_toolbar", "Xojo"},
  {".xojo_window", "Xojo"},
  {".xpl", "XProc"},
  {".xpm", "X PixMap"},
  {".xproc", "XProc"},
  {".xproj", "XML"},
  {".xpy", "Python"},
  {".xq", "XQuery"},
  {".xql", "XQuery"},
  {".xqm", "XQuery"},
  {".xquery", "XQuery"},
  {".xqy", "XQuery"},
  {".xrl", "Erlang"},
  {".xs", "XS"},
  {".xsd", "XML"},
  {".xsh", "Xonsh"},
  {".xsjs", "JavaScript"},
  {".xsjslib", "JavaScript"},
  {".xsl", "XSLT"},
  {".xslt", "XSLT"},
  {".xsp-config", "XPages"},
  {".xsp.metadata", "XPages"},
  {".xspec", "XML"},
  {".xtend", "Xtend"},
  {".xul", "XML"},
  {".xzap", "ZAP"},
  {".y", "Yacc"},
  {".yacc", "Yacc"},
  {".yaml", "MiniYAML"},
  {".yaml-tmlanguage", "YAML"},
  {".yaml.sed", "YAML"},
  {".yang", "YANG"},
  {".yap", "Prolog"},
  {".yar", "YARA"},
  {".yara", "YARA"},
  {".yasnippet", "YASnippet"},
  {".yml", "MiniYAML"},
  {".yml.mysql", "YAML"},
  {".yrl", "Erlang"},
  {".yul", "Yul"},
  {".yy", "JSON"},
  {".yyp", "JSON"},
  {".z3", "SMT"},
  {".zap", "ZAP"},
  {".zcml", "XML"},
  {".zeek", "Zeek"},
  {".zep", "Zephir"},
  {".zig", "Zig"},
  {".zig.zon", "Zig"},
  {".zil", "ZIL"},
  {".zimpl", "Zimpl"},
  {".zmodel", "Zmodel"},
  {".zmpl", "Zimpl"},
  {".zone", "DNS Zone"},
  {".zpl", "Zimpl"},
  {".zs", "ZenScript"},
  {".zsh", "Shell"},
  {".zsh-theme", "Shell"},
};
const size_t GENERATED_EXT_MAP_SIZE = 1413;

const LangEntry GENERATED_FILE_MAP[] = {
  {".JUSTFILE", "Just"},
  {".Justfile", "Just"},
  {".Rprofile", "R"},
  {".XCompose", "XCompose"},
  {".abbrev_defs", "Emacs Lisp"},
  {".ackrc", "Option List"},
  {".all-contributorsrc", "JSON"},
  {".arcconfig", "JSON"},
  {".atomignore", "Ignore List"},
  {".auto-changelog", "JSON"},
  {".babelignore", "Ignore List"},
  {".babelrc", "JSON with Comments"},
  {".bash_aliases", "Shell"},
  {".bash_functions", "Shell"},
  {".bash_history", "Shell"},
  {".bash_logout", "Shell"},
  {".bash_profile", "Shell"},
  {".bashrc", "Shell"},
  {".browserslistrc", "Browserslist"},
  {".buckconfig", "INI"},
  {".bzrignore", "Ignore List"},
  {".c8rc", "JSON"},
  {".clang-format", "YAML"},
  {".clang-tidy", "YAML"},
  {".clangd", "YAML"},
  {".classpath", "XML"},
  {".coffeelintignore", "Ignore List"},
  {".coveragerc", "INI"},
  {".cproject", "XML"},
  {".cshrc", "Shell"},
  {".curlrc", "cURL Config"},
  {".cvsignore", "Ignore List"},
  {".devcontainer.json", "JSON with Comments"},
  {".dir_colors", "dircolors"},
  {".dircolors", "dircolors"},
  {".dockerignore", "Ignore List"},
  {".easignore", "Ignore List"},
  {".editorconfig", "EditorConfig"},
  {".eleventyignore", "Ignore List"},
  {".emacs", "Emacs Lisp"},
  {".emacs.desktop", "Emacs Lisp"},
  {".env", "Dotenv"},
  {".env.ci", "Dotenv"},
  {".env.dev", "Dotenv"},
  {".env.development", "Dotenv"},
  {".env.development.local", "Dotenv"},
  {".env.example", "Dotenv"},
  {".env.local", "Dotenv"},
  {".env.prod", "Dotenv"},
  {".env.production", "Dotenv"},
  {".env.sample", "Dotenv"},
  {".env.staging", "Dotenv"},
  {".env.template", "Dotenv"},
  {".env.test", "Dotenv"},
  {".env.testing", "Dotenv"},
  {".envrc", "Shell"},
  {".eslintignore", "Ignore List"},
  {".eslintrc.json", "JSON with Comments"},
  {".exrc", "Vim Script"},
  {".factor-boot-rc", "Factor"},
  {".factor-rc", "Factor"},
  {".flake8", "INI"},
  {".flaskenv", "Shell"},
  {".gclient", "Python"},
  {".gemrc", "YAML"},
  {".git-blame-ignore-revs", "Git Revision List"},
  {".gitattributes", "Git Attributes"},
  {".gitconfig", "Git Config"},
  {".gitignore", "Ignore List"},
  {".gitmodules", "Git Config"},
  {".gn", "GN"},
  {".gnus", "Emacs Lisp"},
  {".gvimrc", "Vim Script"},
  {".htaccess", "ApacheConf"},
  {".htmlhintrc", "JSON"},
  {".ignore", "Ignore List"},
  {".imgbotconfig", "JSON"},
  {".inputrc", "Readline Config"},
  {".irbrc", "Ruby"},
  {".jscsrc", "JSON with Comments"},
  {".jshintrc", "JSON with Comments"},
  {".jslintrc", "JSON with Comments"},
  {".justfile", "Just"},
  {".kshrc", "Shell"},
  {".latexmkrc", "Perl"},
  {".login", "Shell"},
  {".luacheckrc", "Lua"},
  {".markdownlintignore", "Ignore List"},
  {".nanorc", "nanorc"},
  {".nodemonignore", "Ignore List"},
  {".npmignore", "Ignore List"},
  {".npmrc", "NPM Config"},
  {".nvimrc", "Vim Script"},
  {".nycrc", "JSON"},
  {".oxlintrc.json", "JSON with Comments"},
  {".php", "PHP"},
  {".php_cs", "PHP"},
  {".php_cs.dist", "PHP"},
  {".prettierignore", "Ignore List"},
  {".profile", "Shell"},
  {".project", "XML"},
  {".pryrc", "Ruby"},
  {".pylintrc", "INI"},
  {".rspec", "Option List"},
  {".scalafix.conf", "HOCON"},
  {".scalafmt.conf", "HOCON"},
  {".shellcheckrc", "ShellCheck Config"},
  {".simplecov", "Ruby"},
  {".spacemacs", "Emacs Lisp"},
  {".stylelintignore", "Ignore List"},
  {".swcrc", "JSON with Comments"},
  {".tern-config", "JSON"},
  {".tern-project", "JSON"},
  {".tm_properties", "TextMate Properties"},
  {".tmux.conf", "Shell"},
  {".vercelignore", "Ignore List"},
  {".vimrc", "Vim Script"},
  {".viper", "Emacs Lisp"},
  {".vscodeignore", "Ignore List"},
  {".watchmanconfig", "JSON"},
  {".wgetrc", "Wget Config"},
  {".xinitrc", "Shell"},
  {".xsession", "Shell"},
  {".yardopts", "Option List"},
  {".zlogin", "Shell"},
  {".zlogout", "Shell"},
  {".zprofile", "Shell"},
  {".zshenv", "Shell"},
  {".zshrc", "Shell"},
  {"9fs", "Shell"},
  {"APKBUILD", "Alpine Abuild"},
  {"Android.bp", "Soong"},
  {"App.config", "XML"},
  {"Appraisals", "Ruby"},
  {"BSDmakefile", "Makefile"},
  {"BUCK", "Starlark"},
  {"BUILD", "Starlark"},
  {"BUILD.bazel", "Starlark"},
  {"Berksfile", "Ruby"},
  {"Brewfile", "Ruby"},
  {"Buildfile", "Ruby"},
  {"CITATION.cff", "YAML"},
  {"CMakeLists.txt", "CMake"},
  {"CODEOWNERS", "CODEOWNERS"},
  {"COMMIT_EDITMSG", "Git Commit"},
  {"Caddyfile", "Caddyfile"},
  {"Cakefile", "CoffeeScript"},
  {"Capfile", "Ruby"},
  {"Cargo.lock", "TOML"},
  {"Cargo.toml.orig", "TOML"},
  {"Cask", "Emacs Lisp"},
  {"Containerfile", "Dockerfile"},
  {"DEPS", "Python"},
  {"DIR_COLORS", "dircolors"},
  {"Dangerfile", "Ruby"},
  {"Deliverfile", "Ruby"},
  {"Dockerfile", "Dockerfile"},
  {"Earthfile", "Earthly"},
  {"Eask", "Emacs Lisp"},
  {"Emakefile", "Erlang"},
  {"Fakefile", "Fancy"},
  {"Fastfile", "Ruby"},
  {"GNUmakefile", "Makefile"},
  {"Gemfile", "Ruby"},
  {"Gemfile.lock", "Gemfile.lock"},
  {"Gopkg.lock", "TOML"},
  {"Guardfile", "Ruby"},
  {"HOSTS", "INI"},
  {"JUSTFILE", "Just"},
  {"Jakefile", "JavaScript"},
  {"Jarfile", "Ruby"},
  {"Jenkinsfile", "Groovy"},
  {"Justfile", "Just"},
  {"Kbuild", "Makefile"},
  {"Lexer.x", "Lex"},
  {"MANIFEST.MF", "JAR Manifest"},
  {"MD5SUMS", "Checksums"},
  {"MODULE.bazel", "Starlark"},
  {"MODULE.bazel.lock", "JSON"},
  {"Makefile", "Makefile"},
  {"Makefile.PL", "Perl"},
  {"Makefile.am", "Makefile"},
  {"Makefile.boot", "Makefile"},
  {"Makefile.frag", "Makefile"},
  {"Makefile.in", "Makefile"},
  {"Makefile.inc", "Makefile"},
  {"Makefile.wat", "Makefile"},
  {"Mavenfile", "Ruby"},
  {"Modulefile", "Puppet"},
  {"Notebook", "Jupyter Notebook"},
  {"NuGet.config", "XML"},
  {"Nukefile", "Nu"},
  {"PKGBUILD", "Shell"},
  {"Package.resolved", "JSON"},
  {"Phakefile", "PHP"},
  {"Pipfile", "TOML"},
  {"Pipfile.lock", "JSON"},
  {"Podfile", "Ruby"},
  {"Procfile", "Procfile"},
  {"Project.ede", "Emacs Lisp"},
  {"Puppetfile", "Ruby"},
  {"ROOT", "Isabelle ROOT"},
  {"Rakefile", "Ruby"},
  {"Rexfile", "Perl"},
  {"SConscript", "Python"},
  {"SConstruct", "Python"},
  {"SHA1SUMS", "Checksums"},
  {"SHA256SUMS", "Checksums"},
  {"SHA256SUMS.txt", "Checksums"},
  {"SHA512SUMS", "Checksums"},
  {"Settings.StyleCop", "XML"},
  {"Singularity", "Singularity"},
  {"Slakefile", "LiveScript"},
  {"Snakefile", "Snakemake"},
  {"Snapfile", "Ruby"},
  {"Steepfile", "Ruby"},
  {"Thorfile", "Ruby"},
  {"Tiltfile", "Starlark"},
  {"Vagrantfile", "Ruby"},
  {"WORKSPACE", "Starlark"},
  {"WORKSPACE.bazel", "Starlark"},
  {"WORKSPACE.bzlmod", "Starlark"},
  {"Web.Debug.config", "XML"},
  {"Web.Release.config", "XML"},
  {"Web.config", "XML"},
  {"XCompose", "XCompose"},
  {"_curlrc", "cURL Config"},
  {"_dir_colors", "dircolors"},
  {"_dircolors", "dircolors"},
  {"_emacs", "Emacs Lisp"},
  {"_helpers.tpl", "Go Template"},
  {"_redirects", "Redirect Rules"},
  {"_vimrc", "Vim Script"},
  {"abbrev_defs", "Emacs Lisp"},
  {"ack", "Perl"},
  {"ackrc", "Option List"},
  {"ant.xml", "Ant Build System"},
  {"apache2.conf", "ApacheConf"},
  {"api-extractor.json", "JSON with Comments"},
  {"bash_aliases", "Shell"},
  {"bash_logout", "Shell"},
  {"bash_profile", "Shell"},
  {"bashrc", "Shell"},
  {"browserslist", "Browserslist"},
  {"build.xml", "Ant Build System"},
  {"buildfile", "Ruby"},
  {"buildozer.spec", "INI"},
  {"bun.lock", "JSON"},
  {"cabal.config", "Cabal Config"},
  {"cabal.project", "Cabal Config"},
  {"checksums.txt", "Checksums"},
  {"cksums", "Checksums"},
  {"composer.lock", "JSON"},
  {"configure.ac", "M4Sugar"},
  {"cpanfile", "Perl"},
  {"crontab", "crontab"},
  {"cshrc", "Shell"},
  {"deno.lock", "JSON"},
  {"descrip.mmk", "Module Management System"},
  {"descrip.mms", "Module Management System"},
  {"dev-requirements.txt", "Pip Requirements"},
  {"devcontainer.json", "JSON with Comments"},
  {"dir_colors", "dircolors"},
  {"dune-project", "Dune"},
  {"encodings.dir", "X Font Directory Index"},
  {"eqnrc", "Roff"},
  {"expr-dist", "R"},
  {"file_contexts", "SELinux Policy"},
  {"firestore.rules", "Cloud Firestore Security Rules"},
  {"flake.lock", "JSON"},
  {"fonts.alias", "X Font Directory Index"},
  {"fonts.dir", "X Font Directory Index"},
  {"fonts.scale", "X Font Directory Index"},
  {"fp-lib-table", "KiCad Layout"},
  {"genfs_contexts", "SELinux Policy"},
  {"gitignore-global", "Ignore List"},
  {"gitignore_global", "Ignore List"},
  {"glide.lock", "YAML"},
  {"go.mod", "Go Module"},
  {"go.sum", "Go Checksums"},
  {"go.work", "Go Workspace"},
  {"go.work.sum", "Go Checksums"},
  {"gradlew", "Shell"},
  {"gradlew.bat", "Batchfile"},
  {"gvimrc", "Vim Script"},
  {"haproxy.cfg", "HAProxy"},
  {"hosts", "INI"},
  {"hosts.txt", "Hosts File"},
  {"httpd.conf", "ApacheConf"},
  {"initial_sids", "SELinux Policy"},
  {"inputrc", "Readline Config"},
  {"installscript.qs", "Qt Script"},
  {"jsconfig.json", "JSON with Comments"},
  {"justfile", "Just"},
  {"kakrc", "KakouneScript"},
  {"kcl.mod", "KCL"},
  {"kcl.mod.lock", "KCL"},
  {"kshrc", "Shell"},
  {"language-configuration.json", "JSON with Comments"},
  {"language-subtag-registry.txt", "Record Jar"},
  {"latexmkrc", "Perl"},
  {"ld.script", "Linker Script"},
  {"lexer.x", "Lex"},
  {"login", "Shell"},
  {"m3makefile", "Quake"},
  {"m3overrides", "Quake"},
  {"makefile", "Makefile"},
  {"makefile.sco", "Makefile"},
  {"man", "Shell"},
  {"mcmod.info", "JSON"},
  {"md5sum.txt", "Checksums"},
  {"meson.build", "Meson"},
  {"meson_options.txt", "Meson"},
  {"mix.lock", "Elixir"},
  {"mkfile", "Makefile"},
  {"mmn", "Roff"},
  {"mmt", "Roff"},
  {"mocha.opts", "Option List"},
  {"mvnw", "Shell"},
  {"mvnw.cmd", "Batchfile"},
  {"nanorc", "nanorc"},
  {"nextflow.config", "Nextflow"},
  {"nginx.conf", "Nginx"},
  {"nim.cfg", "Nim"},
  {"nvimrc", "Vim Script"},
  {"owh", "Tcl"},
  {"packages.config", "XML"},
  {"pdm.lock", "TOML"},
  {"pixi.lock", "YAML"},
  {"poetry.lock", "TOML"},
  {"pom.xml", "Maven POM"},
  {"port_contexts", "SELinux Policy"},
  {"profile", "Shell"},
  {"project.godot", "Godot Resource"},
  {"pylintrc", "INI"},
  {"rebar.config", "Erlang"},
  {"rebar.config.lock", "Erlang"},
  {"rebar.lock", "Erlang"},
  {"requirements-dev.txt", "Pip Requirements"},
  {"requirements.lock.txt", "Pip Requirements"},
  {"requirements.txt", "Pip Requirements"},
  {"riemann.config", "Clojure"},
  {"robots.txt", "robots.txt"},
  {"security_classes", "SELinux Policy"},
  {"ssh-config", "SSH Config"},
  {"ssh_config", "SSH Config"},
  {"sshconfig", "SSH Config"},
  {"sshconfig.snip", "SSH Config"},
  {"sshd-config", "SSH Config"},
  {"sshd_config", "SSH Config"},
  {"starfield", "Tcl"},
  {"suite.rc", "Cylc"},
  {"tmux.conf", "Shell"},
  {"toolchain_installscript.qs", "Qt Script"},
  {"torrc", "Tor Config"},
  {"troffrc", "Roff"},
  {"troffrc-end", "Roff"},
  {"tsconfig.json", "JSON with Comments"},
  {"tslint.json", "JSON with Comments"},
  {"uv.lock", "TOML"},
  {"vimrc", "Vim Script"},
  {"vlcrc", "INI"},
  {"wscript", "Python"},
  {"xcompose", "XCompose"},
  {"xinitrc", "Shell"},
  {"xmake.lua", "Xmake"},
  {"xsession", "Shell"},
  {"yarn.lock", "YAML"},
  {"zlogin", "Shell"},
  {"zlogout", "Shell"},
  {"zprofile", "Shell"},
  {"zshenv", "Shell"},
  {"zshrc", "Shell"},
};
const size_t GENERATED_FILE_MAP_SIZE = 373;

const LangEntry GENERATED_INTERP_MAP[] = {
  {"M2", "Macaulay2"},
  {"MathKernel", "Wolfram Language"},
  {"Mathematica", "Wolfram Language"},
  {"MathematicaScript", "Wolfram Language"},
  {"RouterOS", "RouterOS Script"},
  {"Rscript", "R"},
  {"WolframKernel", "Wolfram Language"},
  {"WolframNB", "Wolfram Language"},
  {"aidl", "AIDL"},
  {"apl", "APL"},
  {"aplx", "APL"},
  {"ash", "Shell"},
  {"asy", "Asymptote"},
  {"awk", "Awk"},
  {"bash", "Shell"},
  {"bb", "Clojure"},
  {"bigloo", "Scheme"},
  {"boogie", "Boogie"},
  {"boolector", "SMT"},
  {"bun", "TypeScript"},
  {"ccl", "Common Lisp"},
  {"chakra", "JavaScript"},
  {"chicken", "Scheme"},
  {"clingo", "Answer Set Programming"},
  {"clisp", "Common Lisp"},
  {"coffee", "CoffeeScript"},
  {"cperl", "Perl"},
  {"crystal", "Crystal"},
  {"csh", "Tcsh"},
  {"csi", "Scheme"},
  {"cvc4", "SMT"},
  {"cwl-runner", "Common Workflow Language"},
  {"d8", "JavaScript"},
  {"dafny", "Dafny"},
  {"dart", "Dart"},
  {"dash", "Shell"},
  {"deno", "TypeScript"},
  {"dtrace", "DTrace"},
  {"dyalog", "APL"},
  {"ecl", "Common Lisp"},
  {"elixir", "Elixir"},
  {"elvish", "Elvish"},
  {"escript", "Erlang"},
  {"eui", "Euphoria"},
  {"euiw", "Euphoria"},
  {"fennel", "Fennel"},
  {"fish", "fish"},
  {"gawk", "Awk"},
  {"gerbv", "Gerber Image"},
  {"gerbview", "Gerber Image"},
  {"gjs", "JavaScript"},
  {"gn", "GN"},
  {"gnuplot", "Gnuplot"},
  {"gojq", "jq"},
  {"gosh", "Scheme"},
  {"groovy", "Groovy"},
  {"gsed", "sed"},
  {"guile", "Scheme"},
  {"hy", "Hy"},
  {"instantfpc", "Pascal"},
  {"io", "Io"},
  {"ioke", "Ioke"},
  {"janet", "Janet"},
  {"jaq", "jq"},
  {"jconsole", "J"},
  {"jolie", "Jolie"},
  {"jq", "jq"},
  {"jqjq", "jq"},
  {"jqq", "jq"},
  {"jruby", "Ruby"},
  {"js", "JavaScript"},
  {"julia", "Julia"},
  {"koka", "Koka"},
  {"ksh", "Shell"},
  {"lisp", "Common Lisp"},
  {"lsl", "LSL"},
  {"lua", "Terra"},
  {"luajit", "Lua"},
  {"luau", "Luau"},
  {"macruby", "Ruby"},
  {"make", "Makefile"},
  {"math", "Wolfram Language"},
  {"mathsat5", "SMT"},
  {"mawk", "Awk"},
  {"minised", "sed"},
  {"mksh", "Shell"},
  {"mmi", "Mercury"},
  {"moon", "MoonScript"},
  {"nawk", "Awk"},
  {"newlisp", "NewLisp"},
  {"nextflow", "Nextflow"},
  {"node", "JavaScript"},
  {"nodejs", "JavaScript"},
  {"nu", "Nushell"},
  {"nush", "Nu"},
  {"ocaml", "ReScript"},
  {"ocamlrun", "OCaml"},
  {"ocamlscript", "OCaml"},
  {"openrc-run", "OpenRC runscript"},
  {"opensmt", "SMT"},
  {"osascript", "AppleScript"},
  {"parrot", "Parrot Internal Representation"},
  {"pdksh", "Shell"},
  {"perl", "Perl"},
  {"perl6", "Raku"},
  {"php", "PHP"},
  {"picolisp", "PicoLisp"},
  {"pike", "Pike"},
  {"pil", "PicoLisp"},
  {"pkl", "Pkl"},
  {"pwsh", "PowerShell"},
  {"py", "Python"},
  {"pypy", "Python"},
  {"pypy3", "Python"},
  {"python", "Python"},
  {"python2", "Python"},
  {"python3", "Python"},
  {"qjs", "JavaScript"},
  {"qmake", "QMake"},
  {"query-json", "jq"},
  {"r6rs", "Scheme"},
  {"racket", "Racket"},
  {"rake", "Ruby"},
  {"raku", "Raku"},
  {"rakudo", "Raku"},
  {"rbx", "Ruby"},
  {"rc", "Shell"},
  {"regina", "REXX"},
  {"rexx", "REXX"},
  {"rhino", "JavaScript"},
  {"ruby", "Ruby"},
  {"rune", "E"},
  {"runghc", "Haskell"},
  {"runhaskell", "Haskell"},
  {"runhugs", "Haskell"},
  {"rust-script", "Rust"},
  {"sbcl", "Common Lisp"},
  {"scala", "Scala"},
  {"scenic", "Scenic"},
  {"scheme", "Scheme"},
  {"sclang", "SuperCollider"},
  {"scsynth", "SuperCollider"},
  {"sed", "sed"},
  {"sh", "Shell"},
  {"smt-rat", "SMT"},
  {"smtinterpol", "SMT"},
  {"ssed", "sed"},
  {"stp", "SMT"},
  {"swipl", "Prolog"},
  {"tcc", "C"},
  {"tclsh", "Tcl"},
  {"tcsh", "Tcsh"},
  {"tl", "Teal"},
  {"ts-node", "TypeScript"},
  {"tsx", "TypeScript"},
  {"uv", "Python"},
  {"v8", "JavaScript"},
  {"v8-shell", "JavaScript"},
  {"verit", "SMT"},
  {"wish", "Tcl"},
  {"wolfram", "Wolfram Language"},
  {"wolframscript", "Wolfram Language"},
  {"yap", "Prolog"},
  {"yices2", "SMT"},
  {"z3", "SMT"},
  {"zsh", "Shell"},
};
const size_t GENERATED_INTERP_MAP_SIZE = 166;

const LangEntry GENERATED_KEYWORDS[] = {
  {"ALCodeSamples", "AL"},
  {"ALIssue", "AL"},
  {"ASSERT", "4D"},
  {"Account", "Apex"},
  {"ActionScript", "ActionScript"},
  {"Actionscript", "ActionScript"},
  {"Actual", "Apex"},
  {"ArgumentParser", "Python"},
  {"ArrayList", "Java"},
  {"Assertion", "Apex"},
  {"BigInteger", "Java"},
  {"C_OBJECT", "4D"},
  {"C_TEXT", "4D"},
  {"CaptionML", "AL"},
  {"Clinger", "ActionScript"},
  {"Comparable", "Java"},
  {"Condition", "XML"},
  {"Contributors", "ActionScript"},
  {"DOCTYPE", "XML"},
  {"Declarations", "4D"},
  {"DefaultTargets", "XML"},
  {"Description", "4D"},
  {"Determines", "ActionScript"},
  {"Double", "Apex"},
  {"EDTVProfile", "XML"},
  {"Exists", "XML"},
  {"Formula", "4D"},
  {"Framework", "XML"},
  {"HashSet", "Java"},
  {"IOException", "Java"},
  {"IllegalArgumentException", "Apex"},
  {"Import", "XML"},
  {"Integer", "AL"},
  {"IsInitialized", "C++"},
  {"ItemGroup", "XML"},
  {"Kauffmann", "AL"},
  {"Lachaux", "4D"},
  {"MSBuild", "XML"},
  {"MSBuildThisFileDirectory", "XML"},
  {"MainWindow", "XML"},
  {"Module", "C++"},
  {"Neither", "ActionScript"},
  {"Northern", "XML"},
  {"NullPointerException", "Java"},
  {"Player", "AngelScript"},
  {"Prevents", "ActionScript"},
  {"Process", "AL"},
  {"Project", "4D"},
  {"PropertyGroup", "XML"},
  {"Rachel", "C++"},
  {"Refresh", "AL"},
  {"RefreshALIssueCode", "AL"},
  {"RefreshIssues", "AL"},
  {"Return", "4D"},
  {"SBATCH", "Shell"},
  {"SELECT", "Apex"},
  {"Sample", "AL"},
  {"Samples", "AL"},
  {"Server", "4D"},
  {"StringBuffer", "Java"},
  {"StringUtils", "Apex"},
  {"SuppressWarnings", "Java"},
  {"System", "Apex"},
  {"ToolsVersion", "XML"},
  {"Trigger", "Apex"},
  {"TriggerHandler", "Apex"},
  {"Vincent", "4D"},
  {"VisualStudio", "XML"},
  {"XMLSchema", "XML"},
  {"_MSC_VER", "C++"},
  {"__class__", "Python"},
  {"__init__", "Python"},
  {"__metaclass__", "Python"},
  {"__name__", "Python"},
  {"__repr__", "Python"},
  {"aaronclinger", "ActionScript"},
  {"accompanying", "C++"},
  {"account", "Apex"},
  {"add_argument", "Python"},
  {"ajkauffmann", "AL"},
  {"animate", "JavaScript"},
  {"appendTo", "JavaScript"},
  {"argparse", "Python"},
  {"around", "Shell"},
  {"asList", "Java"},
  {"assertEquals", "Apex"},
  {"avaiable", "Apex"},
  {"buffers", "C++"},
  {"casalib", "ActionScript"},
  {"choices", "Python"},
  {"clearTimeout", "JavaScript"},
  {"clojure", "Java"},
  {"coding", "Python"},
  {"command", "Shell"},
  {"compareTo", "Java"},
  {"contentType", "JavaScript"},
  {"control", "Shell"},
  {"createElement", "JavaScript"},
  {"created_at", "AL"},
  {"creation", "ActionScript"},
  {"database", "4D"},
  {"declare", "Shell"},
  {"descriptorBase", "XML"},
  {"destroy", "JavaScript"},
  {"dirname", "Shell"},
  {"downloaded", "Python"},
  {"endorse", "ActionScript"},
  {"environment", "Shell"},
  {"executable", "Python"},
  {"export", "Shell"},
  {"exports", "JavaScript"},
  {"fashion", "Java"},
  {"fragments", "JavaScript"},
  {"frames", "C++"},
  {"friend", "C++"},
  {"getClass", "Java"},
  {"getClassName", "Java"},
  {"getDescriptor", "Java"},
  {"getName", "Java"},
  {"get_default", "Python"},
  {"getattr", "Python"},
  {"hasOwnProperty", "JavaScript"},
  {"hashCode", "Java"},
  {"html_url", "AL"},
  {"ifndef", "C++"},
  {"install", "Shell"},
  {"installed", "Shell"},
  {"isNotEmpty", "Apex"},
  {"isPrimitive", "Java"},
  {"isinstance", "Python"},
  {"iteritems", "Python"},
  {"jQuery", "JavaScript"},
  {"licensed", "Apex"},
  {"localhost", "4D"},
  {"lowerCase", "Apex"},
  {"maximize", "AMPL"},
  {"memcpy", "C++"},
  {"metavar", "Python"},
  {"msbuild", "XML"},
  {"navigator", "JavaScript"},
  {"optional", "ActionScript"},
  {"parseFloat", "JavaScript"},
  {"parseInt", "JavaScript"},
  {"parse_args", "Python"},
  {"printf", "Shell"},
  {"procedure", "AL"},
  {"products", "ActionScript"},
  {"promote", "ActionScript"},
  {"push_back", "C++"},
  {"python", "Python"},
  {"readlink", "Shell"},
  {"reason", "Python"},
  {"regionBase", "XML"},
  {"reinterpret_cast", "C++"},
  {"reject", "JavaScript"},
  {"repository", "Shell"},
  {"returnList", "Apex"},
  {"returnValue", "Apex"},
  {"schemas", "XML"},
  {"serialVersionUID", "Java"},
  {"setAttribute", "JavaScript"},
  {"setInterval", "JavaScript"},
  {"setTimeout", "JavaScript"},
  {"size_t", "C++"},
  {"sizeof", "C++"},
  {"startsWith", "Apex"},
  {"static_cast", "C++"},
  {"stdlib", "C++"},
  {"stringify", "JavaScript"},
  {"strong", "ActionScript"},
  {"submit", "JavaScript"},
  {"substringAfter", "Apex"},
  {"succeeded", "C++"},
  {"typename", "C++"},
  {"typeof", "JavaScript"},
  {"unchecked", "Java"},
  {"utility", "C++"},
  {"vector", "C++"},
};
const size_t GENERATED_KEYWORDS_SIZE = 178;

