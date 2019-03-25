#pragma once
#ifndef MAILINGADDRESS_H
#define MAILINGADDRESS_H
#include <string>

using namespace std;

namespace SpaghettiLizards
{
	class MailingAddress
	{
	
	private:
		//address
		string streetAddress, city, state, zip, permanentOrLocal;
		

	public:
		MailingAddress(string = " ", string = " ", string = " ", string = " ", string = " ");
		void setMailingAddress(string, string, string, string, string);
		string getStreetAddress() const; 
		string getCity() const;
		string getState() const;
		string getZip() const;
		string getPermanentOrLocal() const;
	};
}
#endif
