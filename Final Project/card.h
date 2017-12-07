#ifndef CARD_H 
#define CARD_H


#include <iostream>
#include <string>
using namespace std;

class card    //A card has its value and suit
{
	public:
	    card();
	    card(int cardValue, string cardSuit);
	    string getVS();							//return string value + suit
	    int getValue();							//return value
	    string getSuit();						//return suit
	    void setValue(int cardValue);			//set value
	    void setSuit(string cardSuit);			//set suit

	private:
	    int value;
	    string suit;

};

#endif
