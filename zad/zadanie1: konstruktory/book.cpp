#include "book.h"
#include "author.h"
#include <iostream>

using namespace std;

Book::Book() : title(""), author(Author("Jan", "Kowalski")), publicationYear(0) {}

Book::Book(const string &bookTitle, const Author &bookAuthor, int year, const vector<Chapter>& bookChapters)
        : title(bookTitle), author(bookAuthor), publicationYear(year), chapters(bookChapters) {}

void Book::addChapter(const Chapter &chapter) {
    chapters.push_back(chapter);
}

void Book::displayInfo() const{
    cout << "Book: " << title << " by " << author.toString() << " (" << publicationYear << ")" << endl;
    for (const Chapter &chapter: chapters) {
        chapter.displayInfo();
    }
}

const string &Book::getTitle() const {
    return title;
}

const Author &Book::getAuthor() const {
    return author;
}

int Book::getPublicationYear() const {
    return publicationYear;
}

const vector<Chapter> &Book::getChapters() const {
    return chapters;
}
