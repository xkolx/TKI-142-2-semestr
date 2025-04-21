#include "Point.h"
#include <cmath>

class Cilindr {
private:
    double x;
    double y;
    double z;
    double radius;
    double height;
public:
    Cilindr(double x, double y, double z, double radius = 0.0, double height = 0.0);
    double getx() const;
    double gety() const;
    double getz() const;
    double getRadius() const;
    double getHeight() const;
    Point getCenter() const;
    bool contains(const Point& point) const;

    double calculateVolume() const;
};