#include "pch.h"
#include "CppUnitTest.h"
extern "C"{
#include "../BCSRec/main.h"
}
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRectesting
{
	TEST_CLASS(BCSRectesting)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int input = 2;
			int length = 3;
			int expected = 2;

			//ACT
			setLength(int input, int* length);

			//ASSERT
			Assert::AreEqual(expected, input);
			Assert::AreEqual(expected, length);
		}
	};
}
