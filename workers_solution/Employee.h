
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

// Klasa bazowa Employee
class Employee {
protected:
    std::string name;
    int id;

public:
    Employee(std::string name, int id);
    virtual ~Employee();

    virtual void work() = 0;
    virtual void displayInfo() = 0;

    int getId();
    std::string getName();
};

#endif // EMPLOYEE_H
