#define TAR_HPP
#include <iostream>
#include <filesystem>
#include <string>
// extract zip files
namespace fis = std::filesystem;

void tar(const std::string&path, const std::string dpath) {
    fis::path ddir(dpath);
    if (!fis::exists(ddir)) {
        fis::create_directories(ddir);
    }
    std::string function = "powershell Expand-Archive -Path " + std::string(path) + " -DestinationPath "+ dpath;
    int result = system(function.c_str());
    if (result != 0) {
        std::cerr << "tar: Cannot unzip " << path << std::endl;
    }

}