#include "pch.h"
#include "CppUnitTest.h"
#include "../PR_6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(ArrayTests)
    {
    public:

        TEST_METHOD(TestCount)
        {
            int testArray[5] = { 10, -2, 0, 15, 18 };
            Assert::AreEqual(2, count(testArray, 5));
        }

        TEST_METHOD(TestSum)
        {
            int testArray[5] = { 10, -2, 0, 15, 18 };
            Assert::AreEqual(28, sum(testArray, 5));
        }

        TEST_METHOD(TestReplaceZero)
        {
            int testArray[5] = { 10, -2, 0, 15, 18 };
            replaceZero(testArray, 5);
            Assert::AreEqual(0, testArray[0]); // 10 should be replaced with 0
            Assert::AreEqual(-2, testArray[1]);
            Assert::AreEqual(0, testArray[2]);
            Assert::AreEqual(15, testArray[3]);
            Assert::AreEqual(0, testArray[4]); // 18 should be replaced with 0
        }
    };
}