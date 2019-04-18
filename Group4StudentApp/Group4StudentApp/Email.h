#pragma once
#ifndef EMAIL_H
#define EMAIL_H
#include <string>

using namespace std;

namespace SpaghettiLizards
{
	class Email
	{

	private:
		//email address
		string mail, universityOrPersonal;

	public:
		Email(string = " ", string = " ");
		void setEmail(string, string);
		string getMail() const;
		string getUniversityOrPersonal() const;

	};

}
#endif