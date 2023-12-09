
#include "EmployeeManager.h"
#include <iostream>

EmployeeManager::~EmployeeManager() {
    for (auto &emp : employees) {
        if (emp.second) { // Check if EmployeeManager is responsible for deleting
            delete emp.first;
        }
    }
}

void EmployeeManager::addEmployee(Employee* employee, bool isDynamic) {
    employees.push_back(std::make_pair(employee, isDynamic));
}

void EmployeeManager::removeEmployee(int id) {
    for (auto it = employees.begin(); it != employees.end(); ) {
        if (it->first->getId() == id) {
            if (it->second) { // If EmployeeManager is responsible, delete it
                delete it->first;
            }
            it = employees.erase(it);
        } else {
            ++it;
        }
    }
}

void EmployeeManager::displayAllEmployees() {
    for (auto &emp : employees) {
        emp.first->displayInfo();
    }
}
