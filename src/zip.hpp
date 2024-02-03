#define ZIP_HPP
#include <iostream>
#include <filesystem>
#include <string>
// create zip files
namespace fis = std::filesystem;

void zip(const std::string&path, const std::string dpath) {
    fis::path ddir(dpath);
    if (!fis::exists(ddir)) {
        fis::create_directories(ddir);
    }
    std::string function = "powershell Compress-Archive -Path " + std::string(path) + " -DestinationPath "+ dpath;
    int result = system(function.c_str());
    if (result != 0) {
        std::cerr << "zip: Cannot zip " << path << std::endl;
    }

}