#include "vk.h"
#include <iostream>
#include <string>
#include <unordered_map>
#include <functional>
#include <vector>
#include <sstream>
#include <iterator>

using namespace std;


int main() {
    std::cout << "VirtualKernel v0.0\n";

    while (true) {
        // getline to read the entire line of input
        std::string userInput;
        std::cout << "VirtualKernel@user>>> ";
        std::getline(std::cin, userInput);

        // separate command and args
        std::istringstream iss(userInput);
        std::vector<std::string> inputTokens(std::istream_iterator<std::string>{iss}, std::istream_iterator<std::string>());

        // check if the command is triggered
        if (!inputTokens.empty()) {
            std::string command = inputTokens[0];
            std::vector<std::string> arguments(inputTokens.begin() + 1, inputTokens.end());

            // Check if the command is "mv"
            if (command == "mv") {
                // Execute the function
                VK_H::mv(arguments);
            } else {
                std::cout << "-VirtualKernel: Command not found: " << command << std::endl;
            }
        }
    }

    return 0;
}
