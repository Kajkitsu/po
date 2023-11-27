//
// Created by nwaszkowiak on 11/20/23.
//

#ifndef UNTITLED3_POINT_H
#define UNTITLED3_POINT_H

#include <string>

class Point {
private:
    int x;
    int y;
public:
    Point();
    Point(int x, int y);
    Point(Point &other);
    void flip();
    void move(int x, int y);
    std::string toString();
    int getX();
    int getY();
};

#endif //UNTITLED3_POINT_H
