#include <iostream>
#include <iomanip>
#include "Student.h"
#include "Tester.h"
#include <vector>
#include "LinkedList.h"
#include "LinkedList.cpp"
#include <cstdlib>

using namespace std;
using namespace SpaghettiLizards;
using namespace rlopez;

int main()
{
	Tester gui;

	gui.addOptionMenu("Add Student to the List"); //1
	gui.addOptionMenu("Edit Student from the List"); //2 
	gui.addOptionMenu("Delete Student from the List"); //3 
	gui.addOptionMenu("Display ALL values of A Student"); //4
	gui.addOptionMenu("Display partial listing of values of ALL Students"); //5
	gui.addOptionMenu("Display ALL values of ALL Students"); // 6
	gui.addOptionMenu("Sort List of Students"); //7
	gui.addOptionMenu("Display Students of a Certain Major"); //8
	gui.addOptionMenu("Display Students of a Certain Minor"); //9 
	gui.addOptionMenu("Display Students of a Certain Status"); //10
	gui.addOptionMenu("Write Student to file"); //11
	gui.addOptionMenu("Read student from file"); //12
	gui.addOptionMenu("Exit"); //13

	LinkedList<Student> studentList;

	gui.setObj(studentList);


	gui.test();
	


	std::system("pause");
	return 0;
}
