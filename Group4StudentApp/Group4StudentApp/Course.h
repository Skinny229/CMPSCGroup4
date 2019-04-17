#pragma once
#include <string>
#ifndef COURSE_H
#define COURSEs_H

using namespace std;

namespace SpaghettiLizards
{
	class Course
	{
	private:
		int courseNum;
		string courseDef;
		string semesterTaken;
		string currentStatus;
		string letterGade;
	public:
		void setCourseNum(int);
		void setCourseDef(string);
		void setSemesterTaken(string);
		void currentStatus(string);
		void setLetterGrade(string);

		int getCourseNum() const;
		string getCourseDef() const;
		string getSemesterTaken() const;
		string getCurrentStatus() const;
		string getLetterGrade() const;

	};
}
#endif