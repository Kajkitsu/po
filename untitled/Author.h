//
// Created by nwaszkowiak on 11/8/23.
//

#ifndef UNTITLED_AUTHOR_H
#define UNTITLED_AUTHOR_H
#include <iostream>

using namespace std;

class Author {
private:
    string name;
    string surname;
public:
    Author(string name, string surname);
    ~Author();

    string getName();
    string getSurname();
    string toString();
    void print();
};

#endif //UNTITLED_AUTHOR_H
