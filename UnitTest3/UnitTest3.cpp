#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5_3/lab_5_3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		// Тест для функції k, коли |x| >= 1
		TEST_METHOD(TestK_GreaterEqual_1)
		{
			double x = 1.5;
			double result = k(x);

			Assert::IsTrue((result - 5.4519) < 0.0001);

		}

		// Тест для функції k, коли |x| < 1
		TEST_METHOD(TestK_Less_Than_1)
		{
			double x = 0.5;
			double result = k(x);

			// Проста перевірка, чи результат більше нуля
			Assert::IsTrue(result > 0);

		}

		// Тест на коректне виконання при x = 0
		TEST_METHOD(TestK_Zero)
		{
			double x = 0.0;
			double result = k(x);	
			Assert::AreEqual(1.0, result, 0.0001);
			
		}
	};
}
