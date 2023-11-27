//
// Created by nwaszkowiak on 11/22/23.
//

#include "Point.h"

Point::Point(int x, int y) : x(x), y(y) {

}

Point::Point(Point &other) : x(other.x), y(other.y) {

}

void Point::flip() {
    x = -x;
    y = -y;
}

void Point::move(int x, int y) {
    this->x = this->x + x;
    this->y = this->y + y;
}

std::string Point::toString() {
    return "Point(" + std::to_string(x)
           + "," + std::to_string(y) + ")";
}

Point::Point(): x(0), y(0) {

}

int Point::getX() {
    return x;
}

int Point::getY() {
    return y;
}


