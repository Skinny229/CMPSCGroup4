#include<iostream>
#include <cstdlib>
#include <string>
#include "date.h"
using namespace std;

namespace SpaghettiLizards
{
	Date::Date(int d, int m, int y)
	{
		day = d;
		month = m;
		year = y;
	}
	void Date::setDay(int d)
	{
		day = d;
	}
	void Date::setMonth(int m)
	{
		month = m;
	}
	void Date::setYear(int y)
	{
		year = y;
	}
	int Date::getDay() const
	{
		return day;
	}
	int Date::getMonth() const
	{
		return month;
	}
	int Date::getYear() const
	{
		return year;
	}

}