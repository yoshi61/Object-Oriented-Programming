#include <iostream>
#include "deck.h"
#include "card.h"
#include <string>
#include <cstdlib>
#include <ctime>


////////////////////creat deck////////////////////
deck::deck()
{
    /*deck::totalcards = {card(0, "?"), card(0, "?"), card(0, "?"), card(0, "?"), card(0, "?"), card(0, "?"), card(0, "?"), card(0, "?"), card(0, "?")};*/
    /*for(int s = 0; s < 9; s++)
    {
        totalcards[s] = card(0, "?");
    }*/
}

//////////////////return a randum card////////////
card deck::dealCard() 
{ 
    int count = 0; 

    SHUFFLE:
    srand(time(NULL));
    int randV = rand() % 13 + 1;     //return a random num 1-13
    int rS = rand() % 4 + 1;        //return a random num 1-4
    string randS;
    switch(rS)                      //translate 1-4 to suit
    {
        case 1:
            randS = " (Heart)";
            break;
        case 2:
            randS = " (Club)";
            break;
        case 3:
            randS = " (Diamond)";
            break;
        case 4:
            randS = " (Spade)";
            break;
        default:
            break;
    }
    card currentCard(randV, randS);  //creat a temparary card vith valueV and sui randS

	for(int i = 0; i < 9; i++)       //check if the temperary card is already used if so go back to shuffle
    {
        if(currentCard.getVS() == totalcards[i].getVS())
        {
            goto SHUFFLE;
        }
    }
    totalcards[count] = currentCard;
    count++;

    return currentCard;
}

	
