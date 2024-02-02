#define CP_HPP
#include <iostream>
#include <filesystem>
// copy and paste a file
void cp(const std::string&cpath, const std::string&dpath) {
    try {
      std::filesystem::copy_file(cpath, dpath, std::filesystem::copy_options::overwrite_existing);
      std::cout << "cp: file copied successfully" << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "cp: error copying file: " << e.what() << std::endl;
    }
}