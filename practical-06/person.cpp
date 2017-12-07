#include <iostream>
#include "person.h"

using namespace std;

// implementation of the default person constructor
person::person()
{
	name = "?";
	salary = 0;
}

person::person(string myName,int Salary)
{
	name = myName;
	salary = Salary;
}



// implementation of a person constructor taking a name and food type
void person::setName(string myName)
{
	name = myName;
}

string person::getName()
{
	return name;
}

void person::setSalary(int mySalary)
{
	salary = mySalary;
}

int person::getSalary()
{
	return salary;
}


// implementation of the default person destructor
person::~person()
{
}
