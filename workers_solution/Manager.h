
#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"
#include "TeamLeader.h"

// Klasa Manager, dziedzicząca zarówno z Employee, jak i TeamLeader
class Manager : public Employee, public TeamLeader {
private:
    int teamSize;

public:
    Manager(std::string name, int id, int teamSize);

    void work() override;
    void displayInfo() override;
    void organizeMeeting();
    void leadTeam() override;  // Implementacja metody z TeamLeader
};

#endif // MANAGER_H
