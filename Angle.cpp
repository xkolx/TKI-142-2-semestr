#include "Angle.h"
#include <cmath>
#include <iomanip>

Angle::Angle(int degrees, int minutes, double seconds): degrees(degrees), minutes(minutes), seconds(seconds) {
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
    while (seconds >= 60) {
        seconds -= 60;
        minutes++;
    }
    while (minutes >= 60) {
        minutes -= 60;
        degrees++;
    }
    while (seconds < 0) {
        seconds += 60;
        minutes--;
    }
    while (minutes < 0) {
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