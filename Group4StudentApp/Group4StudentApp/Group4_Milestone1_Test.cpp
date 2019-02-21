#include <iostream>
#include <iomanip>
#include "Student.h"

using namespace std;
using namespace SpaghettiLizards;
using namespace std;
using namespace SpaghettiLizards;

int main()

	Tester gui;

	gui.addOptionMenu("Add Student via Keyboard");
	gui.addOptionMenu("Edit student attribute via keyboard");
	gui.addOptionMenu("Delete student via keyboard");
	gui.addOptionMenu("Display single student details");
	gui.addOptionMenu("Display All student partial details");
	gui.addOptionMenu("Display all students all details");
	gui.addOptionMenu("Write student data to file");
	gui.addOptionMenu("Read students from a file"); //Appends if existsings
	gui.addOptionMenu("Exit aaplication");


	system("pause");
	return 0;
}

}