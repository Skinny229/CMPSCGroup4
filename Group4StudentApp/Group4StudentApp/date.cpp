#include<iostream>
#include <cstdlib>
#include "date.h"
using namespace std;


namespace SpaghettiLizards
{
	Date::Date(int mm, int dd, int yy)
	{
		month = mm;
		day = dd;
		year = yy;
	}
	void Date::setDate(int mm, int dd, int yy)
	{
		//precondition: Values passed for month, day and year must be of type integer
		//postcondition: The date has been set
		month = mm;
		day = dd;
		year = yy;
	}

	void Date::showDate()
	{
		cout << "The date is " << month << "/" << day << "/" << year << "\n";
	}
	int Date::getMonth()
	{
		return month;
	}
	int Date::getDay()
	{
		return day;
	}
	int Date::getYear()
	{
		return year;
	}
}