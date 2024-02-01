#define CD_HPP
#include <iostream>
#include <filesystem>

bool cd(const std::string& path) {
    try {
        std::filesystem::current_path(path);
        return true;
    } catch (const std::filesystem::filesystem_error& e) {
        std::cerr << "cd: No such file or directory: " << path << std::endl;
        return false;
    }
}
