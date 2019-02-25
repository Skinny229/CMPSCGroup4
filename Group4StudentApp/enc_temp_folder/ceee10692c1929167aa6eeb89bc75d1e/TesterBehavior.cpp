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
				
			}
			break;
		case 4:
			{
				
			}
			break;
		case 5:
			{
				
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
				//Testing 	
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