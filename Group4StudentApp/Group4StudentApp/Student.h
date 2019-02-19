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

		
		string firstName;
		string middleName;
		string lastName;
		int id;
		int userId;
		MailingAddress address;
		Email mail;
		PhoneNumber number;
		Date bithDate;
		Date accepetedDate;
		
		
		Student(string,string,string,int,int,MailingAddress,Email,PhoneNumber,Date,Date);

		 
		/*
		 * PRECONDITION: enters valid file path
		 * POSTCONDITION: Returns the an instanciated stu object
		 */
		Student getStuFromFile(string);

		/*
		 * PRECONDITION: Enters valid ostream object
		 * 
		 * POSTCONDITION: Prints all value content from the member variables
		 *
		 */
		void printAllStuValues(ostream&);
		

		//GETTER and SETTERS by constructor order
		string getFirstName() const;
		void setFirstName(string firstName);

		string getMiddleName() const;

		void setMiddleName(string middleName);

		string getLastName() const;

		void setLastName(string lastName);

		int getId() const;

		void setId1(int id);

		int getUserId() const;

		void setUserId1(int userId);

		string getIntendedMajor() const;

		void setIntendedMajor(string intendedMajor);

		string getIntendedMinor() const;

		void setIntendedMinor(string intendedMinor);


		MailingAddress getAddress() const;

		void setAddress(MailingAddress address);

		Date getBirthDate() const;

		void setBirthDate(Date birthDate);

		Date getAcceptedDate() const;

		void setAcceptedDate(Date acceptedDate);

		Semester getStartSemester() const;

		void setStartSemester(Semester startSemester);
		string getStatus() const;

		void setStatus(string status);
		

}
#endif