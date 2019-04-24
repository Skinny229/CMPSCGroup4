#pragma once
#ifndef COURSE_H
#define COURSE_H
#include <string>

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
		string letterGrade;

	public:
		Course(int = 0, string = "?", string = "?", string = "?", string = "?");

		//void getCourseFromFile(string);
		//void writeCourseToFile(ostream&);

		void print(ostream&);

		void setCourseNum(int);
		void setCourseDef(string);
		void setSemesterTaken(string);
		void setCurrentStatus(string);
		void setLetterGrade(string);

		int getCourseNum() const;
		string getCourseDef() const;
		string getSemesterTaken() const;
		string getCurrentStatus() const;
		string getLetterGrade() const;

	};
}
#endif