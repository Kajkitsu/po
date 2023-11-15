//
// Created by nwaszkowiak on 11/8/23.
//

#ifndef UNTITLED_ARTICLE_H
#define UNTITLED_ARTICLE_H

#include <iostream>
#include "Author.h"

using namespace std;
class Article {
private:
    string title;
    Author author;
    int year;
public:
    Article();
    Article(string title, Author author, int year);
    Article(Article &article);


};


#endif //UNTITLED_ARTICLE_H
