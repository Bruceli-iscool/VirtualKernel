#define MKDIR_HPP
#include <iostream>
#include <filesystem>
// create new directory
void mkdir(const std::string& directory) {
    std::filesystem::path directoryPath(directory);

    try {
        std::filesystem::create_directory(directoryPath);
        
    } catch (const std::filesystem::filesystem_error& e) {
        std::cerr << "mkdir: Cannot create directory: " << directory << " directory not found" << std::endl;
    }
}