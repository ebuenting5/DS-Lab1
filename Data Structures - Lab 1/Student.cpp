#include "Student.h"
#include <iostream>

Student::Student()
{
	gpa = 0;
	numCourses = 0;
}

Student::~Student()
{
}

void Student::setName(string name_)
{
	cout << "Enter student's name:\n";
	getline(cin, name_);
	name = name_;
	setID(id);
}

void Student::setID(string id_)
{
	cout << "Enter student's ID:\n";
	getline(cin, id_);
	id = id_;
}

void Student::addCourse(Course course)
{
	string morecourses = "Y";
	int x = 0;
	while (morecourses == "Y" || morecourses == "y" && (x < 100))
	{
		cout << "Enter class name: ";
		getline(cin, course.classname);
		courses[x].classname = course.classname;
		cout << "What was the letter grade in " << courses[x].classname << " ? :";
		getline(cin, course.grade);
		courses[x].grade = course.grade;
		cout << "What semester was the class taken (Fall 2022)? :";
		getline(cin, course.semester);
		courses[x].semester = course.semester;
		cout << "Enter Y if you have another class to enter: ";
		getline(cin, morecourses);
		x++;
		numCourses++;
	}
}

void Student::removeCourse(string name_, string semester_)
{
}

Course* Student::getCourses()
{
	Course* temp = new Course[numCourses];

	for (int i = 0; i < numCourses; i++)
	{
		temp[i] = courses[i];
	}

	return temp;
}

float Student::calculateGPA()
{
	return 0.0f;
}

Course* Student::findCoursesByGrade(Grade grade)
{
	return nullptr;
}