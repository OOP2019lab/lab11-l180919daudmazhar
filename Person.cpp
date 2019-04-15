#include "Person.h"


Person::Person():firstname("XXX"), lastname ("YYY"), age(-1)
{
	cout << "Person Default Constructor called \n";
}

Person::Person(string fname, string lname, int a)
{

	firstname = fname;
	lastname = lname;
	age = a;

	cout << "Person overloaded constructor called \n";
}

Person::~Person()
{
	cout << "Person Destructor called \n";
}

void Person::PrintInfo()const
{
	cout << firstname << " " << lastname << " is " << age << " years old";
}

string Person::getfirstname()const
{return firstname;}

string Person::getlastname()const
{return lastname;}

