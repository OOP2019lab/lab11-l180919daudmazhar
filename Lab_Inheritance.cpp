// l180919 Lab 11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"
#include "Faculty.h"
#include "Student.h"


int main()
{

	Student s1 ("Ted", "Thompson", 22, 3.91);
	cout << endl;
	Faculty f1 ("Richard", "Karp", 45, 2, 420);
	cout << endl;

	/*
	***** Output for Exercise 5 *****

Person constructor called
Student constructor called

Person constructor called
Faculty constructor called
Faculty Destructor called
Person Destructor called
Student Destructor called
Person Destructor called
Press any key to continue . . .
*/

	s1.PrintStudent();
	cout << endl;
	f1.PrintFaculty();
	cout << endl;
	return 0;
}

