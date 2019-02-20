#include<iostream>
#include <cstdlib>
#include <string>

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
	Student::Student(string firstName1, string middleName1, string lastName1 , int id1, int userId1, MailingAddress address1, Email mail1, PhoneNumber number1, Date birthDate1, Date acceptedDate1)
	{
		firstName = firstName1;
		middleName = middleName1;
		lastName = lastName1;
		id = id1;
		userId = userId1;
		address = address1;
		mail = mail1;
		number = number1;
		birthDate = birthDate1;
		acceptedDate = acceptedDate1;

	}

	string Student::getFirstName() const
	{
		return firstName;
	}


	void Student::setFirstName(string firstName1)
	{
		firstName = firstName1;
	}

	string Student::getMiddleName() const
	{
		return middleName;
	}

	void Student::setMiddleName(string middleName)
	{
		this->middleName = middleName;
	}

	string Student::getLastName() const
		{
		return lastName;
	}

	void Student::setLastName(string lastName)
	{
		this->lastName = lastName;
	}

	int Student::getId() const
	{
		return id;
	}

	void Student::setId1(int id)
	{
		this->id = id;
	}

	int Student::getUserId() const
	{
		return userId;
	}

	void Student::setUserId1(int userId)
	{
		this->userId = userId;
	}

	string Student::getIntendedMajor() const
	{
		return intendedMajor;
	}

	void Student::setIntendedMajor(string intendedMajor)
	{
		this->intendedMajor = intendedMajor;
	}

	string Student::getIntendedMinor() const
	{
		return intendedMinor;
	}

	void Student::setIntendedMinor(string intendedMinor)
	{
		this->intendedMinor = intendedMinor;
	}

	MailingAddress Student::getAddress() const
	{
		return address;
	}

	void Student::setAddress(MailingAddress address)
	{
		this->address = address;
	}

	Date Student::getBirthDate() const
	{
		return birthDate;
	}

	void Student::setBirthDate(Date birthDate)
	{
		this->birthDate = birthDate;
	}

	Date Student::getAcceptedDate() const
	{
		return acceptedDate;
	}

	void Student::setAcceptedDate(Date acceptedDate)
	{
		this->acceptedDate = acceptedDate;
	}

	Semester Student::getStartSemester() const
	{
		return startSemester;
	}

	void Student::setStartSemester(Semester startSemester)
	{
		this->startSemester = startSemester;
	}

	string Student::getStatus() const
		{
		return status;
	}

	void Student::setStatus(string status)
	{
		this->status = status;
	}

}