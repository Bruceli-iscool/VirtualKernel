#define RM_HPP
#include "security.hpp"
#include <iostream>
#include <filesystem>
#include <string>

void rm(const std::string& path) {
    
      try {
          if (std::filesystem::remove(path)) {
            std::cout << "rm: file deleted"<< std::endl;
          }
          else {
              std::cerr << "rm: file not found " << path << std::endl;
          }
      }catch (const std::filesystem::filesystem_error& e) {
          std::cerr << "rm: Error removing file: " << e.what() << std::endl;
      }
}