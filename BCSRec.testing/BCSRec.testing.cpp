
#include "CppUnitTest.h"
#include <math.h>
extern "C"{
#include "../BCSRec/main.h"
}
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRectesting
{
	TEST_CLASS(BCSRectesting)
	{
	public:
		
		TEST_METHOD(GetArea)
		{
			int width = 2;
			int length = 3;
			double expected = length * width;

			//ACT
			double actual = getArea(&length, &width);

			//ASSERT
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(getPerimeter)
		{
			int width = 2;
			int length = 3;
			double expected = length + length + width + width;

			//ACT
			double actual = getPerimeter(&length, &actual);

			//ASSERT
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(SetLength1Standard)
		{
			int input = 2;
			int length = 3;
			int expected = 2;

			//ACT
			int actual = 0;
			setLength(input, &actual);

			//ASSERT
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(SetLength2Null)
		{
			int input = 0;
			int length = 3;
			int expected = 0;

			//ACT
			int actual = 0;
			setLength(input, &actual);

			//ASSERT
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(SetLength3Negative)
		{
			int input = -2;
			int length = 3;
			int expected = -2;

			//ACT
			int actual = 0;
			setLength(input, &actual);

			//ASSERT
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(SetWidth1Standard)
		{
			int input = 2;
			int width = 3;
			int expected = 2;

			//ACT
			int actual = 0;
			setWidth(input, &actual);

			//ASSERT
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(SetWidth2Null)
		{
			int input = 0;
			int width = 3;
			int expected = 0;

			//ACT
			int actual = 0;
			setWidth(input, &actual);

			//ASSERT
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(SetWidth3Negative)
		{
			int input = -2;
			int width = 3;
			int expected = -2;

			//ACT
			int actual = 0;
			setWidth(input, &actual);

			//ASSERT
			Assert::AreEqual(expected, actual);
		}
	};
}
