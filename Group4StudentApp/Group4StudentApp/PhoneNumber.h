#pragma once
#ifndef PHONENUMBER_H
#define PHONENUMBER_H
#include <string>

using namespace std;

namespace SpaghettiLizards
{
	class PhoneNumber
	{

	private:
		string number;
		string homeOrMobile;

	public:
		PhoneNumber(string = " ", string = " ");
		void setNumber(string);
		void setNumberType(string);
		string getNumber() const;
		string getType() const;
	};
}
#endif