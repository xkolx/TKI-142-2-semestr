#include "Angle.h"
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
#include <cmath>
#include <stdexcept>

Angle::Angle(int degrees, int minutes, double seconds)
    : degrees(degrees), minutes(minutes), seconds(seconds) {
    if (minutes < 0 || minutes >= 60 || seconds < 0 || seconds >= 60) {
        throw std::invalid_argument("Минуты и секунды должны быть в диапазоне [0, 60).");
    }
    normalize();
}

Angle::Angle(double totalSeconds) {
    degrees = static_cast<int>(totalSeconds / 3600);
    totalSeconds -= degrees * 3600;
    minutes = static_cast<int>(totalSeconds / 60);
    seconds = totalSeconds - minutes * 60;
    normalize();
}

void Angle::normalize() {
    int extraMinutes = static_cast<int>(seconds / 60);
    minutes += extraMinutes;
    seconds = fmod(seconds, 60.0);

    if (seconds < 0) {
        seconds += 60;
        minutes--;
    }

    int extraDegrees = minutes / 60;
    degrees += extraDegrees;
    minutes = minutes % 60;

    if (minutes < 0) {
        minutes += 60;
        degrees--;
    }
}

int Angle::getDegrees() const { return degrees; }
int Angle::getMinutes() const { return minutes; }
double Angle::getSeconds() const { return seconds; }

double Angle::toRadians() const {
    double totalDegrees = degrees + minutes / 60.0 + seconds / 3600.0;
    return totalDegrees * M_PI / 180.0;
}

double Angle::toDecimal() const {
    return degrees + minutes / 60.0 + seconds / 3600.0;
}