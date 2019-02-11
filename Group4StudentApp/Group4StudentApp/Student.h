#pragma once
#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "MailingAddress.h"
#include "Email.h"
#include "PhoneNumber.h"
#include "date.h"

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
		
		//Address
		MailingAddress address;

		//Email
		Email mail;

		//Phone number 
		PhoneNumber number;

		//Important dates
		Date birthDate;
		Date acceptedDate;

	public:

		//Constructor
		Student(string,string,string,int,int,MailingAddress,Email,PhoneNumber,Date,Date);

		//Setters

		//Getters


	};

}
#endif