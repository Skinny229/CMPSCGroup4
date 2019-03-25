#include "MailingAddress.h"
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;
namespace SpaghettiLizards

{
	MailingAddress::MailingAddress(string streetAddress1, string city1, string state1, string zip1, string permanentOrLocal1)
	{
		streetAddress = streetAddress1;
		city = city1;
		state = state1;
		zip = zip1;
		permanentOrLocal = permanentOrLocal1;
	}
	void MailingAddress::setMailingAddress(string streetAddress1, string city1, string state1, string zip1, string permanentOrLocal1)
	{
		streetAddress = streetAddress1;
		city = city1;
		state = state1;
		zip = zip1;
		permanentOrLocal = permanentOrLocal1;
	}

	string MailingAddress::getStreetAddress() const
	{
		return streetAddress;
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