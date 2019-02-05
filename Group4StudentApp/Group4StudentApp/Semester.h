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
		Semester(int = 0, string = " ");

	private:
		int year;
		string semester;
	};
}
#endif