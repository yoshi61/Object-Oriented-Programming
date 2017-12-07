#include <iostream>
#include <cstdlib>
#include "card.h"
#include <string>
#include <ctime>

card::card()                 //implement default card
{
	value = 0;
	suit = "?";
}

card::card(int cardValue, string cardSuit) //creat s intialised card
{
    value = cardValue;
    suit = cardSuit;
}

int card::getValue()                // return value
{
	return value;
}

string card::getSuit()              //return suit
{
	return suit;
}

string card::getVS()           //translate value into corresponding alphabet
{
    switch(value)
    {
    	case 1:
    		return "A" + suit;
    		break;
    	case 11:
    		return "J" + suit;
    		break;
    	case 12:
    		return "Q" + suit;
    		break;
    	case 13:
    		return "K" + suit;
    		break;
    	default:
    		return to_string(value) + suit;
    		break;
    }
}
