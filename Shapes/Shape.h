#pragma once

#include <iostream>

class Shape {
private: 
    virtual bool doCompare(const Shape& shape) const = 0;
    virtual void doAssign(const Shape& shape) = 0;

public:
    Shape() {};
    Shape(Shape const&) = delete;

    virtual double area() const = 0;

    virtual void display() const {
        std::cout << "The area of the shape is " << this->area() << std::endl;
    }

    void operator=(const Shape& shape) {
        this->doAssign(shape);
    }

    bool operator==(const Shape& rhs) const
    {
        return this->doCompare(rhs);
    }

    double operator+(const Shape& rhs) const
    {
        return this->area() + rhs.area();
    }
};