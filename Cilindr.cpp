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
    double dx = point.getX() - center.getX();
    double dy = point.getY() - center.getY();
    double dz = point.getZ() - center.getZ();
    double distanceSquared = dx * dx + dy * dy;
    bool withinRadius = distanceSquared <= radius * radius;
    bool withinHeight = dz >= 0 && dz <= height;
    return withinRadius && withinHeight;
}

double Cilindr::calculateVolume() const {
    return M_PI * radius * radius * height;
}