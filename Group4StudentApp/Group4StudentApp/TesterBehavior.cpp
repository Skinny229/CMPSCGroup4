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
		int id;
		string userId;
		string intendedMajor;
		string intendedMinor;
		string status;

		string streetAddress;
		string city;
		string state;
		string zip;
		string permanentOrLocal;

	
		string mail1;
		string mailType1;
		string phoneNumber1;
		string numberType1;
		int birthYear;
		int birthMonth;
		int birthDay;
		int acceptedYear;
		int acceptedMonth;
		int acceptedDay;
		string startSemester1;
		string startSemesterYear1;

		MailingAddress newMailingAddress;
		Email newMail(mail1, mailType1);
		Date newBirthDate;
		Date newAcceptedDate;
		Semester newSem;
		PhoneNumber newNum;

		string txtName;
		Student newStu;
		int input;
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

			cout << "Street address: " << endl;
			cin >> streetAddress;
			cout << "City: " << endl;
			cin >> city;
			cout << "State: " << endl;
			cin >> state;
			cout << "Zip1: " << endl;
			cin >> zip;
			cout << "Permanent or local: " << endl;
			cin >> permanentOrLocal;

			cout << "Email: " << endl;
			cin >> mail1;
			cout << "Mail type: " << endl;
			cin >> mailType1;
			cout << "Phone Number: " << endl;
			cin >> phoneNumber1;
			cout << "Phone Number type: " << endl;
			cin >> numberType1;

			cout << "Birth Date(year): " << endl;
			cin >> birthYear;	
			cout << "Birth Date(month): " << endl;
			cin >> birthMonth;
			cout << "Birth Date(day): " << endl;
			cin >> birthDay;
			cout << "Acceptance Date(year): " << endl;
			cin >> acceptedYear;
			cout << "Acceptance Date(month): " << endl;
			cin >> acceptedMonth;
			cout << "Acceptance Date(day): " << endl;
			cin >> acceptedDay;

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

			stu.setFirstName(firstName);
			stu.setMiddleName(middleName);
			stu.setLastName(lastName);
			stu.setId(id);
			stu.setUserId(userId);
			stu.setStatus(status);
			stu.setIntendedMajor(intendedMajor);
			stu.setIntendedMinor(intendedMinor);

			
			stu.addMail(newMail);

			newMailingAddress.setMailingAddress(streetAddress, city, state, zip, permanentOrLocal);

			newNum.setNumber(phoneNumber1);
			newNum.setNumberType(numberType1);

			newBirthDate.setDay(birthDay);
			newBirthDate.setDay(birthMonth);
			newBirthDate.setDay(birthYear);

			newAcceptedDate.setDay(acceptedDay);
			newAcceptedDate.setDay(acceptedMonth);
			newAcceptedDate.setDay(acceptedYear);

			newSem.setSpringOrFall(startSemester1);
			newSem.setYear(startSemesterYear1);

			studentList.push_back(stu);
			break;
		case 2:
			{
			stu.printAllStuValues(cout);
			cout << "Select the data you want to edit: " << endl
				<< "1. Names(first, middle, last)" << endl
				<< "2. " << endl
				<< "3. " << endl
				<< "4. " << endl;

				
				
			}
			break;
		case 3:
			{
				if (studentList.empty())
				{
					cout << "No Students Exist!";
				}
				else
				{
					cout << "Please select a student: ";
					for (auto i = 0; i < studentList.size(); i++)
					{
						cout << i + 1 << ") " << studentList.at(i).getFirstName() << " " << studentList.at(i).getLastName() << endl;
					}
				do
				{
					cout << "Selection: ";
					cin >> input;
				} while (input < 1 && input >= studentList.size());
				studentList.erase(studentList.begin()+(input-1));
			}
				
			}
			break;
		case 4:
			{
				if (studentList.empty())
				{
					cout << "No Students Exist!";
				}
				else if (studentList.size() == 1)
				{
					cout << "Only one student exist!\n";
					studentList.at(0).printAllStuValues(cout);
				}	
				else
				{
					cout << "Please select a student: ";
					for (auto i = 0; i < studentList.size(); i++)
					{
						cout << i + 1 << ") " << studentList.at(i).getFirstName() << " " << studentList.at(i).getLastName() << endl;
					}
					do
					{
						cout << "Selection: ";
						cin >> input;
					} while (input < 1 || input >= studentList.size());
					studentList.at(input-1).printAllStuValues(cout);
				}

			}
			break;
		case 5:
			{
				if (studentList.empty())
				{
					cout << "No Students Exist!";
					return true;
				}

				for (Student stu : studentList) 
				{
					cout << "Name: " << stu.getFirstName() << " " << stu.getLastName() << endl;
					cout << "ID: " << stu.getId() << endl;
					cout << "Email: " << "(" << stu.getMail(1).getUniversityOrPersonal() << ") " << stu.getMail(1).getMail() << endl;
					cout << "Number: " << stu.getPhoneNumber(1).getNumber() << endl << endl;
				}
			}
			break;
		case 6:
			{
				if(studentList.empty())
				{
					cout << "No Students Exist!";
					return true;
				}

				for (Student stu : studentList)
					stu.printAllStuValues(cout);
			}
			break;
		case 7:
			{
					 	
			}
			break;
		case 8:
			{
				cout << "Please enter the student Data file txt name: ";
				cin >> txtName;
				newStu.getStuFromFile(txtName);
				studentList.push_back(newStu);
			}
			break;
		case 9:
			return false;
		}
		return true;
	}
}