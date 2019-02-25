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

		std::string FILE_PATH = "C:/github/CMPSCGroup4/Group4StudentApp/StuData.txt";

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

			string actual = stu.getFirstName();

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
			string expected = "629_Spruce_St.";

			Student stu;

			stu.getStuFromFile(FILE_PATH);

			string actual = stu.getAddress().getAddress();

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(Email_Test)
		{
			string expected = "BPao@aol.com";

			Student stu;

			stu.getStuFromFile(FILE_PATH);

			string actual = stu.getMail(1).getMail();

			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(EmailType_Test)
		{
			string expected = "personal";

			Student stu;

			stu.getStuFromFile(FILE_PATH);


			string actual = stu.getMail(1).getUniversityOrPersonal();

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(PhoneNumber_Test)
		{
			string expected = "6105589781";

			Student stu;

			stu.getStuFromFile(FILE_PATH);

			string actual = stu.getPhoneNumber(1).getNumber();

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(PhoneNumberType_Test)
		{
			string expected = "home";

			Student stu;

			stu.getStuFromFile(FILE_PATH);

			string actual = stu.getPhoneNumber(1).getType();

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(BirthDate_Test)
		{
			string expected = "12/12/1935";

			Student stu;

			stu.getStuFromFile(FILE_PATH);


			string actual = stu.getBirthDate().getDate();


			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(AcceptanceDate_Test)
		{
			string expected = "2/11/2019";

			Student stu;

			stu.getStuFromFile(FILE_PATH);


			string actual = stu.getAcceptedDate().getDate();

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(IntendedMajor_Test)
		{
			string expected = "Computer_Science";

			Student stu;

			stu.getStuFromFile(FILE_PATH);


			string actual = stu.getIntendedMajor();

			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(IntendedMinor_Test)
		{
			string expected = "gaming";

			Student stu;

			stu.getStuFromFile(FILE_PATH);


			string actual = stu.getIntendedMinor();

			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(StartSemester_Test)
		{
			string expected = "Fall";

			Student stu;

			stu.getStuFromFile(FILE_PATH);


			string actual = stu.getStartSemester().getSpringOrFall();

			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(StartYear_Test)
		{
			string expected = "2020";

			Student stu;

			stu.getStuFromFile(FILE_PATH);


			string actual = stu.getStartSemester().getYear();

			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(Status_Test)
		{
			string expected = "enrolled";

			Student stu;

			stu.getStuFromFile(FILE_PATH);


			string actual = stu.getStatus();

			Assert::AreEqual(expected, actual);
		}
	};
}
