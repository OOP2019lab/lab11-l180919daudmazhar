#include "Student.h"



Student::Student():Person("XXX", "YYY", -1)
{
	cout << "Student Default Constructor Called \n";
}


Student::~Student()
{
	cout << "Student Destructor called \n";
}

Student::Student(string fname, string lname, int a, float gpa): Person(fname, lname, a)
{
	age = a;
	cgpa = gpa;
	cout<<"Student overloaded constructor called \n";
}

void Student::PrintStudent()const
{

//cout << firstname << " " << lastname << "is  " << age <<" years old, his cgpa is " << cgpa;

	PrintInfo();
	cout << ", cgpa is " << cgpa << endl;
}

float Student::getGPA()const
{return cgpa;}

void Student::setGPA(float a)
{
	cgpa = a;
}