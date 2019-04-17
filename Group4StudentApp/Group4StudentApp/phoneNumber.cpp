#include<iostream>
#include <cstdlib>
#include "PhoneNumber.h"
#include <string>
using namespace std;


namespace SpaghettiLizards
{
	PhoneNumber::PhoneNumber(string number1, string homeOrMobile1)
	{
		number = number1;
		homeOrMobile = homeOrMobile1;
	}
	void PhoneNumber::setNumber(string number1)
	{
		number = number1;
	}
	void PhoneNumber::setNumberType(string homeOrMobile1)
	{
		homeOrMobile = homeOrMobile1;
	}
	string PhoneNumber::getNumber() const
	{
		return number;
	}
	string PhoneNumber::getType() const
	{
		return homeOrMobile;
	}
}