#include "Point.h"
#include <cmath>

class Cilindr {
private:
    Point center;
    double radius;
    double height;
public:
    Cilindr(const Point& center = Point(), double radius = 1, double height = 1);
    double getRadius() const;
    double getHeight() const;
    Point getCenter() const;
    bool contains(const Point& point) const;

    double calculateVolume() const;
};