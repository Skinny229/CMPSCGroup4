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
		Student(string="?",string="?",string="?",int=0,string="?",MailingAddress=NULL,Email=NULL,PhoneNumber=NULL,Date=NULL,Date=NULL);


		 
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
		

		//GETTER and SETTERS by constructor order
		string getFirstName() const
		{
			return firstName;
		}

		void setFirstName(string firstName)
		{
			this->firstName = firstName;
		}

		string getMiddleName() const
		{
			return middleName;
		}

		void setMiddleName(string middleName)
		{
			this->middleName = middleName;
		}

		string getLastName() const
		{
			return lastName;
		}

		void setLastName(string lastName)
		{
			this->lastName = lastName;
		}

		int getId() const
		{
			return id;
		}

		void setId1(int id)
		{
			this->id = id;
		}

		int getUserId() const
		{
			return userId;
		}

		void setUserId1(int userId)
		{
			this->userId = userId;
		}

		string getIntendedMajor() const
		{
			return intendedMajor;
		}

		void setIntendedMajor(string intendedMajor)
		{
			this->intendedMajor = intendedMajor;
		}

		string getIntendedMinor() const
		{
			return intendedMinor;
		}

		void setIntendedMinor(string intendedMinor)
		{
			this->intendedMinor = intendedMinor;
		}

		MailingAddress getAddress() const
		{
			return address;
		}

		void setAddress(MailingAddress address)
		{
			this->address = address;
		}

		Date getBirthDate() const
		{
			return birthDate;
		}

		void setBirthDate(Date birthDate)
		{
			this->birthDate = birthDate;
		}

		Date getAcceptedDate() const
		{
			return acceptedDate;
		}

		void setAcceptedDate(Date acceptedDate)
		{
			this->acceptedDate = acceptedDate;
		}

		Semester getStartSemester() const
		{
			return startSemester;
		}

		void setStartSemester(Semester startSemester)
		{
			this->startSemester = startSemester;
		}

		string getStatus() const
		{
			return status;
		}

		void setStatus(string status)
		{
			this->status = status;
		}
	};

}
#endif