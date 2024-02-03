#include <iostream>
#include <string>
#include "userinput.hpp"

int main() {
    // main ui
    std::cout << "VirtualKernel v0.0\nexit to exit" << std::endl;
    while (true) {
       std::string userInput;
       std::cout << "VirtualKernel@user>>> ";
       std::getline(std::cin, userInput);
       if (userInput.length() == 0) {
          
       }
       else {
          getinput(userInput);
       }
    }
}