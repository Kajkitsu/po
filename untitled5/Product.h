//
// Created by nwaszkowiak on 11/22/23.
//

#ifndef UNTITLED5_PRODUCT_H
#define UNTITLED5_PRODUCT_H

#include<iostream>

class Product {
public:
    virtual void flip() = 0;
    virtual void move(int x, int y) = 0;
    virtual std::string toString() = 0;
    virtual int getSurface();
};


#endif //UNTITLED5_PRODUCT_H
