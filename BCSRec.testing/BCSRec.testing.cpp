
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
		
		TEST_METHOD(SetLength)
		{
			int input = 2;
			int length = 3;
			int expected = 2;

			//ACT
			setLength(&input, &length);

			//ASSERT
			Assert::AreEqual(expected, input);
			Assert::AreEqual(expected, length);
		}
		TEST_METHOD(GetArea)
		{
			int width = 2;
			int length = 3;
			int expected = length * width;

			//ACT
			getArea(&length, &width);

			//ASSERT
			Assert::AreEqual(expected, width * length);
		}
	};
}
