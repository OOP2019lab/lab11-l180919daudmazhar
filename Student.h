#pragma once
#include <string>
#include <iostream>
#include "Person.h"
using namespace std;

class Student: private Person
{

private:
	string fyp_name;
	float cgpa;

public:
	Student(void);
	~Student(void);
	Student(string fname, string lname, int a, float gpa);
	void PrintStudent()const;
	float getGPA()const;
	void setGPA(float);

};

