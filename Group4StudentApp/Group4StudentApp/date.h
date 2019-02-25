#pragma once
#ifndef DATE_H
#define DATE_H
#include <string>

using namespace std;
namespace SpaghettiLizards
{
	class Date
	{
	private:
		string date;
	public:
		Date(string = " ");  // constructor
		void setDate(string); // member function to assign a date
		string getDate() const;
	};
}
#endif