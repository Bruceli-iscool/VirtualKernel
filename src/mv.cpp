#include "vk.h"
#include <iostream>
#include <cstdio> // remove function
#include <sys/stat.h>
// move file function

bool mv(const std::string& sourcePath, const std::string& destinationPath) {
    struct stat buffer;
    if (stat(sourcePath.c_str(), &buffer) != 0) {
        // cerr prints out like errors
        std::cerr << "mv: No such file or directory" << std::endl;//newline
        return false;
    }
    if (rename(sourcePath.c_str(), destinationPath.c_str()) != 0) {
        std::cerr << "mv: Error moving file" << std::endl;
        return false;
    }
    // if successful
    return true;
}