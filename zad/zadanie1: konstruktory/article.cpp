#include "article.h"
#include "author.h"
#include <iostream>

using namespace std;


Article::Article() : title(""), author(Author("Jan","Kowalski")), publicationYear(0), journal("") {}

Article::Article(const string &articleTitle, const Author &articleAuthor, int year, const string &journalName)
        : title(articleTitle), author(articleAuthor), publicationYear(year), journal(journalName) {}

Article::Article(const Article &other)
        : title(other.title), author(other.author), publicationYear(other.publicationYear), journal(other.journal) {}

void Article::displayInfo() const{
    cout << "Article: " << title << " by " << author.toString() << " (" << publicationYear << ") - " << journal << endl;
}

const string &Article::getTitle() const {
    return title;
}

const Author &Article::getAuthor() const {
    return author;
}

int Article::getPublicationYear() const {
    return publicationYear;
}

const string &Article::getJournal() const {
    return journal;
}
