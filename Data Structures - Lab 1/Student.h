#ifndef STUDENT_H
#define	STUDENT_H
#include <string>
using namespace std;
enum Grade
{
	A,
	B,
	C,
	D,
	F
};
struct course
{
	string classname;
	string semester;
	Grade grade;
};
class Student
{
public:
	void setname(string name_) { name = name_; };
	void setid(string id_) { id = id_; };
private:
	string name;
	string id;
	course courses[100];
	float gpa;
	int numcourses;
};
#endif STUDENT_H