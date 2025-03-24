#include "Angle.h"
#include <iostream>
#include <cmath>

class ArcLength {
private:
    Angle latitude1;
    Angle longitude1;
    Angle latitude2;
    Angle longitude2;

public:
    ArcLength(const Angle& lat1, const Angle& lon1, const Angle& lat2, const Angle& lon2);
    ArcLength(double lat1, double lon1, double lat2, double lon2);

    double calculateLength() const;
};