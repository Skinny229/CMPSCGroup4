#pragma once
#ifndef STARTSEMESTER_H
#define STARTSEMESTER_H
#include <string>

using namespace std;

namespace SpaghettiLizards
{
	class StartSemester
	{
	public:
		StartSemester(int = 0, string = " ");

	private:
		int year;
		string semester;
	};
}
#endif