#ifndef STUDENT_H
#define	STUDENT_H
#include <string>
using namespace std;

struct Course
{
	string classname;
	string semester;
	string grade;
};
class Student
{
public:
	Student();
	~Student();

	void setName(string name_);
	void setID(string id_);
	void addCourse(Course course);

	string getName() { return name; };
	string getID() { return id; };
	float getGPA() { return gpa; };
	int getNumCourses() { return numCourses; };
	Course* getCourses(Course course);

	void calculateGPA(Course course, float& gpa);
	Course* findCoursesByGrade(Course course);

private:
	string name;
	string id;
	Course courses[100];
	float gpa;
	int numCourses;
};
#endif STUDENT_H