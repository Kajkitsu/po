//
// Created by nwaszkowiak on 11/20/23.
//

#include "Triangle.h"
#include <math.h>     /* abs */

Triangle::Triangle(Point a, Point b, Point c) {
    this->a = a;
    this->b = b;
    this->c = c;
}

Triangle::Triangle(Triangle &other) {
    this->a = other.a;
    this->b = other.b;
    this->c = other.c;
}

void Triangle::flip() {
    a.flip();
    b.flip();
    c.flip();
}

void Triangle::move(int x, int y) {
    a.move(x, y);
    b.move(x, y);
    c.move(x, y);
}

std::string Triangle::toString() {
    return "Triangle(" + a.toString() + " ," +
           b.toString() + " ," +
           c.toString() + " )";
}

int Triangle::getSurface() {
    return 0.5 * fabs(
            a.getX() * (b.getY() - c.getY())
            + b.getX() * (c.getY() - a.getY())
            + c.getX() * (a.getY() - b.getY()));
}