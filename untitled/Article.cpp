//
// Created by nwaszkowiak on 11/8/23.
//

#include "Article.h"


Article::Article(string title, Author author, int year) :
        title(title), author(author), year(year) {}

Article::Article() : title("Domyslny tytul"),
                     author(Author("Jan", "Kowalski/")),
                     year(2012) {}

Article::Article(Article &other): title(other.title),
                                    author(other.author),
                                    year(other.year) {}

