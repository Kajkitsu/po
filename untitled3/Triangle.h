//
// Created by nwaszkowiak on 11/20/23.
//

#ifndef UNTITLED3_TRIANGLE_H
#define UNTITLED3_TRIANGLE_H


#include "Point.h"

class Triangle {
private:
    Point a;
    Point b;
    Point c;
public:
    Triangle(Point a, Point b, Point c);
    Triangle(Triangle &other);
    void flip();
    void move(int x, int y);
    double getSurface();
    std::string toString();
};


#endif //UNTITLED3_TRIANGLE_H
