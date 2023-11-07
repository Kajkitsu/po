#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <vector>
#include "chapter.h"
#include "author.h"

using namespace std;

class Book {
private:
    string title;
    Author author;
    int publicationYear;
    vector<Chapter> chapters;

public:
    Book();
    Book(const string &bookTitle, const Author &bookAuthor, int year, const vector<Chapter>& bookChapters);

    void addChapter(const Chapter &chapter);

    void displayInfo() const;

    const string &getTitle() const;

    const Author &getAuthor() const;

    int getPublicationYear() const;

    const vector<Chapter> &getChapters() const;
};

#endif
