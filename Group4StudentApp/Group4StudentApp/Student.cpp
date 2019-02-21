#include <string>
#include <fstream>
#include <ostream>
#include "Tester.h"

using namespace std;

namespace SpaghettiLizards
{

	Student::Student(string first, string middle, string last, int newId ,string newUserId, MailingAddress add,Email entry,PhoneNumber num,Date birth,Date accept)
	{
		firstName = first;

		middleName = middle;

		lastName = last;

		id = newId;

		userId = newUserId;

		address = add;

		mail[0] = entry;

		phoneNumber[0] = num;

		birthDate = birth;

		acceptedDate = accept;

	}

	bool Student::getStuFromFile(string txtPath)
	{
		//Open File
		ifstream inFile;
		inFile.open(txtPath);

		if(!inFile.is_open())
		{
			cout << "FILE NOT OPEN!";
			return false;
		}

		//Ignore first line
		inFile.ignore(1, '\n');




		return true;
	}
}