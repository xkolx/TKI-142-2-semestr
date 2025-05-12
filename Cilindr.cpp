#include "Cilindr.h"
#include <iostream>
#include <cstdlib>
#include <cmath>

Cilindr::Cilindr(const Point& center, double radius, double height)
    : center(center) {
    if (radius <= 0) {
        std::cerr << "Ошибка: радиус цилиндра должен быть положительным (получено: " 
                  << radius << ")\n";
        std::exit(1);
    }
    if (height <= 0) {
        std::cerr << "Ошибка: высота цилиндра должна быть положительной (получено: " 
                  << height << ")\n";
        std::exit(1);
    }
}

double Cilindr::getRadius() const {
    return radius;
}

double Cilindr::getHeight() const {
    return height;
}

Point Cilindr::getCenter() const {
    return center;
}

bool Cilindr::contains(const Point& point) const {
    bool withinRadius = sqrt(point.getX() * point.getX() + point.getY() * point.getY()) <= radius;
    bool withinHeight = center.getZ() <= point.getZ() && point.getZ() <= center.getZ() + height;
    return withinRadius && withinHeight; 
}

double Cilindr::calculateVolume() const {
    return M_PI * radius * radius * height;
}