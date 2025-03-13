#include "Point.h"
#include <cmath>

class Cilindr {
private:
    Point center;
    double radius;
    double height;
public:
    Cilindr(const Point& center = Point(), double radius, double height);
    double getRadius() const;
    double getHeight() const;
    Point getCenter() const;
    bool contains(const Point& point) const;

    double calculateVolume() const;
};