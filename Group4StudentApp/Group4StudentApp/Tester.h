#ifndef TESTER_H
#define	TESTER_H
#include <string>
#include <vector>
#include "Point.h"


using namespace std;

namespace rlopez
{
	class Tester
	{

	private:

		/*
			Set the type to be used while testing
		*/
		typedef Point objectType;


		//Menu
		vector<string> optionsMenu;
		//Menu extras
		int optionCount;
		string spacer;
		
		/* Exec Option is to be implemented in the driver class of the project
			
			default case is handled in the "next" memeber function
		*/
		bool execOption(int, objectType&);

		//
		string vectorToString();
		
		
	public:
		
		Tester();
		//Menu functionality
		void addOptionMenu(string);
		bool next(objectType&);
		void test(objectType&); 

	

		static void getDoubles(string,int, double[]);
		static void getInts(string,int, int[]);
		static void getStrings(string, int, string[]);
		static bool askRand();
		static int minRand, maxRand, decimalCount;

	};
}

#endif
