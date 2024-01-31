// all of the functions linked thogether
#include "vk.h"
#include <iostream>
#include <string>
#include <unordered_map>
#include <functional>
#include <vector>
#include <sstream>
#include <iterator>

struct function {
    std::string name;
    std::unordered_map<std::string, std::function<void(const std::string&)>> function;
    };
int main() {
   
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
       std::vector<std::string> inputTokens(std::istream_iterator<std::string>{iss}, std::istream_iterator<std::string>());
       std::string token;
       // find command in vector
       bool functionFound = false;
       for (const auto& token : inputTokens) {
           for (const auto& cmd : token) {
              if (function.name == token) {
                std::vector<std::string> arguments(inputTokens.begin() + 1, inputTokens.end());
             }
           }
       }
       }
    }
