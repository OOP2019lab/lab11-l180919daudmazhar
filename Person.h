#pragma once
#include <string>
#include <iostream>
using namespace std;


class Person
{
private:
	string firstname;
	string lastname;
public:
	Person();
	~Person();
	Person(string , string, int);
	void PrintInfo()const;
	string getfirstname()const;
	string getlastname()const;


protected:
	int age;
};

