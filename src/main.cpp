// all of the functions linked thogether
#include "vk.h"
#include <iostream>
#include <string>
#include <unordered_map>
#include <functional>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iterator>

int main() {
    // workaround
    struct function {
        std::string name;
       std::unordered_map<std::string, std::function<void(const std::string&)>> function;
    };
    std::vector<function> functions = {

    };
    std::cout << "VirtualKernel v0.0\n";
    while (true) {
       // getline to read entire line of input
       std::string userInput;
       std::cout << "VirtualKernel@user>>> ";
       std::getline(std::cin, userInput);

       // seperate command and args
       std::istringstream iss(userInput);

    }
}