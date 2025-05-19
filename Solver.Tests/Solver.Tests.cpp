#include "CppUnitTest.h"
#include "..\Solver\Angle.h"
#include "..\Solver\ArcLength.h"
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
#include <cmath>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SolverTest
{
    TEST_CLASS(AngleTest)
    {
    public:
        TEST_METHOD(Constructor_ValidData_Success)
        {
            Angle angle(45, 30, 15.5);
            Assert::AreEqual(angle.getDegrees(), 45);
            Assert::AreEqual(angle.getMinutes(), 30);
            Assert::AreEqual(angle.getSeconds(), 15.5);
        }

        TEST_METHOD(Normalization_OverflowValues_Success)
        {
            Angle angle(45, 59, 59.0);
            Assert::AreEqual(angle.getDegrees(), 45);
            Assert::AreEqual(angle.getMinutes(), 59);
            Assert::AreEqual(angle.getSeconds(), 59.0);
        }

        TEST_METHOD(ToRadians_Conversion_Success)
        {
            Angle angle(180, 0, 0);
            Assert::AreEqual(angle.toRadians(), M_PI);
        }

        TEST_METHOD(TotalSecondsConstructor_ValidData_Success)
        {
            Angle angle(3661.5);
            Assert::AreEqual(angle.getDegrees(), 1);
            Assert::AreEqual(angle.getMinutes(), 1);
            Assert::AreEqual(angle.getSeconds(), 1.5);
        }
    };

    TEST_CLASS(ArcLengthTest)
    {
    public:
        TEST_METHOD(CalculateLength_Equator_Success) {
            Angle lat1(0, 0, 0);
            Angle lon1(0, 0, 0);
            Angle lat2(0, 1, 0);
            Angle lon2(0, 0, 0);
            ArcLength arc(lat1, lon1, lat2, lon2);
            double distance = arc.calculateLength();
            Assert::AreEqual(distance, 1853.25, 1);
        }

        TEST_METHOD(CalculateLength_SamePoint_Zero)
        {
            Angle lat(45, 30, 15);
            Angle lon(73, 35, 20);
            ArcLength arc(lat, lon, lat, lon);
            double distance = arc.calculateLength();
            Assert::AreEqual(distance, 0.0);
        }

        TEST_METHOD(CalculateLength_PoleToLatitude_Success)
        {
            Angle lat1(90, 0, 0);
            Angle lon1(0, 0, 0);
            Angle lat2(89, 0, 0);
            Angle lon2(0, 0, 0);
            ArcLength arc(lat1, lon1, lat2, lon2);
            double distance = arc.calculateLength();
            Assert::AreEqual(distance, 111195.0, 1);
        }
    };
}