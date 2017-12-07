#ifndef CART_H
#define CART_H
#include "meerkat.h"

using namespace std;
#include <string>

// Class definition for a meerkat
class cart
{
	public:
		cart();                         // create an empty cart object
		meerkat meerkat1, meerkat2, meerkat3, meerkat4;
		int OKseats;				//seats available
		bool addMeerkat(meerkat cat);   // adds a meerkat to the cart, returns false if full
		void emptyCart();               // remove all meerkats from the cart
		void printMeerkats();           // print the name, a space, the age, then a new line
                                // for each meerkat in the order they were added
		~cart();

};
#endif //CART_H
