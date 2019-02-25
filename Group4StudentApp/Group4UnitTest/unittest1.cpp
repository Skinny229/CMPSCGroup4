#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Group4StudentApp/Student.h"
#include "../Group4StudentApp/Student.cpp"
#include "../Group4StudentApp/MailingAddress.h"
#include "../Group4StudentApp/MailingAddress.cpp"
#include "../Group4StudentApp/date.h"
#include "../Group4StudentApp/date.cpp"
#include "../Group4StudentApp/PhoneNumber.h"
#include "../Group4StudentApp/phoneNumber.cpp"
#include "../Group4StudentApp/Email.h"
#include "../Group4StudentApp/Email.cpp"
#include "../Group4StudentApp/Semester.h"
#include "../Group4StudentApp/Semester.cpp"
#include <string>


using namespace SpaghettiLizards;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Group4UnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:

		std::string FILE_PATH = "C:/Dev/CMPSCGroup4/Group4StudentApp/Group4StudentApp/StuData.txt";

		TEST_METHOD(TXTOpenFileTest)
		{
			bool expected = true;

			Student stu;

			bool actual = stu.getStuFromFile(FILE_PATH);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(FirstNameFull)
		{
			string expected = "Bob";

			Student stu;

			stu.getStuFromFile(FILE_PATH);

			string actual = stu.getFirstName();

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(MiddleNameFull)
		{
			string expected = "Jennifer";

			Student stu;

			stu.getStuFromFile(FILE_PATH);

			string actual = stu.getMiddleName();

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(LastNameFull)
		{
			string expected = "Pao";

			Student stu;

			stu.getStuFromFile(FILE_PATH);

			string actual = stu.getLastName();

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(ID_TEST)
		{
			int expected = 1;

			Student stu;

			stu.getStuFromFile(FILE_PATH);

			int actual = stu.getId();

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(USERID_TEST)
		{
			string expected = "12345";

			Student stu;

			stu.getStuFromFile(FILE_PATH);

			string actual = stu.getUserId();

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(Address_Test)
		{
			string expected = "629 Spruce St.";

			Student stu;

			stu.getStuFromFile(FILE_PATH);

			string actual = /*stu.getAddress() IMPLEMENT NEW METHOD*/ "FAIL";

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(Email_Test)
		{
			string expected = "Bpao@aol.com";

			Student stu;

			stu.getStuFromFile(FILE_PATH);

			string actual = stu.getMail(0).getMail();

			Assert::AreEqual(expected, actual);
		}


		TEST_METHOD(PhoneNumber_Test)
		{
			string expected = "6105589781";

			Student stu;

			stu.getStuFromFile(FILE_PATH);

			string actual = stu.getPhoneNumber(0).getNumber();

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(BirthDate_Test)
		{
			string expected = "12/12/1935";

			Student stu;

			stu.getStuFromFile(FILE_PATH);


			string actual = /*Implement new method here*/"fail";


			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(AcceptanceDate_Test)
		{
			string expected = "2/11/2019";

			Student stu;

			stu.getStuFromFile(FILE_PATH);


			string actual = /*ToBe Implmented*/ "Fail";

			Assert::AreEqual(expected, actual);
		}


		


	};
}