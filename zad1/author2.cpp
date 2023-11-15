
#include <iostream>

using namespace std;

class Author {
private:
    string name;
    string surname;
public:
    Author(string name, string surname);

    void print();

    string toString();

    string getName();

    string getSurname();
};


void Author::print() {
    cout << this->toString();
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

Author::Author(std::string firstName, std::string lastName)
        : name(firstName), surname(lastName) {}