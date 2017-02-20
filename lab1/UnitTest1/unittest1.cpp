#include "stdafx.h"
#include "CppUnitTest.h"
#include "C:\Users\Hacki\Documents\Visual Studio 2015\Projects\ConsoleApplication1\ConsoleApplication1\line.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)/*тест с символами вместо цифр отсутствует
	 из-за невозможности этого момента*/
		{
			line one, two;
			one.setline(3, 1);
			two.setline(1, 3);
			line::cross(one, two);
			Assert::AreEqual(one.x, (float)1);
			Assert::AreEqual(one.y, (float)4);
		}
		TEST_METHOD(TestMethod2)
		{
			line one, two;
			one.setline(1, 2);
			two.setline(1, 2);
			line::cross(one, two);
			Assert::AreEqual(one.x, (float)NULL);
			Assert::AreEqual(one.y, (float)NULL);
		}
	};
}