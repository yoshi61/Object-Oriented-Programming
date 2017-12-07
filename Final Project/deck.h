#ifndef DECK_H 
#define DECK_H
#include<iostream>
#include "card.h"

//Class deck
class deck  
{
public:
    deck();                 //crat a deack of card
    card dealCard();       //return a card with random value and suit
    card totalcards[9];    //this remembers what card has been dealt
};

#endif