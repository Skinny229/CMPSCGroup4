#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Group4StudentApp/Student.h"
#include "../Group4StudentApp/MailingAddress.h"
#include "../Group4StudentApp/date.h"
#include "../Group4StudentApp/Email.h"
#include "../Group4StudentApp/PhoneNumber.h"
#include "../Group4StudentApp/Tester.h"
#include "../Group4StudentApp/Semester.h"


using namespace SpaghettiLizards;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Group4UnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TXTOpenFileTest)
		{
			bool expected = true;

			Student stu;

			bool actual = stu.getStuFromFile("Test.txt");

			Assert::AreEqual(expected, actual);

		}

		

		TEST_METHOD(TestMethod1)
		{
			
			Assert::AreEqual(1, 1);
		}

		TEST_METHOD(FullNameFirst)
		{
			Assert::AreEqual(1, 1);
		}

	};
}