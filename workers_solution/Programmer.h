
#ifndef PROGRAMMER_H
#define PROGRAMMER_H

#include "Employee.h"

// Klasa Programmer, dziedzicząca z Employee
class Programmer : public Employee {
private:
    std::string programmingLanguage;

public:
    Programmer(std::string name, int id, std::string programmingLanguage);

    void work() override;
    void displayInfo() override;
    void writeCode();
};

#endif // PROGRAMMER_H
