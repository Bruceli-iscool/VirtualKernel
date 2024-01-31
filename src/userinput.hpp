#define USERINPUT_HPP
#include "mv.hpp"
#include <iostream>
#include <sstream>
#include <string>
const int maxTon = 5;
std::string splitStringParts[maxTon];

// empty array
void resetArray() {
    for (int i = 0; i < maxTon; ++i) {
        splitStringParts[i] = "";
    }
}

int getinput(const std::string& input) {
    // split input into several parts then detect
    std::istringstream iss(input);
    int i = 0;
    while (std::getline(iss, splitStringParts[i], ' ') && i < maxTon) {
        i++;
    }
    if (splitStringParts[0] == "mv") {
        mv(splitStringParts[1], splitStringParts[2]);
    }
    if (splitStringParts[0] == "exit()") {
        exit(0);
    }
    else {
        std::cout << "VirtualKernel: Command not found: " << input << std::endl;
        resetArray();
    }
    resetArray();
    
    
}