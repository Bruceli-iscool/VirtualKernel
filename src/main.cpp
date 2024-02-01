#include <iostream>
#include "userinput.hpp"

int main() {
    std::cout << "VirtualKernel v0.0\n exit() to exit" << std::endl;
    while (true) {
       std::string userInput;
       std::cout << "VirtualKernel@user>>> ";
       std::getline(std::cin, userInput);
       if (userInput == ""){
        
       }
       else {
        getinput(userInput);
       }

    }
}