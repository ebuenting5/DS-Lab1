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
    cout << "Enter student's name: ";
    getline(cin, name_);
    name = name_;
    setID(id);
}

void Student::setID(string id_)
{
    cout << "Enter student's ID: ";
    getline(cin, id_);
    id = id_;
}

void Student::addCourse(Course course)
{
    string tempgrade;
    string morecourses = "Y";
    int x = 0;
    while (morecourses == "Y" || morecourses == "y" && (x < 100))
    {
        cout << "Enter class name: ";
        getline(cin, course.classname);
        courses[x].classname = course.classname;
        do
        {
            cout << "What was the letter grade in " << courses[x].classname << " ? :";
            getline(cin, tempgrade);
            if (tempgrade == "a")
                tempgrade = "A";
            else if (tempgrade == "b")
                tempgrade = "B";
            else if (tempgrade == "c")
                tempgrade = "C";
            else if (tempgrade == "d")
                tempgrade = "D";
            else if (tempgrade == "f")
                tempgrade = "F";
            else
            {
            }
        } while (tempgrade != "A" && tempgrade != "B" && tempgrade != "C" && tempgrade != "D" && tempgrade != "F");
        courses[x].grade = tempgrade;
        cout << "What semester was the class taken (Fall 2022)? : ";
        getline(cin, course.semester);
        courses[x].semester = course.semester;
        cout << "Enter Y if you have another class to enter: ";
        getline(cin, morecourses);
        x++;
        numCourses++;
    }
    calculateGPA(course, gpa);
}

Course* Student::getCourses(Course course)
{
    for (int i = 0; i < 100; i++)
    {
        if (courses[i].classname != "")
        {
            cout << courses[i].classname << " " << courses[i].grade << " " << courses[i].semester << endl;
        }
    }
    
    return 0;
}

void Student::calculateGPA(Course course, float& gpa)
{
    float gradetotal = 0;
    float classcount = 0;
    for (int i = 0; i < 100; i++)
    {
        if (courses[i].grade == "A")
        {
            gradetotal = gradetotal + 4;
            classcount = classcount + 1;
        }
        else if (courses[i].grade == "B")
        {
            gradetotal = gradetotal + 3;
            classcount = classcount + 1;
        }
        else if (courses[i].grade == "C")
        {
            gradetotal = gradetotal + 2;
            classcount = classcount + 1;
        }
        else if (courses[i].grade == "D")
        {
            gradetotal = gradetotal + 1;
            classcount = classcount + 1;
        }
        else if (courses[i].grade == "F")
        {
            classcount = classcount + 1;
        }
        else if (courses[i].grade == "")
        {
            gpa = gradetotal / classcount;
            break;
        }
    }
}

Course* Student::findCoursesByGrade(Course course)
{
    string search;
    cout << "Enter the grade you would like find courses by: ";
    cin >> search;
    if (search == "a")
        search = "A";
    else if (search == "b")
        search = "B";
    else if (search == "c")
        search = "C";
    else if (search == "d")
        search = "D";
    else if (search == "f")
        search = "F";
    else{}
    for (int i = 0; i < 100; i++)
    {
        if (courses[i].grade == search)
        {
            cout << courses[i].classname << " " << courses[i].grade << " " << courses[i].semester << endl;
        }
    }
    return 0;
}
