#pragma once
#ifndef SEMESTER_H
#define SEMESTER_H
#include <string>

using namespace std;

namespace SpaghettiLizards
{
	class Semester
	{
	public:
		Semester(string = " ", string = " ");
		void setSemester(string springOrFall); 
		void setYear(string year);
		string getYear() const ;
		string getSpringOrFall() const;
	private:
		string year;
		string springOrFall;
	};
}
#endif