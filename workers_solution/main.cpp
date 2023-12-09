#include "EmployeeManager.h"
#include "Programmer.h"
#include "Manager.h"
#include <iostream>

int main() {
    // Tworzenie managera pracowników
    EmployeeManager employeeManager;

    // Tworzenie pracowników na stosie
    Programmer john("John Doe", 1, "C++");
    Manager jane("Jane Smith", 2, 5);

    // Dodanie pracowników na stosie do managera
    employeeManager.addEmployee(&john);
    employeeManager.addEmployee(&jane);

    // Wyświetlenie informacji o pracownikach
    employeeManager.displayAllEmployees();

    // Tworzenie pracowników na stercie
    Employee* mike = new Programmer("Mike Johnson", 3, "Java");
    Employee* lisa = new Manager("Lisa Ray", 4, 10);

    // Dodanie pracowników na stercie do managera
    employeeManager.addEmployee(mike, true);
    employeeManager.addEmployee(lisa, true);

    // Wyświetlenie informacji o wszystkich pracownikach
    employeeManager.displayAllEmployees();

    // Wywołanie specyficznych dla klasy metod
    john.writeCode();
    jane.organizeMeeting();
    jane.leadTeam();

    // Usunięcie pracowników na stercie
    employeeManager.removeEmployee(3);
    employeeManager.removeEmployee(4);

    // Ponowne wyświetlenie pracowników po usunięciu
    employeeManager.displayAllEmployees();

    return 0;
}