#include "Student.h"
#include <iostream>

using namespace std;

int main()
{
	string RAM;
	Course mhm;
	Student s;
	s.setName(RAM);
	s.addCourse(mhm);

	cout << "Name: " << s.getName() << endl;
	cout << "ID: " << s.getID() << endl;

	Course* courses = s.getCourses();

	for (int i = 0; i < s.getNumCourses(); i++)
	{
		cout << courses[i].classname << " " << courses[i].grade << " " << courses[i].semester << endl;
	}

	return 0;
}