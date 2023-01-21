#include "pch.h"
#include "CppUnitTest.h"


#include "../Shapes/Shape.h"
#include "../Shapes/Circle.h"
#include "../Shapes/Rectangle.h"

#define _USE_MATH_DEFINES
#include <math.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(TestCircle)
	{
	public:

		TEST_METHOD(TestEqualityCircle1)
		{
			Circle c1(10);
			Circle c2(20);
			Assert::IsTrue(!(c1 == c2));
		}

		TEST_METHOD(TestEqualityCircle2)
		{
			Circle c1(20);
			Circle c2(20);
			Assert::IsTrue(c1 == c2);
		}

		TEST_METHOD(TestEqualityCircle3)
		{
			Circle* c1 = new Circle(20);
			Circle* c2 = new Circle(20);
			Assert::IsTrue(*c1 == *c2);
		}

		TEST_METHOD(TestAssignCircle)
		{
			Circle c1(10);
			Circle c2(20);
			c1 = c2;
			Assert::AreEqual(c1.area(),c2.area());
		}
	};
}