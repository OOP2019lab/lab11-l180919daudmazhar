#include "Faculty.h"



Faculty::Faculty():Person("XXX", "YYY", -1)
{
	cout << "Faculty Default Constructor called \n";
}


Faculty::~Faculty()
{
	cout << "Faculty Destructor called \n";
}

Faculty::Faculty(string fname, string lname, int a, int c_count, int no):Person(fname, lname, a)
{
	coursecount = c_count;
	phoneno = no;
	cout << "Faculty overloaded constructor called \n";
}

void Faculty::PrintFaculty()const
{
	PrintInfo();
	cout << ", number of courses " << coursecount << ", ext " << phoneno <<endl;
}