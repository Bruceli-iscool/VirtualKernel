#define HEAD_HPP
#include <iostream>
#include <fstream>
#include <string>

// display the first few lines of code

void head(const std::string&path) {
    std::ifstream file(path);
    if (file.is_open()) {
        std::string output;
        for (int i = 0; i < 5 && std::getline(file, output); ++i) {
            std::cout << output << std::endl;
        }
        file.close();
    } else {
        std::cerr << "head: File not found: " << path << std::endl;
    }

}