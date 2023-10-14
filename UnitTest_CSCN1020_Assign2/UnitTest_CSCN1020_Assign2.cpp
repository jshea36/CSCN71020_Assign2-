#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);
extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width);


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestCSCN1020Assign2
{
	TEST_CLASS(UnitTestCSCN1020Assign2)
	{
	public:
		
		TEST_METHOD(TestFunction_getPerimeter) {

			int length = 2;
			int width = 3;

			int perimeter = getPerimeter(&length, &width);
			Assert::AreEqual(10, perimeter);

		}
		
		TEST_METHOD(TestFunction_getArea) {

			int length = 4;
			int width = 5;

			int area = getArea(&length, &width);

			Assert::AreEqual(20, area);
		}

		TEST_METHOD(TestFunction_setLength) {

			int length = 0;
			setLength(43, &length);
			Assert::AreEqual(43, length);

		}

		TEST_METHOD(TestFunction_setLength_Parameters_Minimum) {

			int length = 0;
			setLength(1, &length);
			Assert::AreEqual(1, length);

		}

		TEST_METHOD(TestFunction_setLength_Parameters_Maximum) {

			int length = 0;
			setLength(99, &length);
			Assert::AreEqual(99, length);

		}

		TEST_METHOD(TestFunction_setWidth_Parameters) {

			int width = 0;
			setLength(57, &width);
			Assert::AreEqual(57, width);

		}

		TEST_METHOD(TestFunction_setWidth_Parameters_Minimum) {

			int width = 0;
			setWidth(1, &width);
			Assert::AreEqual(1, width);

		}

		TEST_METHOD(TestFunction_setWidth_Parameters_Maximum) {

			int width = 0;
			setWidth(99, &width);
			Assert::AreEqual(99, width);

		}






	};
}
