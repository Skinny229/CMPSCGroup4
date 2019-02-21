#include<iostream>
#include <cstdlib>
#include <string>
#include <fstream>

#include "Student.h"
#include "MailingAddress.h"
#include "Email.h"
#include "PhoneNumber.h"
#include "date.h"
#include "Semester.h"

using namespace std;

namespace SpaghettiLizards
{
	//constructor thing
	Student::Student(string firstName1, string middleName1, string lastName1 , int id1, int userId1, MailingAddress address1, Email mail1[], PhoneNumber number1[], Date birthDate1, Date acceptedDate1)
	{
		firstName = firstName1;
		middleName = middleName1;
		lastName = lastName1;
		id = id1;
		userId = userId1;
		address = address1;
		mail[3] = mail1[3];
		phoneNumber[3] = number1[3];
		birthDate = birthDate1;
		acceptedDate = acceptedDate1;

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


	void Student::setId1(int id)
	{
		this->id = id;
	}
	void Student::setUserId1(int userId)
	{
		this->userId = userId;
	}
	void Student::setFirstName(string firstName1)
	{
		firstName = firstName1;
	}
	void Student::setMiddleName(string middleName)
	{
		this->middleName = middleName;
	}
	void Student::setLastName(string lastName)
	{
		this->lastName = lastName;
	}
	void Student::setIntendedMajor(string intendedMajor)
	{
		this->intendedMajor = intendedMajor;
	}
	void Student::setIntendedMinor(string intendedMinor)
	{
		this->intendedMinor = intendedMinor;
	}
	void Student::setAddress(MailingAddress address)
	{
		this->address = address;
	}
	void Student::setBirthDate(Date birthDate)
	{
		this->birthDate = birthDate;
	}
	void Student::setAcceptedDate(Date acceptedDate)
	{
		this->acceptedDate = acceptedDate;
	}
	void Student::setStartSemester(Semester startSemester)
	{
		this->startSemester = startSemester;
	}
	void Student::setStatus(string status)
	{
		this->status = status;
	}
	void Student::setMail(Email mail[], int x) 
	{
		this->mail[x] = mail[x];
	}
	void Student::setPhoneNumber(PhoneNumber number[], int x)
	{
		this->phoneNumber[x] = number[x];
	}


	void Student::printAllStuValues(string fileName)
	{
		ofstream file;
		file.open("StuData.txt");
		file << firstName << " " << middleName << " " << lastName << " - " << id << " - " << userId << " - " << address << " - ";
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