#include <stdexcept>
#include <cmath>
#include <iostream>
#include "CppUnitTest.h"
#include "ArcLength.h"
#include "Angle.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ArcLengthTests
{
    TEST_CLASS(ArcLengthTests)
    {
    public:
        TEST_METHOD(TestCalculateLengthSamePoint)
        {
            Angle lat(55.75, 0, 0);
            Angle lon(37.6167, 0, 0);
            ArcLength arc(lat, lon, lat, lon);
            double length = arc.calculateLength();
            Assert::AreEqual(0.0, length, 0.0001);
        }

        TEST_METHOD(TestCalculateLengthKnownDistance)
        {
            // Москва (55.75, 37.6167) и Санкт-Петербург (59.9333, 30.3167)
            // Примерное расстояние ~635 км
            Angle lat1(55, 45, 0);
            Angle lon1(37, 37, 0);
            Angle lat2(59, 56, 0);
            Angle lon2(30, 18, 0);
            
            ArcLength arc(lat1, lon1, lat2, lon2);
            double length = arc.calculateLength();
            
            Assert::IsTrue(length > 625000 && length < 645000);
        }

        TEST_METHOD(TestConstructorWithDoubles)
        {
            ArcLength arc(55.75, 37.6167, 59.9333, 30.3167);
            double length = arc.calculateLength();
            Assert::IsTrue(length > 0);
        }
    };
}