#pragma once
#include "Shape.h"
class Rectangle :
    public Shape
{
private: 
    int length;
    int width;
    bool doCompare(const Shape& shape) const override;
    void doAssign(const Shape& shape) override;

public:
    Rectangle(int length, int width) {
        this->length = length;
        this->width = width;
    }

    void display() const override;
    double area() const override;
};

