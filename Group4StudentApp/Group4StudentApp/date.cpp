#include<iostream>
#include <cstdlib>
#include <string>
#include "date.h"
using namespace std;

namespace SpaghettiLizards
{
	Date::Date(string date1)
	{
		date = date1;
	}
	void Date::setDate(string date1)
	{
		date = date1;
	}
	string Date::getDate() const
	{
		return date;
	}

}