#pragma once

#include <string>
#include <string_view>

struct DetectionResult {
    std::string language;
    float confidence;
    std::string logic_path;
};

class LanguageDetector {
public:
    DetectionResult detect(const std::string& filepath);

private:
    DetectionResult detect_by_modeline(const std::string& chunk);
    DetectionResult detect_by_extension(const std::string& filepath);
    DetectionResult detect_by_signature(const std::string& filepath);
    DetectionResult detect_by_heuristics(const std::string& filepath);

    // Helper functions
    std::string read_file_chunk(const std::string& filepath, size_t chunk_size);
};
