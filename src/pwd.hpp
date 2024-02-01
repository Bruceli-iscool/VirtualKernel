#define PWD_HPP
#include <iostream>
#include <filesystem>
// use a namespace instead of typing filesystem
namespace fis = std::filesystem;
// prints current directory
void pwd() {
      fis::path pathnow = fis::current_path();
      std::cout << pathnow << std::endl;
    
}