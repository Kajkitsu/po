#include <iostream>
#include "author2.cpp"

using namespace std;

class Article {
private:
    string title;
    Author author;
    string journal;
    int publicationYear;
public:
    Article();

    Article(string title, Author author,
            string journal, int publicationYear);

    Article(Article &article);

    string getTitle();

    Author getAuthor();

    string getJournal();

    int getPublicationYear();

    void displayInfo();
};

string Article::getTitle() {
    return title;
}

Author Article::getAuthor() {
    return author;
}

string Article::getJournal() {
    return journal;
}

int Article::getPublicationYear() {
    return publicationYear;
}


void Article::displayInfo() {
    cout << "Title:" << title << ", journal:" <<
         journal << ", publicationYear:" <<
         publicationYear << ", author:"
         << author.toString();
}

Article::Article() :
        title("Domyslny tytul"),
        author(Author("Domyslny", "Autor")),
        journal("Domyslne czasopismo"),
        publicationYear(2012) {}

Article::Article(string title,
                 Author author,
                 string journal,
                 int publicationYear) :
        title(title),
        author(author),
        journal(journal),
        publicationYear(publicationYear) {}

Article::Article(Article &article) : title(article.title),
                                     journal(article.journal),
                                     publicationYear(article
                                     .publicationYear),
                                     author(article.author) {
}


int main() {
    Author author("Jan", "Kowalski");
    Article article("tytul artykulu", author,
                    "IEEE", 2023);
    article.displayInfo();
    cout << endl;
    Article article1;
    article1.displayInfo();
    cout << endl;
    Article article2;
    article2.displayInfo();
    cout << endl;
    Article article3(article2);
    article3.displayInfo();
    Article article4 = article;
    cout << endl;
    article4.displayInfo();


}