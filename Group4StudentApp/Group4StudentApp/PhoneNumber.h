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
		void setPhoneNumber(string, string);
		string getNumber() const;
		string getType() const;
	};
}
#endif