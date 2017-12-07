#include <iostream>
#include "meerkat.h"

using namespace std;

// implementation of the default meerkat constructor
meerkat::meerkat()
{
	name = "?";
	age = 0;
}

// implementation of a meerkat constructor taking a name and food type
void meerkat::setName(string meerName)
{
	name = meerName;
}

string meerkat::getName()
{
	return name;
}

void meerkat::setAge(int meerAge)
{
	age = meerAge;
}

int meerkat::getAge()
{
	return age;
}


// implementation of the default meerkat destructor
meerkat::~meerkat()
{
}
