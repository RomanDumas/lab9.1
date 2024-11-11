#include "pch.h"
#include "CppUnitTest.h"
#include "../LR9.1/func.h"
#include "../LR9.1/func.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsFunc;
namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t = 5;
			double result = nsFunc::S(t);
			double expected = (1 + pow(t, 2) + sqrt(abs(sin(t)))) / ((pow(sin(2 * t * t), 2)) + 1);
			Assert::AreEqual(expected, result);
		}
	};
}
