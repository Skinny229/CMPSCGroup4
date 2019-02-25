#include "MailingAddress.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include "Email.h"
#include <ostream>

using namespace std;
namespace SpaghettiLizards

{
	MailingAddress::MailingAddress(string address1, string city1, string state1, string zip1, string permanentOrLocal1)
	{
		address = address1;
		city = city1;
		state = state1;
		zip = zip1;
		permanentOrLocal = permanentOrLocal1;
	}
	void MailingAddress::setMailingAddress(string address1, string city1, string state1, string zip1, string permanentOrLocal1)
	{
		address = address1;
		city = city1;
		state = state1;
		zip = zip1;
		permanentOrLocal = permanentOrLocal1;
	}
	void MailingAddress::setAddress(string address1)
	{
		address = address1;
	}
	string MailingAddress::getAddress() const
	{
		return address;
	}
	string MailingAddress::getCity() const
	{
		return city;
	}
	string MailingAddress::getState() const
	{
		return state;
	}
	string MailingAddress::getZip() const
	{
		return zip;
	}
	string MailingAddress::getPermanentOrLocal() const
	{
		return permanentOrLocal;
	}
}