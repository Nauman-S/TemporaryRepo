#include "Rectangle.h"

double Rectangle::area() const{
    return this->length * this->width;
};

void Rectangle::display() const {
    std::cout << "The area of the Rectangle with length " << this->length << " and width " << width <<  " is " << this->area() << std::endl;
}

bool Rectangle::doCompare(const Shape& shape) const{
    const Rectangle* rectangle = dynamic_cast<const Rectangle*>(&shape);
    if (rectangle != nullptr) {
        return this->length == rectangle->length && this->width == rectangle->width;
    }
    return false;
}

void Rectangle::doAssign(const Shape& shape) {
    const Rectangle* rectangle = dynamic_cast<const Rectangle*>(&shape);
    if (rectangle != nullptr) {
        this->length = rectangle->length;
        this->width = rectangle->width;  
    }
}
