#include <iostream>
#include "meerkat.h"
#include "cart.h"

using namespace std;

// implementation of the default meerkat constructor
cart::cart()
{
	OKseats = 4;
}


bool cart::addMeerkat(meerkat cat)
{
	
	if(OKseats < 1)
	{

		return 0;
	}
	switch(OKseats)
	{
		case 4: 
			meerkat1 = cat;
			OKseats--;

			return 1;
			break;
		case 3:
			meerkat2 = cat;
			OKseats--;
			return 1;
			break;
		case 2:
			meerkat3 = cat;
			OKseats--;
			return 1;
			break;
		case 1:
			meerkat4 = cat;
			OKseats--;
			return 1;
			break;
	}
	return 1;
}


void cart::emptyCart()
{
	OKseats = 4;

}  

// print the name, a space, the age, then a new line
void cart::printMeerkats()
{
	if(OKseats == 0)
	{
		cout << meerkat1.getName() << " " << meerkat1.getAge() << endl;
		cout << meerkat2.getName() << " " << meerkat2.getAge() << endl;
		cout << meerkat3.getName() << " " << meerkat3.getAge() << endl;
		cout << meerkat4.getName() << " " << meerkat4.getAge() << endl;
	}
	if(OKseats == 1)
	{
		cout << meerkat1.getName() << " " << meerkat1.getAge() << endl;
		cout << meerkat2.getName() << " " << meerkat2.getAge() << endl;
		cout << meerkat3.getName() << " " << meerkat3.getAge() << endl;

	}
	if(OKseats == 2)
	{
		cout << meerkat1.getName() << " " << meerkat1.getAge() << endl;
		cout << meerkat2.getName() << " " << meerkat2.getAge() << endl;

	}
	if(OKseats == 3)
	{
		cout << meerkat1.getName() << " " << meerkat1.getAge() << endl;
	}
	
}



// implementation of the default cart destructor
cart::~cart()
{
}
