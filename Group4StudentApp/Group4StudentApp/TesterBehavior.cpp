#include "Tester.h"
#include "Student.h"
#include <string>
#include <iostream>

using namespace std;
using namespace SpaghettiLizards;

namespace rlopez
{
	bool Tester::execOption(int sel, objectType& studentList)
	{
		Student stu;

		string firstName;
		string middleName;
		string lastName;
		string address1;
		int id;
		string userId;
		string intendedMajor;
		string intendedMinor;
		string status;
		string mail1;
		string mailType1;
		string phoneNumber1;
		string numberType1;
		string birthDate1;
		string acceptedDate1;
		string startSemester1;
		string startSemesterYear1;

		switch(sel)
		{
		case 1:
			cout << "First Name: " << endl;
			cin >> firstName;
			cout << "Middle Name: " << endl;
			cin >> middleName;
			cout << "Last Name: " << endl;
			cin >> lastName;
			cout << "Id #: " << endl;
			cin >> id;
			cout << "User Id: " << endl;
			cin >> userId;
			cout << "Address: " << endl;
			cin >> address1;
			cout << "Email: " << endl;
			cin >> mail1;
			cout << "Mail type: " << endl;
			cin >> mailType1;
			cout << "Phone Number: " << endl;
			cin >> phoneNumber1;
			cout << "Phone Number type: " << endl;
			cin >> numberType1;
			cout << "Birth Date: " << endl;
			cin >> birthDate1;			
			cout << "Acceptance Date: " << endl;
			cin >> acceptedDate1;
			cout << "Intended Major: " << endl;
			cin >> intendedMajor;
			cout << "Intended Minor: " << endl;
			cin >> intendedMinor;
			cout << "Starting Semester(Spring or Fall): " << endl;
			cin >> startSemester1;
			cout << "Starting year: " << endl;
			cin >> startSemesterYear1;
			cout << "Status(Enrolled, not enrolled, etc): " << endl;
			cin >> status;

			stu.setAddress(address1);
			/*stu[1].setEmail(mail1, mailType1);
			phoneNumber[1].setPhoneNumber(phoneNumber1, numberType1);*/

			stu.setBirthDate(birthDate1);
			stu.setAcceptedDate.setDate(acceptedDate1);
			stu.setStartSemester.setSemester(startSemester1);
			stu.setStartSemester.setYear(startSemesterYear1);

			studentList.push_back(stu);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			return false;

		}
		return true;
	}
}