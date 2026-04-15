#include "Detector.h"
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: ./FastDetect <filepath>\n";
        return 1;
    }

    std::string filepath = argv[1];
    LanguageDetector detector;
    DetectionResult result = detector.detect(filepath);

    std::cout << "{\n";
    std::cout << "  \"language\": \"" << (result.language.empty() ? "Unknown" : result.language) << "\",\n";
    std::cout << "  \"confidence\": " << result.confidence << ",\n";
    std::cout << "  \"logic_path\": \"" << result.logic_path << "\"\n";
    std::cout << "}\n";

    return 0;
}
