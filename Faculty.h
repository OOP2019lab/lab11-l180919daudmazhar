#pragma once
#include <string>
#include <iostream>
#include "Person.h"
using namespace std;

class Faculty: private Person
{

private:
	int coursecount;
	int phoneno;

public:
	Faculty();
	~Faculty();
	Faculty(string, string, int, int, int);
	void PrintFaculty()const;
};

