
#ifndef EMPLOYEE_MANAGER_H
#define EMPLOYEE_MANAGER_H

#include "Employee.h"
#include <vector>
#include <utility>

// Klasa EmployeeManager do zarządzania pracownikami
class EmployeeManager {
private:
    std::vector<std::pair<Employee*, bool>> employees; // Pair to track ownership

public:
    ~EmployeeManager();
    void addEmployee(Employee* employee, bool isDynamic = false);
    void removeEmployee(int id);
    void displayAllEmployees();
};

#endif // EMPLOYEE_MANAGER_H
