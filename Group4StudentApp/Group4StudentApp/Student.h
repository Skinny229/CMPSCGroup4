#pragma once
#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <iostream>
#include "MailingAddress.h"
#include "Email.h"
#include "PhoneNumber.h"
#include "date.h"
#include "Semester.h"


using namespace std;

namespace SpaghettiLizards 
{
	class Student 
	{

	private:

		//Name of the Student
		string firstName, middleName, lastName;
		//ID's
		int id;
		string userId;
		//Major and Minor
		string intendedMajor;
		string intendedMinor;

		//Address
		MailingAddress address;

		//Email
		Email mail[3];

		//Important dates
		Date birthDate;
		Date acceptedDate;
		//Phone number
		PhoneNumber phoneNumber[3];

		//Semester
		Semester startSemester;

		//Current Status
		string status;

	public:

		/*
		 * string firstName
		 * string middleName
		 * string lastName
		 * int id
		 * int userId
		 * MailingAddress address
		 * Email mail
		 * PhoneNumber number
		 * Date bithDate
		 * Date accpetedDate
		 *
		 */
		Student(string="?",string="?",string="?",int=0,string="?",MailingAddress=MailingAddress(),Email=Email(),PhoneNumber=PhoneNumber(),Date=Date(),Date=Date());


		 
		/*
		 * PRECONDITION: enters valid file path
		 * POSTCONDITION: Returns the an instanciated stu object and true if file opened succesfully
		 */
		bool getStuFromFile(string);



		/*
		 * PRECONDITION: Enters valid ostream object
		 * 
		 * POSTCONDITION: Prints all value content from the member variables
		 *
		 */
		void printAllStuValues(ostream&);
		

	};

}
#endif