#include<iostream>
#include <cstdlib>
#include "phoneNumber.h"
using namespace std;


namespace SpaghettiLizards
{
	PhoneNumber::PhoneNumber(string number1, string homeOrMobile1)
	{
		number = number1;
		homeOrMobile = homeOrMobile1;
	}
	void PhoneNumber::setPhoneNumber(string number1, string homeOrMobile1)
	{
		number = number1;
		homeOrMobile = homeOrMobile1;
	}
	void PhoneNumber::displayPhoneNumber()
	{
		cout << "The " << homeOrMobile << " phone number is: " << number << endl;
	}
}