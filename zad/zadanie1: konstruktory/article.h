#ifndef ARTICLE_H
#define ARTICLE_H

#include <string>
#include "author.h"

using namespace std;


class Article {
private:
    string title;
    Author author;
    int publicationYear;
    string journal;

public:
    Article();

    Article(const string &articleTitle, const Author &articleAuthor, int year, const string &journalName);

    Article(const Article &other);

    void displayInfo() const;

    const string &getTitle() const;

    const Author &getAuthor() const;

    int getPublicationYear() const;

    const string &getJournal() const;
};

#endif
