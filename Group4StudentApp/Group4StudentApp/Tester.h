#ifndef TESTER_H
#define	TESTER_H
#include <string>
#include <vector>
#include "Student.h"


using namespace std;

namespace rlopez
{
	class Tester
	{

	private:

		/*
			Set the type to be used while testing
		*/
		typedef SpaghettiLizards::Student objectType;


		//Menu
		vector<string> optionsMenu;
		//Menu extras
		int optionCount;
		string spacer;

		/*
			Exec Option is to be implemented in the driver class of the project
			default case is handled in the "next" memeber function

			PRECONDITION: IS IMPLEMENTED IN DRIVER CLASS WITH SWITCH
			POST CONDITION: RETURNS FALSE IF THE LOOP WILL EXIT AND TRUE TO CONTINUE AFTER OPERATIONS FOR EACH OF THE MENU OPTIONS
		*/
		bool execOption(int, objectType&);

		/*
			PRECONDITION: Private Member vector is initialized
			POSTCONDITION: Returns formated menu for printing in a string
		*/
		string vectorToString();


	public:

		Tester();
		//Menu functionality
		/*
			PRECONDITION:
		*/
		void addOptionMenu(string);
		bool next(objectType&);
		void test(objectType&);


		/*
			applies for all getter types

			PRECONDTION: INT LENGTH WILL NOT EXCEEED THE LENGTH OF THE ARRAY PASSED

			POSTCONDITION: Array will be filled with values specifed by int length var either randomized or not(chosen when called)
		*/
		static void getDoubles(string, int, double[]);
		static void getInts(string, int, int[]);
		static void getStrings(string, int, string[]);


		//Asks if the user wants randomized values and returns answer
		//true = yes false = no
		static bool askRand();

		static int minRand, maxRand, decimalCount;

	};
}
#endif
