#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest612
{
	TEST_CLASS(UnitTest612)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int z;
			int i = 0;
			int const n = 5;
			int a[n] = { 1,2,3,4,5 };
			z = Sum(a, n, i);
			Assert::AreEqual(z,6);
		}
	};
}
