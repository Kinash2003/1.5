#include "pch.h"
#include "CppUnitTest.h"
#include "../1.5/Triad.h"
#include "../1.5/Triad.cpp"
#include "../1.5/Date.h"
#include "../1.5/Date.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest15
{
	TEST_CLASS(UnitTest15)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triad t1;
			t1.Init(2, 1, 1);
			int test = t1.check();
			Assert::AreEqual(1,test);
		}
	};
}
