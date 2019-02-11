#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include "Email.h"
#include "PhoneNumber.h"
#include <ostream>

using namespace std;
namespace SpaghettiLizards
{
	Email::Email(string mail1,string universityOrPersonal1)
	{
		mail = mail1;
		universityOrPersonal = universityOrPersonal1;
	}
	void Email::setEmail(string mail1,string universityOrPersonal1)
	{
		mail = mail1;
		universityOrPersonal = universityOrPersonal1;
	}
	string Email::getMail() const
	{
		return mail;
	}
	string Email::getUniversityOrPersonal() const
	{
		return universityOrPersonal;
	}
	ostream& operator << (ostream&, const Email& e)
	{
		cout << e.getMail() << e.getUniversityOrPersonal() << endl;
	}

}