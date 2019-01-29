#pragma once
#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "MailingAddress.h"
#include "Email.h"
#include "PhoneNumber.h"

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

		//


	public:

	};

}
#endif