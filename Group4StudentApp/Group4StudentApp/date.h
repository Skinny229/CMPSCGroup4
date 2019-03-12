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
		int day;
		int month;
		int year;
	public:
		Date(int, int, int);  // constructor
		void setDay(int); // member function to assign a date
		void setMonth(int);
		void setYear(int);
		int getDay() const;
		int getMonth() const;
		int getYear() const;
	};
}
#endif