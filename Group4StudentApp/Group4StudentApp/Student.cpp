#include<iostream>
#include <cstdlib>
#include <string>
#include <fstream>

#include "Tester.h"
#include "Student.h"
#include "MailingAddress.h"
#include "Email.h"
#include "PhoneNumber.h"
#include "date.h"
#include "Semester.h"

using namespace std;

namespace SpaghettiLizards
{


  
	Student::Student(string first, string middle, string last, int newId ,string newUserId)
	{
		firstName = first;

		middleName = middle;

		lastName = last;

		id = newId;

		userId = newUserId;
	}

	int Student::getId() const
	{
		return id;
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
	MailingAddress Student::getAddress() const
	{
		return address;
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
	Email Student::getMail(int x) const
	{
		return mail[x];
	}
	PhoneNumber Student::getPhoneNumber(int x) const
	{
		return phoneNumber[x];
	}
  
  
  	void Student::setId1(int idl)

	{
		id = idl;
	}
	void Student::setUserId1(int userIdl)
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
	void Student::setAddress(MailingAddress addressl)
	{
		address = addressl;
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
	void Student::setMail(Email mail[], int x)
	{
		this->mail[x] = mail[x];
	}
	void Student::setPhoneNumber(PhoneNumber number[], int x)
	{
		this->phoneNumber[x] = number[x];
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
		string address1;
		string mail1;
		string mailType1;
		string phoneNumber1;
		string numberType1;
		string birthDate1;
		string acceptanceDate1;
		string startSemester1;
		string startSemesterYear1;

		//Ignore first line
		inFile.ignore(1, '\n');
		inFile >> firstName >> middleName >> lastName;
		inFile.ignore(1, '-');
		inFile >> id;
		inFile.ignore(1, '-');  
		inFile >> userId;
		inFile.ignore(1, '-');
		inFile >> address1;
		inFile.ignore(1, '-');
		inFile >> mail1;
		inFile.ignore(1, '-');
		inFile >> mailType1;
		inFile.ignore(1, '-');
		inFile >> phoneNumber1;
		inFile.ignore(1, '-');
		inFile >> numberType1;
		inFile.ignore(1, '-');
		inFile >> birthDate1;
		inFile.ignore(1, '-');
		inFile >> acceptanceDate1;
		inFile.ignore(1, '-');
		inFile >> intendedMajor;
		inFile.ignore(1, '-');
		inFile >> intendedMinor;
		inFile.ignore(1, '-');
		inFile >> startSemester1;
		inFile.ignore(1, '-');
		inFile >> startSemesterYear1;
		inFile.ignore(1, '-');
		inFile >> status;

		//address.setAddress(address1);
		mail[1].setEmail(mail1, mailType1);
		phoneNumber[1].setPhoneNumber(phoneNumber1, numberType1);
		//birthDate.setDate();
		//acceptedDate.setDate();

		
		return true;
	}
	void Student::printAllStuValues(string fileName)
	{
		ofstream file;
		file.open("StuData.txt");
		file << firstName << " " << middleName << " " << lastName << " - " << id << " - " << userId << " - " << address.getAddress() << " - ";
		for (int i = 0; i < 3; i++)
		{
			file << mail[i].getMail() << " - " << mail[i].getUniversityOrPersonal() << " - ";
		}
		for (int i = 0; i < 3; i++)
		{
			file << phoneNumber[i].getNumber() << " - " << phoneNumber[i].getType() << " - ";
		}
		file << birthDate.getMonth() << "/" << birthDate.getDay() << "/" << birthDate.getYear() << " - " << acceptedDate.getMonth() << "/" << acceptedDate.getDay() << "/" << acceptedDate.getMonth() << " - " << status << endl;

		file.close();
	}
}