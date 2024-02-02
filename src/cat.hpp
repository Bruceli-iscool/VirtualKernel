#define CAT_HPP
#include <filesystem>
#include <iostream>
#include <fstream>
#include <string>
// display file contents
namespace fis = std::filesystem;

void cat(const fis::path&filepath) {
    if (!fis::exists(filepath)) {
        std::cerr << "cat: file not found " << filepath.string() << std::endl;
    }
    std::ifstream file(filepath);

    // check
    if (!file.is_open()) {
        std::cerr << "cat: error opening file " << filepath.string() << std::endl;
    }
    std::string output;
    while (std::getline(file, output)) {
        std::cout << output << std::endl;
    }
    file.close();

}