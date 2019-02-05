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
		string type; 

	public:
		PhoneNumber(string = " ",string = " ");

	};

}
#endif