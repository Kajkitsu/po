//
// Created by nwaszkowiak on 11/20/23.
//

#include "Line.h"
#include "Point.h"
#include <math.h>     /* abs */

Line::Line(Point a, Point b) {
    this->a = a;
    this->b = b;
}

Line::Line(Line &other) {
    this->a = other.a;
    this->b = other.b;
}

void Line::flip() {
    a.flip();
    b.flip();
}

void Line::move(int x, int y) {
    a.move(x, y);
    b.move(x, y);
}

std::string Line::toString() {
    return "Line(" + a.toString() + " ," +
           b.toString() +  " )";
}
