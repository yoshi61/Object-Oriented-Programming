#include <iostream>
#include "person.h"
#include <string>
using namespace std;

// main program
int main()
{
	person *puffy, *fluffy;
	puffy = new person("P1", 200);
	fluffy = new person("P2", 300);

	puffy->setName("puffy");
	fluffy->setName("fluffy");

	puffy->setSalary(1000);
	fluffy->setSalary(500);

	cout << "name: " << puffy->getName() << endl;
	cout << "Salary: " << puffy->getSalary() << endl;

	cout << "name: " << fluffy->getName() << endl;
	cout << "Salary: " << fluffy->getSalary() << endl;
}
