#include<iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <ostream>
#include "Course.h"

using namespace std;

namespace SpaghettiLizards
{

	Course::Course(int  courseNum1, string courseDef1, string semesterTaken1, string currentStatus1, string letterGrade1)
	{
		courseNum = courseNum1;

		courseDef = courseDef1;

		semesterTaken = semesterTaken1;

		this->currentStatus = currentStatus1;

		letterGrade = letterGrade1;
	}

 	void Course::print(ostream& out) 
	{
		out << courseDef << " " << courseNum << endl;
		out << semesterTaken << endl << "Status: "  << currentStatus << endl << "Grade: " << letterGrade << endl;
	}

	int Course::getCourseNum() const
	{
		return courseNum;
	}
	string Course::getCourseDef() const
	{
		return courseDef;
	}
	string Course::getSemesterTaken() const
	{
		return semesterTaken;
	}
	string Course::getCurrentStatus() const
	{
		return this->currentStatus;
	}
	string Course::getLetterGrade() const
	{
		return letterGrade;
	}

	void Course::setCourseNum(int  courseNum1)
	{
		courseNum = courseNum1;
	}
	void Course::setCourseDef(string courseDef1)
	{
		courseDef = courseDef1;
	}
	void Course::setSemesterTaken(string semesterTaken1)
	{
		semesterTaken = semesterTaken1;
	}
	void Course::setCurrentStatus(string currentStatus1)
	{
		this->currentStatus = currentStatus1;
	}
	void Course::setLetterGrade(string letterGrade1)
	{
		letterGrade = letterGrade1;
	}

}