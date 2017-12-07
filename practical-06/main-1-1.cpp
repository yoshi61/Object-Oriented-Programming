#include <iostream>
#include "meerkat.h"

using namespace std;

// main program
int main()
{
	meerkat *puffy, *fluffy;
	puffy = new meerkat();
	fluffy = new meerkat();

	puffy->setName("puffy");
	fluffy->setName("fluffy");

	puffy->setAge(17);
	fluffy->setAge(18);

	cout << "name: " << puffy->getName() << endl;
	cout << "age: " << puffy->getAge() << endl;

	cout << "name: " << fluffy->getName() << endl;
	cout << "age: " << fluffy->getAge() << endl;
}
