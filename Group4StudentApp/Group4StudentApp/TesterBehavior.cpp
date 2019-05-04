#include "Tester.h"
#include "Student.h"
#include "Course.h"
#include <string>
#include "LinkedList.h"
#include "LinkedList.cpp"
#include <fstream>
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
		int count = 0;

		MailingAddress newMailingAddress(streetAddress, city, state, zip, permanentOrLocal);
		Email newMail(mail1, mailType1);
		Date newBirthDate(birthDay, birthMonth, birthYear);
		Date newAcceptedDate(birthDay, birthMonth, birthYear);
		Semester newSem;
		PhoneNumber newNum(phoneNumber1, numberType1);

		ofstream inFile;
		string txtName;
		Student newStu;
		string inputString;
		int input;
		int choice;
		int stuElement;
		switch (sel)
		{

		case 1:
		{
			cout << "First Name: ";
			cin.ignore(100, '\n');
			getline(cin, firstName);
			cout << "Middle Name: ";
			getline(cin, middleName);
			cout << "Last Name: ";
			getline(cin, lastName);
			cout << "Id #: ";
			cin >> id;
			cout << "User Id: ";
			cin.ignore(100, '\n');
			getline(cin, userId);

			do
			{
				cout << "Street address: ";
				if (s == "+")
				{
					cin.ignore(100, '\n');
				}

				getline(cin, streetAddress);
				cout << "City: ";
				getline(cin, city);
				cout << "State: ";
				getline(cin, state);
				cout << "Zip1: ";
				getline(cin, zip);
				cout << "Permanent or local: ";
				getline(cin, permanentOrLocal);

				newMailingAddress.setMailingAddress(streetAddress, city, state, zip, permanentOrLocal);

				stu.addAddress(newMailingAddress);
				count++;


				cout << "Type + to add another address: ";
				cin >> s;
				if (count >= 3 && s == "+")
				{
					cout << "Can only have 3 entries";
					s = " ";
				}
			} while (s == "+");

			do
			{
				cout << "Email: ";
				cin.ignore(100, '\n');
				getline(cin, mail1);
				cout << "Mail type: ";
				getline(cin, mailType1);

				newMail.setEmail(mail1, mailType1);

				stu.addMail(newMail);

				cout << "Type + to add another email: ";
				cin >> s;
				if (count >= 3 && s == "+")
				{
					cout << "Can only have 3 entries";
					s = " ";
				}
			} while (s == "+");

			do
			{
				cout << "Phone Number: ";
				cin.ignore(100, '\n');
				getline(cin, phoneNumber1);
				cout << "Phone Number type: ";
				getline(cin, numberType1);

				newNum.setNumber(phoneNumber1);
				newNum.setNumberType(numberType1);

				stu.addPhoneNumber(newNum);

				cout << "Type + to add another phone number: ";
				cin >> s;
				if (count >= 3 && s == "+")
				{
					cout << "Can only have 3 entries";
					s = " ";
				}
			} while (s == "+");

			LinkedList<Course> courses = stu.getCourseList();
			do
			{
				Course newCourse;

				cout << "Course number: ";
				cin >> input;

				newCourse.setCourseNum(input);

				cout << "Course definition: ";
				cin.ignore(100, '\n');
				getline(cin, inputString);

				newCourse.setCourseDef(inputString);

				cout << "Semester taken: ";
				getline(cin, inputString);

				newCourse.setSemesterTaken(inputString);

				cout << "Current status: ";
				getline(cin, inputString);

				newCourse.setCurrentStatus(inputString);

				cout << "Letter grade: ";
				getline(cin, inputString);

				newCourse.setLetterGrade(inputString);

				courses.push_back(newCourse);

				cout << "Type + to add another course: ";
				cin >> s;
			} while (s == "+");

			cout << "Birth Date(year): ";
			cin >> birthYear;
			cout << "Birth Date(month): ";
			cin >> birthMonth;
			cout << "Birth Date(day): ";
			cin >> birthDay;
			cout << "Acceptance Date(year): ";
			cin >> acceptedYear;
			cout << "Acceptance Date(month): ";
			cin >> acceptedMonth;
			cout << "Acceptance Date(day): ";
			cin >> acceptedDay;

			cout << "Intended Major: ";
			cin.ignore(100, '\n');
			getline(cin, intendedMajor);
			cout << "Intended Minor: ";
			getline(cin, intendedMinor);
			cout << "Starting Semester(Spring or Fall): ";
			getline(cin, startSemester1);
			cout << "Starting year: ";
			getline(cin, startSemesterYear1);
			cout << "Status(Enrolled, not enrolled, etc): ";
			getline(cin, status);

			stu.setFirstName(firstName);
			stu.setMiddleName(middleName);
			stu.setLastName(lastName);
			stu.setId(id);
			stu.setUserId(userId);
			stu.setStatus(status);
			stu.setIntendedMajor(intendedMajor);
			stu.setIntendedMinor(intendedMinor);

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

			stu.setStartSemester(newSem);
			stu.setCourseList(courses);
			studentList.push_back(stu);
		}
			break;
		case 2:
		{
			if (studentList.empty())
			{
				cout << "No Students Exist!";
				choice = 12;
			}
			else if (studentList.size() == 1)
			{
				cout << "Only one student exists!\n";
				studentList.at(0).printAllStuValues(cout);

				input = 1;
				stu = studentList.at(0);
				choice = 0;
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
				stuElement = input - 1;
				stu = studentList.at(input - 1);
				choice = 0;
			}
			stuElement = input - 1;
			while (choice < 13)
			{
				cout << "Select the data you want to edit: " << endl
					<< "1. Names(first, middle, last)" << endl
					<< "2. Id" << endl
					<< "3. User Id" << endl
					<< "4. Address" << endl
					<< "5. Email" << endl
					<< "6. Phone Number" << endl
					<< "7. Birth Day" << endl
					<< "8. Acceptance Date" << endl
					<< "9. Major/Minor" << endl
					<< "10. Starting Semester" << endl
					<< "11. Status" << endl
					<< "12. Courses" << endl
					<< "13. End" << endl;
				cin >> choice;

				switch (choice)
				{
				case 1:
					cout << "First Name: " << endl;
					cin.ignore(100, '\n');
					getline(cin, firstName);
					cout << "Middle Name: " << endl;
					getline(cin, middleName);
					cout << "Last Name: " << endl;
					getline(cin, lastName);

					//Need to use studentList.at(input - 1) for some reason because stu not working
					stu.setFirstName(firstName);
					stu.setMiddleName(middleName);
					stu.setLastName(lastName);
					break;
				case 2:
					cout << "Id #: " << endl;
					cin >> id;

					stu.setId(id);
					break;
				case 3:
					cout << "User Id: " << endl;
					cin.ignore(100, '\n');
					getline(cin, userId);

					stu.setUserId(userId);
					break;
				case 4:
					cout << "Which address would you like to edit?" << endl;
					for (int i = 0; i < stu.getUsedAddress(); i++)
					{
						cout << i + 1 << ") " << stu.getAddress(i).getStreetAddress() << endl;
					}
					cin >> choice;

					cout << "Street address: " << endl;
					cin.ignore(100, '\n');
					getline(cin, streetAddress);
					cout << "City: " << endl;
					getline(cin, city);
					cout << "State: " << endl;
					getline(cin, state);
					cout << "Zip1: " << endl;
					getline(cin, zip);
					cout << "Permanent or local: " << endl;
					getline(cin, permanentOrLocal);

					newMailingAddress.setMailingAddress(streetAddress, city, state, zip, permanentOrLocal);
					stu.editAddress(choice - 1, newMailingAddress);
					break;
				case 5:
					cout << "Which Email would you like to edit?" << endl;
					for (int i = 0; i < studentList.at(input - 1).getUsedMail(); i++)
					{
						cout << i + 1 << ") " << studentList.at(input - 1).getMail(i).getMail() << endl;
					}
					cin >> choice;

					cout << "Email: " << endl;
					cin.ignore(100, '\n');
					getline(cin, mail1);
					cout << "Mail type: " << endl;
					getline(cin, mailType1);

					newMail.setEmail(mail1, mailType1);

					stu.editMail(choice - 1, newMail);
					break;
				case 6:
					cout << "Which phone number would you like to edit?" << endl;
					for (int i = 0; i < studentList.at(input - 1).getUsedPhoneNumber(); i++)
					{
						cout << i + 1 << ") " << studentList.at(input - 1).getPhoneNumber(i).getNumber() << endl;
					}
					cin >> choice;

					cout << "Phone Number: " << endl;
					cin.ignore(100, '\n');
					getline(cin, phoneNumber1);
					cout << "Phone Number type: " << endl;
					getline(cin, numberType1);

					newNum.setNumber(phoneNumber1);
					newNum.setNumberType(numberType1);

					stu.editPhoneNumber(choice - 1, newNum);
					break;
				case 7:
					cout << "Birth Date(year): " << endl;
					cin >> birthYear;
					cout << "Birth Date(month): " << endl;
					cin >> birthMonth;
					cout << "Birth Date(day): " << endl;
					cin >> birthDay;

					newBirthDate.setDay(birthDay);
					newBirthDate.setMonth(birthMonth);
					newBirthDate.setYear(birthYear);

					stu.setBirthDate(newBirthDate);

					break;
				case 8:
					cout << "Acceptance Date(year): " << endl;
					cin >> acceptedYear;
					cout << "Acceptance Date(month): " << endl;
					cin >> acceptedMonth;
					cout << "Acceptance Date(day): " << endl;
					cin >> acceptedDay;

					newAcceptedDate.setDay(acceptedDay);
					newAcceptedDate.setMonth(acceptedMonth);
					newAcceptedDate.setYear(acceptedYear);

					stu.setAcceptedDate(newAcceptedDate);
					break;
				case 9:
					cout << "Intended Major: " << endl;
					cin.ignore(100, '\n');
					getline(cin, intendedMajor);
					cout << "Intended Minor: " << endl;
					getline(cin, intendedMinor);

					stu.setIntendedMajor(intendedMajor);
					stu.setIntendedMinor(intendedMinor);
					break;
				case 10:
					cout << "Starting Semester(Spring or Fall): " << endl;
					getline(cin, startSemester1);
					cout << "Starting year: " << endl;
					getline(cin, startSemesterYear1);

					newSem.setSpringOrFall(startSemester1);
					newSem.setYear(startSemesterYear1);

					stu.setStartSemester(newSem);
					break;
				case 11:
					cout << "Status(Enrolled, not enrolled, etc): " << endl;
					getline(cin, status);

					stu.setStatus(status);
					break;
				case 12:
				{
					LinkedList<Course> courses = studentList.at(input - 1).getCourseList();
					size_t courseSize = courses.size();
					if (courseSize == 0)
					{
						cout << "No Courses Exist for this student! Exiting...";
						break;
					}
					Course cSelected;
					cout << "Select a course:\n";
					for (size_t i = 0; i < courseSize; i++)
						cout << i + 1 << ") " << courses.at(i).getCourseNum() << " " << courses.at(i).getCourseDef() << endl;
					do
					{
						cout << "Selection: ";
						cin >> input;
					} while (input < 1 || input > courseSize);

					int courseElement = input - 1;
					cSelected = courses.at(courseElement);


					cout << "Do you want to edit:\n1.Course Number\n2.Course Name\n3.Semester Taken\n4.Status\n5.Grade\n6.All";
					cout << "\nSelection: ";
					cin >> input;

					switch (input) 
					{
					case 1: {
						cout << "Course number: ";
						cin >> input;
						cSelected.setCourseNum(input);
						}
							break;
					case 2: {
						cout << "Course definition: ";
						cin.ignore(100, '\n');
						getline(cin, inputString);
					}
							break;
					case 3: {
						cout << "Semester taken: ";
						getline(cin, inputString);

						cSelected.setSemesterTaken(inputString); }
							break;
					case 4: {
						cout << "Current status: ";
						getline(cin, inputString);

						cSelected.setCurrentStatus(inputString);
					}break;
					case 5: {
						cout << "Letter grade: ";
						getline(cin, inputString);

						cSelected.setLetterGrade(inputString); 
					}break;
					case 6: {
						cout << "Course number: ";
						cin >> input;

						cSelected.setCourseNum(input);

						cout << "Course definition: ";
						cin.ignore(100, '\n');
						getline(cin, inputString);

						cSelected.setCourseDef(inputString);

						cout << "Semester taken: ";
						getline(cin, inputString);

						cSelected.setSemesterTaken(inputString);

						cout << "Current status: ";
						getline(cin, inputString);

						cSelected.setCurrentStatus(inputString);

						cout << "Letter grade: ";
						getline(cin, inputString);

						cSelected.setLetterGrade(inputString);
					}break;
					}

					courses.replace(courseElement,cSelected);


				}
					break;
				case 13:
					break;
				}
				studentList.replace(stuElement, stu);
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
		}
		break;

		case 8:
		{
			cout << "Please type in the major: ";
			cin >> inputString;
			cout << "----------------\n";
			for (size_t i = 0; i < studentList.size(); i++)
				if (studentList.at(i).getIntendedMajor() == inputString) {
					studentList.at(i).printAllStuValues(cout);
					cout << "----------------";
				}
			cout << "End of List";
		}
		break;
		case 9:
		{
			cout << "Please type in the minor: ";
			cin >> inputString;
			cout << "----------------\n";
			for (size_t i = 0; i < studentList.size(); i++)
				if (studentList.at(i).getIntendedMinor() == inputString) {
					studentList.at(i).printAllStuValues(cout);
					cout << "----------------";
				}
			cout << "End of List";
		}
		break;
		case 10:
		{
			cout << "Please type in the status: ";
			cin >> inputString;
			cout << "----------------\n";
			for (size_t i = 0; i < studentList.size(); i++)
				if (studentList.at(i).getStatus() == inputString) {
					studentList.at(i).printAllStuValues(cout);
					cout << "----------------";
				}
			cout << "End of List";
		}
		break;

		case 11:
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
		case 12:
		{
			cout << "Please enter the student Data file txt name: ";
			cin >> txtName;
			newStu.getStuFromFile(txtName);
			studentList.push_back(newStu);
		}
		break;
		case 13:
			return false;
		}
		return true;
	}
}
