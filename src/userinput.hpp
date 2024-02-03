#define USERINPUT_HPP
#include "find.hpp"
#include "head.hpp"
#include "cat.hpp"
#include "touch.hpp"
#include "cp.hpp"
#include "mv.hpp"
#include "cd.hpp"
#include "ls.hpp"
#include "pwd.hpp"
#include "mkdir.hpp"
#include "rm.hpp"
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

void getinput(const std::string& input) {
    // split input into several parts then detect
    std::istringstream iss(input);
    int i = 0;
    while (std::getline(iss, splitStringParts[i], ' ') && i < maxTon) {
        i++;
    }
    if (input.length() == 0) {

    }

    if (splitStringParts[0] == "mv") {
        mv(splitStringParts[1], splitStringParts[2]);
    }
    else if (splitStringParts[0] == "exit") {
        exit(0);
    }
    else if (splitStringParts[0] == "cd") {
        cd(splitStringParts[1]);
    }
    else if (splitStringParts[0] == "ls") {
        ls(splitStringParts[1]);
    }
    else if (splitStringParts[0] == "pwd") {
        pwd();
    }
    else if (splitStringParts[0] == "mkdir") {
        mkdir(splitStringParts[1]);}
    else if (splitStringParts[0] == "rm") {
        rm(splitStringParts[1]);
    }
    else if (splitStringParts[0] == "cp") {
        cp(splitStringParts[1], splitStringParts[2]);
    }
    else if (splitStringParts[0] == "touch") {
        touch(splitStringParts[1]);
    }
    else if (splitStringParts[0] == "cat") {
        cat(splitStringParts[1]);
    }
    else if (splitStringParts[0] == "head") {
        head(splitStringParts[1]);
    }
    else if (splitStringParts[0] == "find") {
        find(splitStringParts[1], splitStringParts[2]);
    }

    
    else {
        std::cout << "VirtualKernel: Command not found: " << input << std::endl;
        resetArray();
    }
    resetArray();
    
    
}
