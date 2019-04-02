#include<iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <ostream>
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
		if (usedAddress <= 3)
			return;
		address[usedAddress] = addressl;
		usedAddress++;
	}
	void Student::addMail(Email mail)
	{
		if (usedMail <= 3)
			return;
		mailOfStu[usedMail] = mail;
		usedMail++;
	}
	void Student::addPhoneNumber(PhoneNumber number)
	{
		if (usedPhoneNumber <= 3)
			return;
		phoneNumber[usedPhoneNumber] = number;
		usedPhoneNumber++;
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
		string address1;
		string mail1;
		string mailType1;
		string phoneNumber1;
		string numberType1;
		string birthDate1;
		string acceptedDate1;
		string startSemester1;
		string startSemesterYear1;

		//Ignore first line
		getline(inFile, firstName);
		getline(inFile, firstName);
		getline(inFile, middleName);
		getline(inFile, lastName);
		getline(inFile, idString);
		getline(inFile, userId);
		
		/*
		inFile >> firstName >> middleName >> lastName;

		inFile.ignore(15, '-');
		inFile >> id;
		inFile.ignore(16, '-');
		inFile >> userId;
		inFile.ignore(17, '-');
		inFile >> address1;
		inFile.ignore(18, '-');
		inFile >> mail1;
		inFile.ignore(19, '-');
		inFile >> mailType1;
		inFile.ignore(20, '-');
		inFile >> phoneNumber1;
		inFile.ignore(21, '-');
		inFile >> numberType1;
		inFile.ignore(22, '-');
		inFile >> birthDate1;
		inFile.ignore(23, '-');
		inFile >> acceptedDate1;
		inFile.ignore(24, '-');
		inFile >> intendedMajor;
		inFile.ignore(25, '-');
		inFile >> intendedMinor;
		inFile.ignore(26, '-');
		inFile >> startSemester1;
		inFile.ignore(27, '-');
		inFile >> startSemesterYear1;
		inFile.ignore(28, '-');
		inFile >> status;
		

		Email newMail(mail1, mailType1);
		addMail(newMail);

		PhoneNumber newNum(phoneNumber1, numberType1);
		addPhoneNumber(newNum);

		//address.setAddress(address1);
		//birthDate.setDate(birthDate1);
		//acceptedDate.setDate(acceptedDate1);

		startSemester.setSemester(startSemester1, startSemesterYear1);
		*/
		id = stoi(idString);
		return true;
  }
  
	void Student::printAllStuValues(ostream& out)
	{
		//ofstream file;

		//file.open("StuData.txt");
		out << firstName << " " << middleName << " " << lastName << " " << id << " " << userId << " ";

		for (int i = 0; i <= usedAddress; i++)
		{
			out << address[i].getStreetAddress() << " " << address[i].getCity() << " " << address[i].getState() << " " << address[i].getZip() << " " << address[i].getPermanentOrLocal() << " ";
		}
		out << "*";
		for (int i = 0; i <= usedMail; i++)
		{
			out << mailOfStu[i].getMail() << " " << mailOfStu[i].getUniversityOrPersonal() << " ";
		}
		out << "*";
		for (int i = 0; i <= usedPhoneNumber; i++)
		{
			out << phoneNumber[i].getNumber() << " " << phoneNumber[i].getType() << " ";
		}
		out << "*";
		out << birthDate.getDay() << " " << birthDate.getMonth() << " " << birthDate.getYear() << " " << acceptedDate.getDay() << " "
			<< acceptedDate.getMonth() << " " << acceptedDate.getYear() << " " << status << endl;

		//file.close();
	}
}