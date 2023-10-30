#include <iostream>

std::string salary;

void WritePersonData(const std::string& name, const unsigned short* age, const std::string& height = "", const std::string& weight = "") {
    std::cout << "\nname: " << name << " age: " << *age << "\nROST: " << height << " weight: " << weight << " salary: " << salary << std::endl;
}