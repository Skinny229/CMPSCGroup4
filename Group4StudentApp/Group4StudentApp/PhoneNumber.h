#pragma once
#ifndef PHONENUMBER_H
#define PHONENUMBER_H
#include <string>
#include <ostream>

using namespace std;

namespace SpaghettiLizards
{
	class PhoneNumber
	{

	private:
		string number;
		string homeOrMobile;

	public:
		PhoneNumber(string = " ",string = " ");
		void setPhoneNumber(string,string);
		string getNumber() const;
		string getType() const;
	};
	
	ostream& operator << (ostream& , const PhoneNumber&);
}
#endif