#include "stdafx.h"
#include "CppUnitTest.h"
#include <iostream>
#include "../Group4StudentApp/Student.h"
#include "../Group4StudentApp/Student.cpp"
#include "../Group4StudentApp/MailingAddress.h"
#include "../Group4StudentApp/MailingAddress.cpp"
#include "../Group4StudentApp/date.h"
#include "../Group4StudentApp/date.cpp"
#include "../Group4StudentApp/PhoneNumber.h"
#include "../Group4StudentApp/phoneNumber.cpp"
#include "../Group4StudentApp/Course.h"
#include "../Group4StudentApp/Course.cpp"
#include "../Group4StudentApp/LinkedList.h"
#include "../Group4StudentApp/Email.h"
#include "../Group4StudentApp/Email.cpp"
#include "../Group4StudentApp/Semester.h"
#include "../Group4StudentApp/Semester.cpp"
#include <string>


#define FILE_PATH "C:/github/CMPSCGroup4/Group4StudentApp/StuData.txt"

using namespace SpaghettiLizards;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Group4UnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:

		
	
		TEST_METHOD(FirstNameFull)
    {
      
			Student stu;
			stu.getStuFromFile(FILE_PATH);

			string expected = "Bob";
      
			string actual = stu.getFirstName();

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(MiddleNameFull)
		{

			Student stu;
			stu.getStuFromFile(FILE_PATH);
			string expected = "Jennifer";

			string actual = stu.getMiddleName();

			Assert::AreEqual(expected, actual);

		}

		TEST_METHOD(LastNameFull)
		{

			Student stu;
			stu.getStuFromFile(FILE_PATH);
			string expected = "Pao";

			string actual = stu.getLastName();

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(ID_TEST)
		{

			Student stu;
			stu.getStuFromFile(FILE_PATH);
			int expected = 1;

			int actual = stu.getId();

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(USERID_TEST)
		{

			Student stu;
			stu.getStuFromFile(FILE_PATH);
			string expected = "12345";

			string actual = stu.getUserId();

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(Address_0_Steet_Test)
		{

			Student stu;
			stu.getStuFromFile(FILE_PATH);
			string expected = "629 Spruce St.";

			string actual = stu.getAddress(0).getStreetAddress();

			Assert::AreEqual(expected, actual);

		}

		TEST_METHOD(Address_0_City_Test)
		{

			Student stu;
			stu.getStuFromFile(FILE_PATH);
			string expected = "Thornton";

			string actual = stu.getAddress(0).getCity();

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(Address_0_State_Test)
		{

			Student stu;
			stu.getStuFromFile(FILE_PATH);
			string expected = "PA";

			string actual = stu.getAddress(0).getState();

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(Address_0_Zip_Test)
		{

			Student stu;
			stu.getStuFromFile(FILE_PATH);
			string expected = "19283";

			string actual = stu.getAddress(0).getZip();

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(Address_0_Type_Test)
		{


			Student stu;
			stu.getStuFromFile(FILE_PATH);
			string expected = "Permanent";

			string actual = stu.getAddress(0).getPermanentOrLocal();

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(Address_1_Street_Test)
		{

			Student stu;
			stu.getStuFromFile(FILE_PATH);
			string expected = "25 bubble rd.";

			string actual = stu.getAddress(1).getStreetAddress();

			Assert::AreEqual(expected, actual);

		}

		TEST_METHOD(Address_1_City_Test)
		{

			Student stu;
			stu.getStuFromFile(FILE_PATH);
			string expected = "Best city";

			string actual = stu.getAddress(1).getCity();

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(Address_1_State_Test)
		{

			Student stu;
			stu.getStuFromFile(FILE_PATH);
			string expected = "PA";

			string actual = stu.getAddress(1).getState();

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(Address_1_Zip_Test)
		{

			Student stu;
			stu.getStuFromFile(FILE_PATH);
			string expected = "12421";

			string actual = stu.getAddress(1).getZip();

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(Address_1_Type_Test)
		{

			Student stu;
			stu.getStuFromFile(FILE_PATH);
			string expected = "Local";

			string actual = stu.getAddress(1).getPermanentOrLocal();

			Assert::AreEqual(expected, actual);
		}


		TEST_METHOD(Email_Test)
		{

			Student stu;
			stu.getStuFromFile(FILE_PATH);
			string expected = "BPao@aol.com";

			string actual = stu.getMail(0).getMail();

			Assert::AreEqual(expected, actual);
		}
    
		TEST_METHOD(EmailType_Test)
		{

			Student stu;
			stu.getStuFromFile(FILE_PATH);
			string expected = "personal";


			string actual = stu.getMail(0).getUniversityOrPersonal();

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(PhoneNumber_0_Test)
		{

			Student stu;
			stu.getStuFromFile(FILE_PATH);
			string expected = "6105589781";

			string actual = stu.getPhoneNumber(0).getNumber();

			Assert::AreEqual(expected, actual);
		}


		TEST_METHOD(PhoneNumberType_0_Test)
		{

			Student stu;
			stu.getStuFromFile(FILE_PATH);
			string expected = "home";

			string actual = stu.getPhoneNumber(0).getType();

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(PhoneNumber_1_Test)
		{

			Student stu;
			stu.getStuFromFile(FILE_PATH);
			string expected = "6102341234";

			string actual = stu.getPhoneNumber(1).getNumber();

			Assert::AreEqual(expected, actual);
		}


		TEST_METHOD(PhoneNumberType_1_Test)
		{

			Student stu;
			stu.getStuFromFile(FILE_PATH);
			string expected = "local";

			string actual = stu.getPhoneNumber(1).getType();

			Assert::AreEqual(expected, actual);
		}


		TEST_METHOD(BirthDate_Year_Test)
		{

			Student stu;
			stu.getStuFromFile(FILE_PATH);
			int expected = 1935;

			int actual = stu.getBirthDate().getYear();

			Assert::AreEqual(expected, actual);
		}
		
		TEST_METHOD(BirthDate_Day_Test)
		{

			Student stu;
			stu.getStuFromFile(FILE_PATH);
			int expected = 12;

			int actual = stu.getBirthDate().getDay();

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(BirthDate_Month_Test)
		{

			Student stu;
			stu.getStuFromFile(FILE_PATH);
			int expected = 12;

			int actual = stu.getBirthDate().getMonth();

			Assert::AreEqual(expected, actual);
		}

	

		TEST_METHOD(Accept_Year_Test)
		{

			Student stu;
			stu.getStuFromFile(FILE_PATH);
			int expected = 2019;

			int actual = stu.getAcceptedDate().getYear();

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(Accept_Day_Test)
		{

			Student stu;
			stu.getStuFromFile(FILE_PATH);
			int expected = 11;

			int actual = stu.getAcceptedDate().getDay();

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(Accept_Month_Test)
		{

			Student stu;
			stu.getStuFromFile(FILE_PATH);
			int expected = 2;

			int actual = stu.getAcceptedDate().getMonth();

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(IntendedMajor_Test)
		{

			Student stu;
			stu.getStuFromFile(FILE_PATH);
			string expected = "Computer Science";

			string actual = stu.getIntendedMajor();

			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(IntendedMinor_Test)
		{

			Student stu;
			stu.getStuFromFile(FILE_PATH);
			string expected = "Gaming";

			string actual = stu.getIntendedMinor();

			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(StartSemester_Test)
		{

			Student stu;
			stu.getStuFromFile(FILE_PATH);
			string expected = "Fall";

			string actual = stu.getStartSemester().getSpringOrFall();

			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(StartYear_Test)
		{
			Student stu;
			stu.getStuFromFile(FILE_PATH);
			string expected = "2020";

			string actual = stu.getStartSemester().getYear();

			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(Status_Test)
		{

			Student stu;
			stu.getStuFromFile(FILE_PATH);
			string expected = "enrolled";

			string actual = stu.getStatus();

			Assert::AreEqual(expected, actual);
		}
	};
}
