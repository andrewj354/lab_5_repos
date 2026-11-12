#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Project\DD\lab_5\lab_5_1\lab_5_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
    TEST_CLASS(Lab51Tests)
    {
    public:

        // k(2, 0) = 2 / (1 + sin^2 0) + 0 / (1 + 4) = 2
        TEST_METHOD(TestK_YisZero)
        {
            Assert::AreEqual(2.0, k(2, 0), 1e-9);
        }

        // k(0, 1) = 0 / (1 + sin^2 1) + 1 / (1 + 0) = 1
        TEST_METHOD(TestK_XisZero)
        {
            Assert::AreEqual(1.0, k(0, 1), 1e-9);
        }

        // k(1, pi/2) = 1 / (1 + 1) + (pi/2) / (1 + 1) = 0.5 + pi/4
        TEST_METHOD(TestK_General)
        {
            double pi = 3.14159265358979;
            Assert::AreEqual(0.5 + pi / 4, k(1, pi / 2), 1e-9);
        }
    };
}
