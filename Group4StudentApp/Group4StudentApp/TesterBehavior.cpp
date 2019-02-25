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
	
		string txtName;
		Student newStu;
		int input;
		switch(sel)
		{
			
		case 1:
			break;
		case 2:
			{
				
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