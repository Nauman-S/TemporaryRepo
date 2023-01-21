#include "pch.h"
#include "CppUnitTest.h"
#include "../Shapes/Shape.h"
#include "../Shapes/Circle.h"
#include "../Shapes/Rectangle.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		TEST_METHOD(TestEquality) {

			Rectangle r1(10, 20);
			Rectangle r2(10, 20);
			Circle c1(10);
			Circle c2(20);
			Circle* c3 = new Circle(10);

			Assert::IsTrue(r1 == r2);
			Assert::IsFalse(c1 == c2);
			Assert::IsTrue(*c3 == c1);
			Assert::IsFalse(r1 == c2);

			Shape* s1 = &r1;
			Shape* s2 = &r2;
			Assert::IsTrue(*s1 == *s2);
			s2 = c3;
			Assert::IsFalse(*s1 == *s2);
		}

		TEST_METHOD(TestAddition) {
			Rectangle r1(10, 20);
			Rectangle r2(10, 20);
			Circle c2(20);
			Assert::AreEqual(r1 + r2, 400.0);
		}
	};
}
