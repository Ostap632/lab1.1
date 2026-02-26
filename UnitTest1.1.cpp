#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1.1/point1.1.h"
#include "../lab1.1/point1.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest11
{
	TEST_CLASS(UnitTest11)
	{
	public:
		TEST_METHOD(TestDistance)
		{
			Point p;
			p.Init(3, 4);
			double expected = 5.0;
			double actual = p.Distance();

			Assert::AreEqual(expected, actual, 0.0001);
		}

		TEST_METHOD(TestValidation)
		{
			Point p;

			bool result = p.Init(150, 0);

			Assert::IsFalse(result);
		}
	};
}