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
		int input;
		int choice;
		switch (sel)
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

				newMailingAddress.setMailingAddress(streetAddress, city, state, zip, permanentOrLocal);

				stu.addAddress(newMailingAddress);
				count++;


				cout << "Type + to add another address: " << endl;
				cin >> s;
				if (count >= 3 && s == "+")
				{
					cout << "Can only have 3 entries" << endl;
					s = " ";
				}
			} while (s == "+");

			do
			{
				cout << "Email: " << endl;
				cin.ignore(100, '\n');
				getline(cin, mail1);
				cout << "Mail type: " << endl;
				getline(cin, mailType1);

				newMail.setEmail(mail1, mailType1);

				stu.addMail(newMail);

				cout << "Type + to add another email: " << endl;
				cin >> s;
				if (count >= 3 && s == "+")
				{
					cout << "Can only have 3 entries" << endl;
					s = " ";
				}
			} while (s == "+");

			do
			{
				cout << "Phone Number: " << endl;
				cin.ignore(100, '\n');
				getline(cin, phoneNumber1);
				cout << "Phone Number type: " << endl;
				getline(cin, numberType1);

				newNum.setNumber(phoneNumber1);
				newNum.setNumberType(numberType1);

				stu.addPhoneNumber(newNum);

				cout << "Type + to add another phone number: " << endl;
				cin >> s;
				if (count >= 3 && s == "+")
				{
					cout << "Can only have 3 entries" << endl;
					s = " ";
				}
			} while (s == "+");

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

			studentList.push_back(stu);
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
				cout << "Only one student exist!\n";
				studentList.at(0).printAllStuValues(cout);

				input = 1;
				stu = studentList.at(0);
				choice = 0;
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
				} while (input < 1 || input > studentList.size());

				studentList.at(input - 1).printAllStuValues(cout);
				stu = studentList.at(input - 1);
				choice = 0;
			}
			while (choice < 12)
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
					<< "12. End" << endl;
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
					studentList.at(input - 1).setFirstName(firstName);
					studentList.at(input - 1).setMiddleName(middleName);
					studentList.at(input - 1).setLastName(lastName);
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

					studentList.at(input - 1).setUserId(userId);
					break;
				case 4:
					cout << "Which address would you like to edit?" << endl;
					for (int i = 0; i < studentList.at(input - 1).getUsedAddress(); i++)
					{
						cout << i + 1 << ") " << studentList.at(input - 1).getAddress(i).getStreetAddress() << endl;
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
					studentList.at(input - 1).editAddress(choice - 1, newMailingAddress);
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

					studentList.at(input - 1).editMail(choice - 1, newMail);
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

					studentList.at(input - 1).editPhoneNumber(choice - 1, newNum);
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

					studentList.at(input - 1).setBirthDate(newBirthDate);

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

					studentList.at(input - 1).setAcceptedDate(newAcceptedDate);
					break;
				case 9:
					cout << "Intended Major: " << endl;
					cin.ignore(100, '\n');
					getline(cin, intendedMajor);
					cout << "Intended Minor: " << endl;
					getline(cin, intendedMinor);

					studentList.at(input - 1).setIntendedMajor(intendedMajor);
					studentList.at(input - 1).setIntendedMinor(intendedMinor);
					break;
				case 10:
					cout << "Starting Semester(Spring or Fall): " << endl;
					getline(cin, startSemester1);
					cout << "Starting year: " << endl;
					getline(cin, startSemesterYear1);

					newSem.setSpringOrFall(startSemester1);
					newSem.setYear(startSemesterYear1);

					studentList.at(input - 1).setStartSemester(newSem);
					break;
				case 11:
					cout << "Status(Enrolled, not enrolled, etc): " << endl;
					getline(cin, status);

					studentList.at(input - 1).setStatus(status);
					break;
				case 12:
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
				} while (input < 1 && input > studentList.size());
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
