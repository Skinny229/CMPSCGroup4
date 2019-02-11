#pragma once
#ifndef MAILINGADDRESS_H
#define MAILINGADDRESS_H
#include <string>
#include <ostream>

using namespace std;

namespace SpaghettiLizards
{
	class MailingAddress
	{
	
	private:
		//address
		string address, city, state, zip, permanentOrLocal;
		

	public:
		MailingAddress(string = " ", string = " ", string = " ", string = " ", string = " ");
		void setMailingAddress(string, string, string, string, string);
		string getAddress() const; 
		string getCity() const;
		string getState() const;
		string getZip() const;
		string getPermanentOrLocal() const;
	};
	ostream& operator << (ostream&, const MailingAddress&);
}
#endif
