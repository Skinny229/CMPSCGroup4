#include <iostream>
#include "course.h"

using namespace std;
namespace SpagettiLizards
{
	course::course(int Coursenum2, int Semesternum2, string DeliveryMeth2, string CurrentStatus2, string Grade2, string Description2)
	{
		int coursenum = Coursenum2;
		int semesternum = Semesternum2;
		string deliveryMeth = DeliveryMeth2;
		string currentStatus = CurrentStatus2;
		string grade2 = Grade2;
		string description2 = Description2;
	}
	void course::print()
	{

	}
	void course::read(ifstream & infile)
	{

	}
	void course::write(ofstream & outfile)
	{

	}
	void course::setInfo(int Coursenum, int Semesternum, string DeliveryMeth, string CurrentStatus, string Grade, string Description)
	{
		int coursenum = Coursenum;
		int semesternum = Semesternum;
		string deliveryMeth = DeliveryMeth;
		string currentStatus = CurrentStatus;
		string grade2 = Grade;
		string description2 = Description;
	}
	void course::setCourseNum(int)
	{

	}
	void course::setSemesternum(int)
	{

	}
	void course::setdeliveryMeth(string)
	{

	}
	void course::setCurrentStatus(string)
	{

	}
	void course::setGrade(string)
	{

	}
	void course::setDescription(string)
	{

	}
	int course::getCourseNum()
	{
		return 0;
	}
	int course::getSemesterNum()
	{
		return 0;
	}
	string course::getDeliveryMeth()
	{
		return string();
	}
	string course::getCurrentStatus()
	{
		return string();
	}
	string course::getGrade()
	{
		return string();
	}
	string course::getDescription()
	{
		return string();
	}
}