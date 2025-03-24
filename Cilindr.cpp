#include "Cilindr.h"

Cilindr::Cilindr(const Point& center, double radius, double height)
    : center(center), radius(radius), height(height) {}

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
    bool withinHeight = center.getZ() <= point.getZ() <= center.getZ() + height;
    return withinRadius && withinHeight;
}

double Cilindr::calculateVolume() const {
    return M_PI * radius * radius * height;
}