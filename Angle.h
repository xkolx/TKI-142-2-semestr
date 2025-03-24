#include <iostream>
#include <stdexcept>
#include <string>

class Angle {
private:
    int degrees;
    int minutes;
    double seconds;

    void normalize();

public:
    Angle(int degrees = 0, int minutes = 0, double seconds = 0.0);
    Angle(double totalSeconds);

    int getDegrees() const;
    int getMinutes() const;
    double getSeconds() const;

    double toRadians() const;
};