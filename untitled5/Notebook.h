//
// Created by nwaszkowiak on 11/22/23.
//

#ifndef UNTITLED5_NOTEBOOK_H
#define UNTITLED5_NOTEBOOK_H


#include "Product.h"
#include "Point.h"

class Notebook : public Product {
private:
    Point a;
    Point b;
    Point c;
public:
    Notebook(Point a, Point b, Point c);
    Notebook(Notebook &other);
    void flip() override;
    void move(int x, int y) override;
    std::string toString() override;
    int getSurface() override;
};



#endif //UNTITLED5_NOTEBOOK_H
