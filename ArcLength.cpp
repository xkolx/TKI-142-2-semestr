#include "ArcLength.h"
#include <cmath>


ArcLength::ArcLength(const Angle& lat1, const Angle& lon1, const Angle& lat2, const Angle& lon2)
    : latitude1(lat1), longitude1(lon1), latitude2(lat2), longitude2(lon2) {}

ArcLength::ArcLength(double lat1, double lon1, double lat2, double lon2)
    : latitude1(lat1), longitude1(lon1), latitude2(lat2), longitude2(lon2) {}


double ArcLength::calculateLength() const {
    const double R = 6371000;
    double lat1Rad = latitude1.toRadians();
    double lon1Rad = longitude1.toRadians();
    double lat2Rad = latitude2.toRadians();
    double lon2Rad = longitude2.toRadians();

    double dLat = lat2Rad - lat1Rad;
    double dLon = lon2Rad - lon1Rad;

    double a = sin(dLat / 2) * sin(dLat / 2) +
               cos(lat1Rad) * cos(lat2Rad) * sin(dLon / 2) * sin(dLon / 2);
    double c = 2 * atan2(sqrt(a), sqrt(1 - a));

    return R * c;
}