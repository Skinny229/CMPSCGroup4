#include "Tester.h"
#include "Course.h"
#include <string>
#include "LinkedList.h"
#include "LinkedList.cpp"
#include <iostream>
#include <cstdlib>

using namespace std;
using namespace SpaghettiLizards;

namespace rlopez
{
	bool Tester::execOption(int sel, objectType& studentList)
	{
		Course c;
		int courseNum1;
		string courseDef1;
		string semesterTaken1;
		string currentStatus1;
		string letterGrade1;

		int input;
		int choice;
		switch (sel)
		{

		case 1:
			cout << "Course number: " << endl;
			cin >> courseNum1;
			cout << "Course definition: " << endl;
			cin.ignore(100, '\n');
			getline(cin, courseDef1);
			cout << "Semester taken: " << endl;
			getline(cin, semesterTaken1);
			cout << "Current status: " << endl;
			getline(cin, currentStatus1);
			cout << "Letter grade: " << endl;
			cin >> letterGrade1;
			
			c.setCourseNum(courseNum1);
			c.setCourseDef(courseDef1);
			c.setSemesterTaken(semesterTaken1);
			c.setCurrentStatus(currentStatus1);
			c.setLetterGrade(letterGrade1);

			studentList.push_back(c);
			break;
		case 2:
		{
			if (studentList.empty())
			{
				cout << "No Courses Exist!";
				choice = 12;
			}
			else if (studentList.size() == 1)
			{
				cout << "Only one course exists!\n";
				studentList.at(0).printAllStuValues(cout);

				input = 1;
				c = studentList.at(0);
				choice = 0;
			}
			else
			{
				cout << "Please select a course: ";
				for (auto i = 0; i < studentList.size(); i++)
				{
					cout << i + 1 << ") " << studentList.at(i).getCourseDef() << endl;
				}
				do
				{
					cout << "Selection: ";
					cin >> input;
				} while (input < 1 || input > studentList.size());

				studentList.at(input - 1).printAllStuValues(cout);
				c = studentList.at(input - 1);
				choice = 0;
			}
			while (choice < 12)
			{
				cout << "Select the data you want to edit: " << endl
					<< "1. Course number" << endl
					<< "2. Course definition" << endl
					<< "3. Semester taken" << endl
					<< "4. Current status" << endl
					<< "5. Letter grade" << endl
					<< "6. End" << endl;
				cin >> choice;

				switch (choice)
				{
				case 1:
					cout << "Course number: " << endl;
					cin >> courseNum1;

					studentList.at(input - 1).setCourseNum(courseNum1);
					break;
				case 2:
					cout << "Course definition: " << endl;
					getline(cin, courseDef1);

					studentList.at(input - 1).setCourseDef(courseDef1);
					break;
				case 3:
					cout << "Semester taken: " << endl;
					getline(cin, semesterTaken1);

					studentList.at(input - 1).setSemesterTaken(semesterTaken1);
					break;
				case 4:
					cout << "Current status: " << endl;
					getline(cin, currentStatus1);

					studentList.at(input - 1).setCurrentStatus(currentStatus1);
					break;
				case 5:
					cout << "Letter grade: " << endl;
					cin >> letterGrade1;

					studentList.at(input - 1).setLetterGrade(letterGrade1);
					break;
				case 6:
					break;
				}
			}
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
				cout << "Please select a student: \n";
				for (auto i = 0; i < studentList.size(); i++)
				{
					cout << i + 1 << ") " << studentList.at(i).getFirstName() << " " << studentList.at(i).getLastName() << endl;
				}
				do
				{
					cout << "Selection: ";
					cin >> input;
				} while (input < 1 || input > studentList.size());
				studentList.erase((input - 1));
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
				cout << "Please select a student: \n";
				for (auto i = 0; i < studentList.size(); i++)
				{
					cout << i + 1 << ") " << studentList.at(i).getFirstName() << " " << studentList.at(i).getLastName() << endl;
				}
				do
				{
					cout << "Selection: ";
					cin >> input;
				} while (input < 1 || input > studentList.size());
				studentList.at(input - 1).printAllStuValues(cout);
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

			cout << "Please select a student: ";
			for (auto i = 0; i < studentList.size(); i++)
			{
				stu = studentList.at(i);
				cout << "Name: " << stu.getFirstName() << " " << stu.getLastName() << endl;
				cout << "ID: " << stu.getId() << endl;
				cout << "Email: " << "(" << stu.getMail(0).getUniversityOrPersonal() << ") " << stu.getMail(0).getMail() << endl;
				cout << "Number: " << stu.getPhoneNumber(0).getNumber() << endl << endl;
			}
		}
		break;
		case 6:
		{
			if (studentList.empty())
			{
				cout << "No Students Exist!";
				return true;
			}

			cout << "Please select a student: ";
			for (auto i = 0; i < studentList.size(); i++)
			{
				stu = studentList.at(0);
				stu.printAllStuValues(cout);
			}

		}
		break;
		case 7:
		{
			cout << "File name: " << endl;
			cin >> txtName;
			inFile.open(txtName);

			if (!inFile.is_open())
			{
				cout << "FILE NOT OPEN!";
				return false;
			}

			if (studentList.empty())
			{
				cout << "No Students Exist!";
			}
			else if (studentList.size() == 1)
			{
				studentList.at(0).printAllStuValues(inFile);
				cout << "Data was written to " << txtName << endl;
			}
			else
			{
				cout << "Please select a student: \n";
				for (auto i = 0; i < studentList.size(); i++)
				{
					cout << i + 1 << ") " << studentList.at(i).getFirstName() << " " << studentList.at(i).getLastName() << endl;
				}
				do
				{
					cout << "Selection: ";
					cin >> input;
				} while (input < 1 || input > studentList.size());
				studentList.at(input - 1).printAllStuValues(inFile);
				cout << "Data was written to " << txtName << endl;
			}
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
