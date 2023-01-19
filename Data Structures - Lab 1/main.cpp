#include "Student.h"
#include <iostream>

using namespace std;

int main()
{
	int choice;
	string RAM;
	Course mhm;
	Student s;
	s.setName(RAM);
	s.addCourse(mhm);
	system("cls");
	do
	{
		cout << "Enter 1 for student info, 2 for courses, 3 to search for classes by grade, and any other key to exit: ";
		cin >> choice;
		if (choice == 1)
		{
			cout << "Name: " << s.getName() << endl << "ID: " << s.getID() << endl << "GPA: " << s.getGPA() << endl;
		}
		else if (choice == 2)
			s.getCourses(mhm);
		else if (choice == 3)
			s.findCoursesByGrade(mhm);
		else {}
	} while (choice == 1 || choice == 2 || choice == 3);
	
	return 0;
}