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
		void setSemester(string, string);
		void setSpringOrFall(string);
		void setYear(string);
		string getYear() const ;
		string getSpringOrFall() const;
	private:
		string year;
		string springOrFall;
	};
}
#endif