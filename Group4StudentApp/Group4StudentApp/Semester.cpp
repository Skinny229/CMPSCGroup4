#include<iostream>
#include <cstdlib>
#include "Semester.h"
#include <string>
#include <ostream>
using namespace std;


namespace SpaghettiLizards
{
	Semester::Semester(int year1,string springOrFall1)
	{
		year = year1;
		springOrFall = springOrFall1;
	}
	void Semester::setSemester(int year1, string springOrFall1)
	{
		year = year1;
		springOrFall = springOrFall1;
	}
	int Semester::getYear() const
	{
		return year;
	}
	string Semester::getSpringOrFall() const
	{
		return springOrFall;
	}
	ostream& operator << (ostream&, const Semester& s)
	{
		cout << p.getYear() << p.getSpringOrFall() << endl;
	}
}