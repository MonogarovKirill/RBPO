#include <iostream>

std::string ReadPersonName() {
    std::string string;
    std::cout << "name >";
    std::cin >> string;
    return string;
}