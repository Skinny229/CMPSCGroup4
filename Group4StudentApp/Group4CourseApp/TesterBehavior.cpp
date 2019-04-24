#include "Tester.h"
#include "Student.h"
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

		string s;
		int count = 0;
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
				studentList.at(0).print(cout);

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

				studentList.at(input - 1).print(cout);
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
				cout << "No Courses Exist!";
			}
			else
			{
				cout << "Please select a courses: \n";
				for (auto i = 0; i < studentList.size(); i++)
				{
					cout << i + 1 << ") " << studentList.at(i).getCourseDef() << " " << studentList.at(i).getCourseNum() << endl;
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
				cout << "No Courses Exist!";
			}
			else if (studentList.size() == 1)
			{
				cout << "Only one course exist!\n";
				studentList.at(0).print(cout);
			}
			else
			{
				cout << "Please select a Course: \n";
				for (auto i = 0; i < studentList.size(); i++)
				{
					cout << i + 1 << ") " << studentList.at(i).getCourseDef() << " " << studentList.at(i).getCourseNum() << endl;
				}
				do
				{
					cout << "Selection: ";
					cin >> input;
				} while (input < 1 || input > studentList.size());
				studentList.at(input - 1).print(cout);
			}
		}
		break;
		case 5:
		{
			return false;
		}
		}
		return true;
	}
}
