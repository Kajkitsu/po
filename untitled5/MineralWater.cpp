//
// Created by nwaszkowiak on 11/20/23.
//

#include "MineralWater.h"
#include "Point.h"
#include <math.h>     /* abs */

MineralWater::MineralWater(Point a, Point b) {
    this->a = a;
    this->b = b;
}

MineralWater::MineralWater(MineralWater &other) {
    this->a = other.a;
    this->b = other.b;
}

void MineralWater::flip() {
    a.flip();
    b.flip();
}

void MineralWater::move(int x, int y) {
    a.move(x, y);
    b.move(x, y);
}

std::string MineralWater::toString() {
    return "MineralWater(" + a.toString() + " ," +
           b.toString() +  " )";
}
