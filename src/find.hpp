#define FIND_HPP
#include <iostream>
#include <filesystem>

// search for file
namespace fis = std::filesystem

void find(const std::string&CBpath, const std::string&search) {
    for (const auto&entry : fis::directory_iterator(CBpath)) {
        if (fis::is_regular_file(entry.path())) {
            if (entry.path().filename() == search) {
                std::cout << "find: found: " << entry.path() << std::endl;
            }
        }
    }
}