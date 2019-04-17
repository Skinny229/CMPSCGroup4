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
		int birthYear = 0;
		int birthMonth = 0;
		int birthDay = 0;
		int acceptedYear = 0;
		int acceptedMonth = 0;
		int acceptedDay = 0;
		string startSemester1;
		string startSemesterYear1;
		string s;

		MailingAddress newMailingAddress(streetAddress, city, state, zip, permanentOrLocal);
		Email newMail(mail1, mailType1);
		Date newBirthDate(birthDay,birthMonth, birthYear);
		Date newAcceptedDate(birthDay, birthMonth, birthYear);
		Semester newSem;
		PhoneNumber newNum(phoneNumber1, numberType1);

		string txtName;
		Student newStu;
		int input;
		switch(sel)
		{
			
		case 1:
			cout << "First Name: " << endl;
			cin.ignore(100, '\n');
			getline(cin, firstName);
			cout << "Middle Name: " << endl;
			getline(cin, middleName);
			cout << "Last Name: " << endl;
			getline(cin, lastName);
			cout << "Id #: " << endl;
			cin >> id;
			cout << "User Id: " << endl;
			cin.ignore(100, '\n');
			getline(cin, userId);

			do
			{
				cout << "Street address: " << endl;
				if (s == "+")
				{
					cin.ignore(100, '\n');
				}
				getline(cin, streetAddress);
				cout << "City: " << endl;
				getline(cin, city);
				cout << "State: " << endl;
				getline(cin, state);
				cout << "Zip1: " << endl;
				getline(cin, zip);
				cout << "Permanent or local: " << endl;
				getline(cin, permanentOrLocal);

				stu.addAddress(newMailingAddress);

				cout << "Type + to add another address: " << endl;
				cin >> s;
			}while (s == "+");

			/*cout << "Street address: " << endl;
			getline(cin, streetAddress);
			cout << "City: " << endl;
			getline(cin, city);
			cout << "State: " << endl;
			getline(cin, state);
			cout << "Zip1: " << endl;
			getline(cin, zip);
			cout << "Permanent or local: " << endl;
			getline(cin, permanentOrLocal);*/

			cout << "Email: " << endl;
			getline(cin, mail1);
			cout << "Mail type: " << endl;
			getline(cin, mailType1);
			cout << "Phone Number: " << endl;
			getline(cin, phoneNumber1);
			cout << "Phone Number type: " << endl;
			getline(cin, numberType1);

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
			cin.ignore(100, '\n');
			getline(cin, intendedMajor);
			cout << "Intended Minor: " << endl;
			getline(cin, intendedMinor);
			cout << "Starting Semester(Spring or Fall): " << endl;
			getline(cin, startSemester1);
			cout << "Starting year: " << endl;
			getline(cin, startSemesterYear1);
			cout << "Status(Enrolled, not enrolled, etc): " << endl;
			getline(cin, status);

			stu.setFirstName(firstName);
			stu.setMiddleName(middleName);
			stu.setLastName(lastName);
			stu.setId(id);
			stu.setUserId(userId);
			stu.setStatus(status);
			stu.setIntendedMajor(intendedMajor);
			stu.setIntendedMinor(intendedMinor);

			
			stu.addMail(newMail);

			stu.addAddress(newMailingAddress);

			stu.addPhoneNumber(newNum);

			newBirthDate.setDay(birthDay);
			newBirthDate.setMonth(birthMonth);
			newBirthDate.setYear(birthYear);

			stu.setBirthDate(newBirthDate);

			newAcceptedDate.setDay(acceptedDay);
			newAcceptedDate.setMonth(acceptedMonth);
			newAcceptedDate.setYear(acceptedYear);

			stu.setAcceptedDate(newAcceptedDate);

			newSem.setSpringOrFall(startSemester1);
			newSem.setYear(startSemesterYear1);

			studentList.push_back(stu);
			break;
		case 2:
			{
			stu.printAllStuValues(cout);
			cout << "Select the data you want to edit: " << endl
				<< "1. Names(first, middle, last)" << endl
				<< "2. Id" << endl
				<< "3. User Id" << endl
				<< "4. Address" << endl
				<< "5. Email" << endl
				<< "6. Phone Number" << endl
				<< "7. Birth Day" << endl
				<< "8. Acceptance Date" << endl
				<< "9. Status" << endl
				<< "10. End" << endl;

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
					for (std::size_t i = 0; i < studentList.size(); i++) {
						stu = studentList.at(i);
						cout << i + 1 << ") " << stu.getFirstName() << " " << stu.getLastName() << endl;
					}
				do
				{
					cout << "Selection: ";
					cin >> input;
				} while (input < 1 || input > studentList.size());
				studentList.erase(input-1);
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
					for (std::size_t i = 0; i < studentList.size(); i++) {
						stu = studentList.at(i);
						cout << i + 1 << ") " << stu.getFirstName() << " " << stu.getLastName() << endl;
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

				for (std::size_t i = 0; i < studentList.size(); i++){
					stu = studentList.at(i);
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


				for (std::size_t i = 0; i < studentList.size(); i++)
					studentList.at(i).printAllStuValues(cout);
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