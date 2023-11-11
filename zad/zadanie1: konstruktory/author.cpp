//
// Created by nwaszkowiak on 07.11.23.
//

#include <iostream>
#include "author.h"

using namespace std;
Author::Author(const string& name, const string& surname)
        : name(name), surname(surname) {}

void Author::print() {
    cout << name << " " << surname;
}

string Author::toString() const{
    return name + " " + surname;;
}

const string &Author::getName() const {
    return name;
}

const string &Author::getSurname() const {
    return surname;
}
