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
		string address, city, state, zip, type;
		

	public:
		MailingAddress(string = " ", string = " ");
	};

}
#endif
