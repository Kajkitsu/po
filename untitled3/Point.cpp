//
// Created by nwaszkowiak on 11/20/23.
//

#include "Point.h"

Point::Point() {
    this->x = 0;
    this->y = 0;
}

Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
}

Point::Point(Point &other) {
    this->x = other.x;
    this->y = other.y;
}

void Point::flip() {
    x = -x;
    y = -y;
}

void Point::move(int x, int y) {
    this->x += x;
    this->y += y;
}

std::string Point::toString() {
    return "Point(" + std::to_string(x) + ", "
           + std::to_string(y) + ")";
}

int Point::getX() {
    return x;
}

int Point::getY() {
    return y;
}