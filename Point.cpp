#include "Point.h"
#include <cstdlib>
#include <cmath>
#include <limits>

Point::Point(double x, double y, double z) : x(x), y(y), z(z) {}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

double Point::getZ() const {
    return z;
}

bool Point::operator==(const Point& other) const {
    return (std::fabs(x - other.x) < std::numeric_limits<double>::epsilon() && 
            std::fabs(y - other.y) < std::numeric_limits<double>::epsilon() && 
            std::fabs(z - other.z) < std::numeric_limits<double>::epsilon());
}

bool Point::operator!=(const Point& other) const {
    return !(*this == other);
}