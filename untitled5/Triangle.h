//
// Created by nwaszkowiak on 11/22/23.
//

#ifndef UNTITLED5_TRIANGLE_H
#define UNTITLED5_TRIANGLE_H


#include "Figure.h"
#include "Point.h"

class Triangle : public Figure {
private:
    Point a;
    Point b;
    Point c;
public:
    Triangle(Point a, Point b, Point c);
    Triangle(Triangle &other);
    void flip() override;
    void move(int x, int y) override;
    std::string toString() override;
    int getSurface() override;
};



#endif //UNTITLED5_TRIANGLE_H
