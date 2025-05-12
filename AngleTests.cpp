#include <stdexcept>
#include <cmath>
#include <iostream>
#include "CppUnitTest.h"
#include "Angle.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace AngleTests
{
    TEST_CLASS(AngleTests)
    {
    public:
        TEST_METHOD(TestConstructorWithDegreesMinutesSeconds)
        {
            Angle angle(45, 30, 15.5);
            Assert::AreEqual(45, angle.getDegrees());
            Assert::AreEqual(30, angle.getMinutes());
            Assert::AreEqual(15.5, angle.getSeconds(), 0.0001);
        }

        TEST_METHOD(TestConstructorWithTotalSeconds)
        {
            Angle angle(37215.5);
            Assert::AreEqual(10, angle.getDegrees());
            Assert::AreEqual(20, angle.getMinutes());
            Assert::AreEqual(15.5, angle.getSeconds(), 0.0001);
        }

        TEST_METHOD(TestNormalization)
        {
            Angle angle(1, 65, 70.5);
            Assert::AreEqual(2, angle.getDegrees());
            Assert::AreEqual(6, angle.getMinutes());
            Assert::AreEqual(10.5, angle.getSeconds(), 0.0001);
        }

        TEST_METHOD(TestToRadians)
        {
            Angle angle(180, 0, 0);
            double radians = angle.toRadians();
            Assert::AreEqual(M_PI, radians, 0.0001);
        }

        TEST_METHOD(TestInvalidInput)
        {
            auto func = [] { Angle angle(0, -1, 0); };
            Assert::ExpectException<std::invalid_argument>(func);
        }
    };
}