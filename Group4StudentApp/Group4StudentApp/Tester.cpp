#include "Tester.h"
#include <vector>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

namespace rlopez 
{
	//Defaults for random number limits
	int Tester::minRand = 0;
	int Tester::maxRand = 100;
	int Tester::decimalCount = 2;

	//Default constructor
	Tester::Tester() 
	{
		spacer = "----------------------------------";
		optionCount = 0;
	}

	//Takes in the next selection and then executes
	bool Tester::next() 
	{
		int selection;

		cout << vectorToString() << "\nSelection: ";

		cin >> selection;

		//Makes sure the selection is a valid,existing number within the menu. Takes away the need for a default case in the driver cpp
		if (selection < 1 || selection > optionsMenu.size()) 
		{
			cout << "Invalid Selection!\n";
			return true;
		}

		
		return execOption(selection, object);

	}

	//Same as next, but this will run until the execOption returns false
	void Tester::test() 
	{
		while (next());
		
	}

	//Converts the string vector into a single string for cout
	string Tester::vectorToString() 
	{
		string fullMenu = spacer + "\n";
		
		for (string i : optionsMenu)
			fullMenu += i;

		fullMenu += spacer;

		return fullMenu;
	}

	//Adds menu string to the string vector
	void Tester::addOptionMenu(string toBeAdded) 
	{
		string fullOption = to_string(optionsMenu.size() + 1);
		fullOption += ") "+ toBeAdded + "\n";
		optionsMenu.push_back(fullOption);

	}

	void Tester::getDoubles(string msg, int count, double arr[]) 
	{
		double input;

		cout << endl << msg << endl; 
		
		bool random = askRand();

		cout << fixed << setprecision(2) << "Creating random doubles with [" << decimalCount << "] decimal points\n";

		for (int i = 0; i < count; i++)
		{
			if (!random)
			{
				cout << "Please enter double #" << i + 1 << ": ";
				cin >> input;
			}
			else 
			{
				long int max = maxRand * pow(10, decimalCount);
				input = rand() % max + minRand * pow( 10, decimalCount);
				input /= pow(10, decimalCount);
				cout << "Random value generated for double #" << i + 1 << ": " << input << endl;
			}
			arr[i] = input;
		}
	}

	void Tester::getInts(string msg, int count, int arr[])
	{
		int input;

		cout << endl << msg << endl; 

		bool random = askRand();

		for (int i = 0; i < count; i++)
		{
			if (!random)
			{
				cout << "Please enter integer #" << i + 1 << ": ";
				cin >> input;
			}
			else
			{
				input = rand() % maxRand + minRand;
				cout << "Random value generated for integer #" << i + 1 << ": " << input << endl;
			}
			arr[i] = input;
		}
	}

	void Tester::getStrings(string msg, int, string[])
	{

	}

	bool Tester::askRand()
	{
		char response;
		do
		{
			cout << "Do you want to generate random values for this operation(y/n)?: ";
			cin >> response;
		} while (toupper(response) != 'N' && toupper(response) != 'Y');
		if (toupper(response) == 'N')
			return false;
		return true;
	}
	
}