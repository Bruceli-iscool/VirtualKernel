#ifndef SECURITY_HPP
#define SECURITY_HPP
#include <iostream>
#include <filesystem>

namespace fis = std::filesystem;
bool CB(const std::string& filepath) {
    const std::string allowedDirectory = "VirtualKernel/home/";
    fis::path CBpath(filepath);
    fis::path aDir(allowedDirectory);
    // check if path is allowed
    return CBpath.lexically_proximate(allowedDirectory) == aDir;
}
#endif