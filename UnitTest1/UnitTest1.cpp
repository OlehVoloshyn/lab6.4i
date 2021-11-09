#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.4 iter/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)

		{	
			int  t;
			int size = 100;
			int* arr = new int[size];
			t = Number_j(arr, size);
			Assert::AreEqual(t, -1);
		}
	};
}
