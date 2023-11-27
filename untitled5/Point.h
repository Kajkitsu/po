//
// Created by nwaszkowiak on 11/22/23.
//
#include<iostream>
#ifndef UNTITLED5_POINT_H
#define UNTITLED5_POINT_H


class Point {
private:
    int x;
    int y;
public:
    Point();
    Point(int x, int y);
    Point(Point &other);
    int getX();
    int getY();
    void flip();
    void move(int x, int y);
    std::string toString();
};


#endif //UNTITLED5_POINT_H
