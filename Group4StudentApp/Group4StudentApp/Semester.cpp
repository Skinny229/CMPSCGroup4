#include<iostream>
#include <cstdlib>
#include "Semester.h"
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
	void Semester::displaySemester()
	{
		cout << "The semester is in the " << springOrFall << ". The year is " << year << endl;
	}
}