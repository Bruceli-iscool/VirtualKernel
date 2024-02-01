#define LS_HPP
#include <iostream>
#include <filesystem>

// display all files in a directory
void ls(const std::string& directory) {
    try {
        for (const auto& entry : std::filesystem::directory_iterator(directory)) {
            if (std::filesystem::is_regular_file(entry.path())) {
                std::cout << entry.path().filename() << std::endl;
            }
            else {
            std::cerr << "ls: Directory not found: " << directory << std::endl;
            }
        }
    }catch (const std::filesystem::filesystem_error& e) {
     std::cerr << "ls: Directory not found: " << directory << std::endl;
            }
}