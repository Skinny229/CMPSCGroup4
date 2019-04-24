#include "LinkedList.h"
#include "Tester.h"
#include "Course.h"
#include <cstdlib>
#include <iostream>


using namespace std;
using namespace SpaghettiLizards;
using namespace rlopez;

int main()
{

	Tester gui;

	LinkedList<Course> courseList;
	gui.setObj(courseList);

	gui.addOptionMenu("Add a course");
	gui.addOptionMenu("Edit a course");
	gui.addOptionMenu("Delete a course");
	gui.addOptionMenu("Display courses");
	gui.addOptionMenu("Exit");

	gui.test();



	system("pause");
	return 0;
}