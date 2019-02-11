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
		Student(string,string,string,int,int,MailingAddress,Email,PhoneNumber,Date,Date);

		//Setters

		//Getters


	};

}
#endif