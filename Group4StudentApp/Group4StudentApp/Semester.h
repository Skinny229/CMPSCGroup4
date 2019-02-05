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
		Semester(int year = 0, string semester = " ");
	private:
		int year;
		string semester;
	};
}
#endif