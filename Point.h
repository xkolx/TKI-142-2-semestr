#pragma once

class Point
{
private:
    double x, y, z;
public:
    Point(double x = 0.0, double y = 0.0, double z = 0.0);
    double getX() const;
    double getY() const;
    double getZ() const;
};