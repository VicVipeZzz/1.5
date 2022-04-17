#include "pch.h"
#include "CppUnitTest.h"
#include "../1.5/Lorry.h"
#include "../1.5/Lorry.cpp"
#include "../1.5/Car.cpp"
#include "../1.5/Car.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Car c;
			double f = 20;
			double d = c.Change1();
			Assert::AreEqual(d, f);
		}
	};
}
