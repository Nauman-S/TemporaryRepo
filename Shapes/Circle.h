#pragma once
#include "Shape.h"

#define _USE_MATH_DEFINES
#include <math.h>

class Circle :
    public Shape
{
    private:
        int radius;
        void doAssign(const Shape& shape) override;
        bool doCompare(const Shape& shape) const override;
    
    public:

        explicit Circle(int radius) {
            this->radius = radius;
        }

        void display() const override;
        double area() const override;
};

