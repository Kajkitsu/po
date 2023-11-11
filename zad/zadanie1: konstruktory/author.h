//
// Created by nwaszkowiak on 07.11.23.
//

#ifndef UNTITLED1_AUTHOR_H
#define UNTITLED1_AUTHOR_H

#include <string>

using namespace std;

class Author {
private:
    string name;
    string surname;
public:
    Author(const string& name, const string& surname);
    void print();

    string toString() const;

    const string &getName() const;

    const string &getSurname() const;
};


#endif //UNTITLED1_AUTHOR_H
