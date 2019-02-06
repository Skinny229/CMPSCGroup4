#pragma once
#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "MailingAddress.h"
#include "Email.h"
#include "PhoneNumber.h"
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
		int id, userId;
		//Major and Minor
		string intendedMajor;
		string intendedMinor;

		//Address
		MailingAddress address;

		//Email
		Email mail[3];

		//Phone number
		PhoneNumber phoneNumber[3];

		//Semester
		Semester startSemester;

	public:

	};

}
#endif