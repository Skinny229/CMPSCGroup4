#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include "Email.h"
#include "PhoneNumber.h"

using namespace std;
namespace SpaghettiLizards
{
	Email::Email(string mail1,string type1)
	{
		mail = mail1;
		type = type1;
	}
	void Email::setEmail(string mail1,string type1)
	{
		mail = mail1;
		type = type1;
	}
	string Email::getMail()
	{
		return mail;
	}
	string Email::getType()
	{
		return type;
	}
	ostream& operator << (ostream&, const Email& e)
	{
		cout << e.getMail() << e.getType() << endl;
	}

}