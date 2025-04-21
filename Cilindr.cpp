#include "Cilindr.h"

Cilindr::Cilindr(double x, double y, double z, double radius, double height)
    : x(x), y(y), z(z), radius(radius), height(height) {}

double Cilindr::getRadius() const {
    return radius;
}

double Cilindr::getHeight() const {
    return height;
}

Point Cilindr::getx() const {
    return x;
}

Point Cilindr::gety() const {
    return y;
}

Point Cilindr::getz() const {
    return z;
}

bool Cilindr::contains(const Point& point) const {
    bool withinRadius = sqrt(point.getX() * point.getX() + point.getY() * point.getY()) <= radius;
    bool withinHeight = getZ() <= point.getZ() <= getZ() + height;
    return withinRadius && withinHeight;
}

double Cilindr::calculateVolume() const {
    return M_PI * radius * radius * height;
}