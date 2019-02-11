#pragma once
#ifndef EMAIL_H
#define EMAIL_H
#include <string>

using namespace std;

namespace SpaghettiLizards
{
	class Email
	{

	private:
		//email address
		string mail, type;

	public:
		Email(string = " ", string = " ");

	};

}
#endif