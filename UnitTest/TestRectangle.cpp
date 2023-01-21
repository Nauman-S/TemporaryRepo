#include "pch.h"
#include "CppUnitTest.h"
#include "../Shapes/Circle.h"
#include "../Shapes/Rectangle.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(TestRectangle)
	{
	public:
		TEST_METHOD(TestAreaRectangle)
		{
			Rectangle r1(20, 20);
			Assert::AreEqual(r1.area(), 400.0);
		}

		TEST_METHOD(TestEqualityRectangle)
		{
			Rectangle r1(20, 20);
			Rectangle r2 (20, 20);
			Assert::IsTrue(r1 ==  r2);
		}

		TEST_METHOD(TestAssignRectangle)
		{
			Rectangle r1(10,20);
			Rectangle r2(30,40);
			Assert::IsFalse(r1.area() == r2.area());
			r1 = r2;
			Assert::AreEqual(r1.area(), r2.area());
		}

	};
}