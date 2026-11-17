#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_09_2/macros.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest92
{
    TEST_CLASS(UnitTest92)
    {
    public:
        TEST_METHOD(TestBranchZGreaterThan5)
        {
            // Тестуємо гілку z > 5: w = max^2(x * y^3, x + z)
            // Нехай x = 2, y = 2, z = 6:
            // x * y^3 = 2 * 8 = 16; x + z = 8 -> max = 16 -> w = 16^2 = 256
            double x = 2.0, y = 2.0, z = 6.0;
            double actual = SQR(MAX(x * CUBE(y), x + z));
            Assert::AreEqual(256.0, actual, 1e-6);
        }

        TEST_METHOD(TestBranchZLessOrEqual5)
        {
            // Тестуємо гілку z <= 5: w = min(x - y * z, x * y + z)
            // Нехай x = 10, y = 2, z = 3:
            // x - y * z = 10 - 6 = 4; x * y + z = 20 + 3 = 23 -> min = 4
            double x = 10.0, y = 2.0, z = 3.0;
            double actual = MIN(x - y * z, x * y + z);
            Assert::AreEqual(4.0, actual, 1e-6);
        }
    };
}