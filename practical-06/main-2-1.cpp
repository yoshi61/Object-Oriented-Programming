#include <iostream>
#include "meerkat.h"
#include "cart.h"
#include <string>
using namespace std;

// main program
int main()
{
	meerkat puffy, fluffy, suffy, guffy, miffy;


	puffy.setName("puffy");
	fluffy.setName("fluffy");

	puffy.setAge(1000);
	fluffy.setAge(500);

	cart superCart;
	superCart.addMeerkat(puffy);
	superCart.addMeerkat(fluffy);
	superCart.addMeerkat(suffy);
	superCart.addMeerkat(guffy);
	superCart.addMeerkat(miffy);
	superCart.printMeerkats();
	superCart.emptyCart();
	superCart.printMeerkats();
}
