#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP Lab5.1C/LongLong.cpp"
#include "../OOP Lab5.1C/LongLongPrivate.cpp"
#include "../OOP Lab5.1C/LongLongPublic.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51C
{
	TEST_CLASS(UnitTest51C)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LongLongPublic A(1, 2), B(2, 1);
			Assert::AreEqual(A < B, true);
		}
	};
}
