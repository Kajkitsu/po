//
// Created by nwaszkowiak on 11/22/23.
//

#ifndef UNTITLED5_LINE_H
#define UNTITLED5_LINE_H


#include "Figure.h"
#include "Point.h"

class Line : public Figure {
private:
    Point a;
    Point b;
public:
    Line(Point a, Point b);

    Line(Line &other);

    void flip() override;

    void move(int x, int y) override;

    std::string toString() override;

};


#endif //UNTITLED5_LINE_H
