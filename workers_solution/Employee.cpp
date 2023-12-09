
#include "Employee.h"
#include <iostream>

Employee::Employee(std::string name, int id) : name(name), id(id) {}
Employee::~Employee() {}

int Employee::getId() { return id; }
std::string Employee::getName() { return name; }
