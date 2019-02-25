#include<iostream>
#include <cstdlib>
#include "Semester.h"
#include <string>
using namespace std;


namespace SpaghettiLizards
{
	Semester::Semester(string year1,string springOrFall1)
	{
		year = year1;
		springOrFall = springOrFall1;
	}
	void Semester::setSemester(string springOrFall1, string year1)
	{
		springOrFall = springOrFall1;
		year = year1;
	}
	void Semester::setSpringOrFall(string springOrFall1)
	{ 
		
		springOrFall = springOrFall1;
	}
	void Semester::setYear(string year1)
	{
		year = year1;
	}
	string Semester::getYear() const
	{
		return year;
	}
	string Semester::getSpringOrFall() const
	{
		return springOrFall;
	}
}