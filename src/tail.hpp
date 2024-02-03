#define TAIL_HPP
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
// prints last few line
void tail(const std::string& path) {
    std::ifstream file(path);
    if (!file.is_open()) {
        std::cerr << "tail: File not found: " << path << std::endl;
    }
    std::vector<std::string> output;
    std::string outp
    while (std::getline(file, output)) {
        lines.push_back(output);
    }
    int num = std::max(0, static_cast<int>(lines.size()) - 5);

    for (int i = num; i < output.size(); ++i) {
        std::cout << output[i] << std::endl;
    }
}