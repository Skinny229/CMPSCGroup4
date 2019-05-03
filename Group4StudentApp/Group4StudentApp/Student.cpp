#include<iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <ostream>
#include "Tester.h"
#include "Student.h"
#include "MailingAddress.h"
#include "Email.h"
#include "LinkedList.h"
#include "LinkedList.cpp"//<- This should not be here, but wont work otherise
#include "Course.h"
#include "PhoneNumber.h"
#include "date.h"
#include "Semester.h"

using namespace std;

namespace SpaghettiLizards
{


  
	Student::Student(string first, string middle, string last, int newId ,string newUserId, string newStatus, string newIntendedMajor, string newIntendedMinor)
	{
		firstName = first;

		middleName = middle;

		lastName = last;

		id = newId;

		userId = newUserId;

		status = newStatus;

		intendedMajor = newIntendedMajor;

		intendedMinor = newIntendedMinor;
	}

	int Student::getId() const
	{
		return id;
	}
	int Student::getUsedAddress()
	{
		return usedAddress;
	}
	int Student::getUsedMail()
	{
		return usedMail;
	}
	int Student::getUsedPhoneNumber()
	{
		return usedPhoneNumber;
	}
	string Student::getUserId() const
	{
		return userId;
	}
	string Student::getFirstName() const
	{
		return firstName;
	}
	string Student::getMiddleName() const
	{
		return middleName;
	}
	string Student::getLastName() const
	{
		return lastName;
	}
	string Student::getIntendedMajor() const
	{
		return intendedMajor;
	}
	string Student::getIntendedMinor() const
	{
		return intendedMinor;
	}
	string Student::getStatus() const
	{
		return status;
	}
	Date Student::getBirthDate() const
	{
		return birthDate;
	}
	Date Student::getAcceptedDate() const
	{
		return acceptedDate;
	}
	Semester Student::getStartSemester() const
	{
		return startSemester;
	}
	MailingAddress Student::getAddress(int x) const
	{
		return address[x];
	}
	Email Student::getMail(int x) const
	{
		return mailOfStu[x];
	}
	PhoneNumber Student::getPhoneNumber(int x) const
	{
		return phoneNumber[x];
	}

	LinkedList<Course>& Student::getCourseList() const 
	{
		return courseList;
	}
  
  
  	void Student::setId(int idl)

