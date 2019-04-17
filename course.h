#pragma once
#ifndef course_h
#define course_h
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;
namespace SpagettiLizards
{
	class course
	{
	private:
		struct node
		{
			int CourseNumber, SemesterNum;
			string DeliveryMethod, CurrStat, Grade, Description;
			node* next = NULL;
		};
		node* head_ptr;
	public:
		course(int coursenum2, int semesternum2, string deliveryMeth2, string currentStatus2, string grade2, string description2);
		void print();
		void read(ifstream& infile);
		void write(ofstream& outfile);
		void setInfo(int coursenum, int semesternum, string deliveryMeth, string currentStatus, string grade, string description);
		void setCourseNum(int);
		void setSemesternum(int);
		void setdeliveryMeth(string);
		void setCurrentStatus(string);
		void setGrade(string);
		void setDescription(string);
		int getCourseNum();
		int getSemesterNum();
		string getDeliveryMeth();
		string getCurrentStatus();
		string getGrade();
		string getDescription();
		
	};
#endif
}