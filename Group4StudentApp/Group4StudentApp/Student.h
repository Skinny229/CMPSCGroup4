#pragma once
#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <iostream>
#include <fstream>
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
		//Current Status
		string status;

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
		Semester startYear;

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

		Student(string = "?", string = "?", string = "?", int = 1, string = "?", string = "?", string = "?", string = "?");

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


		int getId() const;

		string getUserId() const;

		string getFirstName() const;

		string getMiddleName() const;

		string getStatus() const;

		string getLastName() const;

		string getIntendedMajor() const;

		string getIntendedMinor() const;

		Semester getStartSemester() const;
 
		Date getAcceptedDate() const;

		Date getBirthDate() const;

		MailingAddress getAddress() const;

		Email getMail(int x) const;

		PhoneNumber getPhoneNumber(int x) const;


		void setAddress(MailingAddress address);

		void setId(int id);

		void setUserId(string userId);

		void setIntendedMajor(string intendedMajor);

		void setIntendedMinor(string intendedMinor);

		void setBirthDate(Date birthDate);

		void setAcceptedDate(Date acceptedDate);

		void setFirstName(string firstName);

		void setMiddleName(string middleName);

		void setLastName(string lastName);

		void setStartSemester(Semester startSemester);

		void setStatus(string status);

		void setMail(Email mail[], int x);

		void setPhoneNumber(PhoneNumber number[], int x);

	};
}
#endif