	{
		id = idl;
	}
	void Student::setUserId(string userIdl)
	{
		userId = userIdl;
	}
	void Student::setFirstName(string firstName1)
	{
		firstName = firstName1;
	}
	void Student::setMiddleName(string middleNamel)
	{
		middleName = middleNamel;
	}
	void Student::setLastName(string lastNamel)
	{
		lastName = lastNamel;
	}
	void Student::setIntendedMajor(string intendedMajorl)
	{
		intendedMajor = intendedMajorl;
	}
	void Student::setIntendedMinor(string intendedMinorl)
	{
		intendedMinor = intendedMinorl;
	}
	void Student::setBirthDate(Date birthDatel)
	{
		birthDate = birthDatel;
	}
	void Student::setAcceptedDate(Date acceptedDatel)
	{
		acceptedDate = acceptedDatel;
	}
	void Student::setStartSemester(Semester startSemesterl)
	{
		startSemester = startSemesterl;
	}
	void Student::setStatus(string statusl)
	{
		status = statusl;
	} 
	void Student::addAddress(MailingAddress addressl)
	{
		if (usedAddress >= 3)
			return;
		address[usedAddress] = addressl;
		usedAddress++;
	}
	void Student::addMail(Email mail)
	{
		if (usedMail >= 3)
			return;
		mailOfStu[usedMail] = mail;
		usedMail++;
	}
	void Student::addPhoneNumber(PhoneNumber number)
	{
		if (usedPhoneNumber >= 3)
			return;
		phoneNumber[usedPhoneNumber] = number;
		usedPhoneNumber++;
	}
	void Student::editAddress(int x, MailingAddress addressEdit)
	{
		address[x] = addressEdit;
	}
	void Student::editMail(int x, Email mailEdit)
	{
		mailOfStu[x] = mailEdit;
	}
	void Student::editPhoneNumber(int x, PhoneNumber numberEdit)
	{
		phoneNumber[x] = numberEdit;
	}

	
	bool Student::getStuFromFile(string txtPath)
	{
		//Open File
		ifstream inFile;
		inFile.open(txtPath);

		if (!inFile.is_open())
		{
			cout << "FILE NOT OPEN!";
			return false;
		}
	

		string idString;
		string mailStreetAddress;
		string mailCity;
		string mailState;
		string mailZip;
		string mailType;
		string phoneNumber1;
		string numberType1;
		string email;
		string emailType;
		string birthDayString;
		string birthMonthString;
		string birthYearString;
		string acceptedDate1;
		string startSemester1;
		string startSemesterYear1;
		string inputString;
		string courseNum;


		//Ignore first line
		getline(inFile, firstName);
		getline(inFile, firstName);
		getline(inFile, middleName);
		getline(inFile, lastName);
		getline(inFile, idString);
		setId(stoi(idString));
		getline(inFile, userId);

		do
		{
			getline(inFile, mailStreetAddress);
			getline(inFile, mailCity);
			getline(inFile, mailState);
			getline(inFile, mailZip);
			getline(inFile, mailType);

			MailingAddress newMailingAddress(mailStreetAddress, mailCity, mailState, mailZip, mailType);
			addAddress(newMailingAddress);

			getline(inFile, phoneNumber1);
		} while (phoneNumber1 == "-");
		do
		{
			if (email == "-")
			{
				getline(inFile, phoneNumber1);
			}
			getline(inFile, numberType1);


			PhoneNumber newPhoneNumber(phoneNumber1, numberType1);
			addPhoneNumber(newPhoneNumber);

			getline(inFile, email);
		} while (email == "-");

		do
		{
			if (courseNum == "-")
			{
				getline(inFile, email);
			}
			getline(inFile, emailType);


			Email newEmail(email, emailType);
			addMail(newEmail);

			getline(inFile, courseNum);
		} while (inputString == "-");

		do
		{
			Course c;

			if (birthDayString == "-")
			{
				getline(inFile, courseNum);

			}

			c.setCourseNum(stoi(courseNum));

			getline(inFile, inputString);

			c.setCourseDef(inputString);

			getline(inFile, inputString);

			c.setSemesterTaken(inputString);

			getline(inFile, inputString);

			c.setCurrentStatus(inputString);

			getline(inFile, inputString);

			c.setLetterGrade(inputString);

			courseList.push_back(c);

			getline(inFile, birthDayString);
		} while (birthDayString == "-");

		
		getline(inFile, birthMonthString);
		getline(inFile, birthYearString);

		Date newBirthDate(stoi(birthDayString), stoi(birthMonthString), stoi(birthYearString));
		setBirthDate(newBirthDate);

		getline(inFile, birthDayString);
		getline(inFile, birthMonthString);
		getline(inFile, birthYearString);

		Date newAcceptanceDate(stoi(birthDayString), stoi(birthMonthString), stoi(birthYearString));
		setAcceptedDate(newAcceptanceDate);

		getline(inFile, intendedMajor);
		getline(inFile, intendedMinor);

		getline(inFile, startSemester1);
		getline(inFile, startSemesterYear1);

		startSemester.setSemester(startSemester1, startSemesterYear1);

		getline(inFile, status);


		return true;
  }
  
	void Student::printAllStuValues(ostream& out)
	{
		out << "Name: "<< firstName << " " << middleName << " " << lastName << "\nId: " << id << "\nUser Id: " << userId << "\n";

		for (int i = 0; i < usedAddress; i++)
		{
			out << "Address " << i+1 << ": " << address[i].getStreetAddress() << " " << address[i].getCity() << " " << address[i].getState() << " " << address[i].getZip() << " " << address[i].getPermanentOrLocal() << "\n";
		}
		for (int i = 0; i < usedMail; i++)
		{
			out << "Mail " << i + 1 << ": " << mailOfStu[i].getMail() << " " << mailOfStu[i].getUniversityOrPersonal() << "\n";
		}
		for (int i = 0; i < usedPhoneNumber; i++)
		{
			out << "Phone Number " << i + 1 << ": " << phoneNumber[i].getNumber() << " " << phoneNumber[i].getType() << "\n";
		}

		out << "Birth Day: "<< birthDate.getMonth() << "/" << birthDate.getDay() << "/" << birthDate.getYear() << "\nAcceptance Date: " << acceptedDate.getMonth() << "/"
			<< acceptedDate.getDay() << "/" << acceptedDate.getYear() << "\nIntended Major: " << intendedMajor << "\nIntended Minor: " << intendedMinor << "\nStarting Semester: "
			<< startSemester.getSpringOrFall() << " " << startSemester.getYear() <<  "\nStatus: " << status << endl;

		for (size_t i = 0; i < courseList.size(); i++)
			courseList.at(i).print(cout);
	}
}