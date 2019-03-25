#include <iostream>
#include <iomanip>
#include "Student.h"
#include "Tester.h"
#include "LinkedList.h"
#include <cstdlib>

using namespace std;
using namespace SpaghettiLizards;
using namespace rlopez;

int main()
{
	Tester gui;

	gui.addOptionMenu("Add Student Via Keyboard");
	gui.addOptionMenu("Edit Student Via Keyboard");
	gui.addOptionMenu("Delete Student Via Keyboard");
	gui.addOptionMenu("Display all values of student");
	gui.addOptionMenu("Display partial listing of values of student");
	gui.addOptionMenu("Display all students all values in console");
	gui.addOptionMenu("Write Student to file");
	gui.addOptionMenu("Read student from file");
	gui.addOptionMenu("Exit");

	LinkedList<Student> studentList;

	gui.setObj(studentList);


	gui.test();
	


	std::system("pause");
	return 0;
}
