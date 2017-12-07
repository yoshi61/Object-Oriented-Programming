#ifndef PERSON_H
#define PERSON_H

using namespace std;
#include <string>

// Class definition for a person
class person
{
	public:
		string name;
		int salary;
		person();
		person(string myName,int Salary); // a name and salary must be provided to create a person
		void setName(string myName);      // change the person's name
		string getName();
		void setSalary(int mySalary);     // change the person's name
		int getSalary();
		~person();
};
#endif //PERSON_H
