#pragma once
#ifndef SEMESTER_H
#define SEMESTER_H
//#include <string>

using namespace std;

namespace SpaghettiLizards
{
	class Semester
	{
	public:
		Semester(int = 0, string = " ");
		void setSemester(int, string);
		int getYear() const ;
		string getSpringOrFall() const;
	private:
		int year;
		string springOrFall;
	};
}
#endif