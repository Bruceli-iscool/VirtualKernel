#define TOUCH_HPP
#include <iostream>
#include <filesystem>
#include <string>

// create empty file

void touch(const std::string& filename) {
    try {
        std::filesystem::path filePath(filename);
        std::ofstream file(filePath, std::ios::binary);
    } catch (const std::exception& e) {
        std::cerr << "touch: error creating " << filename << ": " << e.what() << std::endl;
    }
}