//
// Created by nwaszkowiak on 11/8/23.
//

#include "Author.h"


Author::Author(std::string name, std::string surname) :
        name(name),
        surname(surname) {
    cout << "Wywołanie konstruktora: " << name << " " << surname << endl;
}

string Author::getName() {
    return name;
}

string Author::getSurname() {
    return surname;
}

string Author::toString() {
    return name + " " + surname;
}

void Author::print() {
    cout << toString();
}

Author::~Author() {
    cout << "Wywołanie destruktora" << name << " " << surname << endl;

}
