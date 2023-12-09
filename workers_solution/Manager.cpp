
#include "Manager.h"
#include <iostream>

Manager::Manager(std::string name, int id, int teamSize)
    : Employee(name, id), teamSize(teamSize) {}

void Manager::work() {
    std::cout << name << " is managing a team of " << teamSize << " members." << std::endl;
}

void Manager::displayInfo() {
    std::cout << "Manager: " << name << ", ID: " << id << ", Team Size: " << teamSize << std::endl;
}

void Manager::organizeMeeting() {
    std::cout << name << " is organizing a meeting." << std::endl;
}

void Manager::leadTeam() {
    std::cout << name << " is leading the team." << std::endl;
}
