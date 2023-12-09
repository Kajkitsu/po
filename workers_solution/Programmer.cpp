
#include "Programmer.h"
#include <iostream>

Programmer::Programmer(std::string name, int id, std::string programmingLanguage)
    : Employee(name, id), programmingLanguage(programmingLanguage) {}

void Programmer::work() {
    std::cout << name << " is coding in " << programmingLanguage << std::endl;
}

void Programmer::displayInfo() {
    std::cout << "Programmer: " << name << ", ID: " << id << ", Language: " << programmingLanguage << std::endl;
}

void Programmer::writeCode() {
    std::cout << name << " is writing code." << std::endl;
}
