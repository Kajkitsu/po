//
// Created by nwaszkowiak on 11/20/23.
//

#include "Notebook.h"
#include <math.h>     /* abs */

Notebook::Notebook(Point a, Point b, Point c) {
    this->a = a;
    this->b = b;
    this->c = c;
}

Notebook::Notebook(Notebook &other) {
    this->a = other.a;
    this->b = other.b;
    this->c = other.c;
}

void Notebook::flip() {
    a.flip();
    b.flip();
    c.flip();
}

void Notebook::move(int x, int y) {
    a.move(x, y);
    b.move(x, y);
    c.move(x, y);
}

std::string Notebook::toString() {
    return "Notebook(" + a.toString() + " ," +
           b.toString() + " ," +
           c.toString() + " )";
}

int Notebook::getSurface() {
    return 0.5 * fabs(
            a.getX() * (b.getY() - c.getY())
            + b.getX() * (c.getY() - a.getY())
            + c.getX() * (a.getY() - b.getY()));
}