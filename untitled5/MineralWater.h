//
// Created by nwaszkowiak on 11/22/23.
//

#ifndef UNTITLED5_MINERALWATER_H
#define UNTITLED5_MINERALWATER_H


#include "Product.h"
#include "Point.h"

class MineralWater : public Product {
private:
    Point a;
    Point b;
public:
    MineralWater(Point a, Point b);

    MineralWater(MineralWater &other);

    void flip() override;

    void move(int x, int y) override;

    std::string toString() override;

};


#endif //UNTITLED5_MINERALWATER_H
