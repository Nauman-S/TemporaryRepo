#include "Circle.h"

double Circle::area() const{
	return  M_PI * this->radius * this->radius;
}

void Circle::display() const {
    std::cout << "The area of the Circle with radius " << this->radius <<" is " << this->area() << std::endl;
}

bool Circle::doCompare(const Shape& shape) const{
    const Circle* circle = dynamic_cast<const Circle*>(&shape);
    if (circle != nullptr) {
        return this->radius == circle->radius;
    }
    return false;
}

void Circle::doAssign(const Shape& shape) {
    const Circle* circle = dynamic_cast<const Circle*>(&shape);
    if (circle != nullptr) {
        this->radius = circle->radius;
    }
}