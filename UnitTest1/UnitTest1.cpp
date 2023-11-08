#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_7.3rec/lab_7.3rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            int n = 3;
            int** a = new int* [n];
            for (int i = 0; i < n; i++)
            {
                a[i] = new int[n];
                for (int j = 0; j < n; j++)
                {
                    a[i][j] = 1;
                }
            }
            int t = Sum(a, n, 0, 0, 0);

            Assert::AreEqual(3, t);

            for (int i = 0; i < n; i++)
                delete[] a[i];
            delete[] a;

		}
	};
}
