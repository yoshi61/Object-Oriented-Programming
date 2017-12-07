#ifndef PLAYER_H
#define PLAYER_H
#ifndef HUMAN_H
#define HUMAN_H
#ifndef BOT_H
#define BOT_H

#include <time.h>
#include <unistd.h>
#include <string>
#include "card.h"
#include <iostream>
#include <string>
using namespace std;

//////////////////// Class definition for a player///////////////////////////
class player
{
	public:
		//variables
		string name;
		int fund;
		int handNum;
		int lastBet;
		int bet;
		card hand1, hand2;
		//functions
		player();												//default player
		player(string playerName, card phand1, card phand2);	//creat a player
		void setName(string playerName);						//set name
		string getName();										//return name
		int getFund();                        					//return fund
		int getBet();											//return bet
		int getLastBet();										//return lastBet
		bool call(int callNum);									//takes opponant's lastBet as paramiter and bet the sam amound
		bool raise(int raiseNum, int plastBet);					//bet at least twice as the opponant's bet
		bool allIn();											//bet all of your fund
		void fold();											//give up
		void plBet(int bbet);									//bet bbet amount of money
		virtual void printHand();								//print out cards that you have

		~player();
};

///////////////////////implementation for player
player::player()  													//default player
{
	name = "???";
	fund = 10000;
	bet = 0;
	lastBet = 0;
	hand1 = card(0, "?");
	hand2 = card(0, "?");
}

player::player(string playerName, card phand1, card phand2)			//player with name playerName and two cards
{
	name = playerName;
	fund = 10000;
	bet = 0;
	lastBet = 0;
	hand1 = phand1;
	hand2 = phand2;
} 

void player::setName(string playerName)
{
	name = playerName;
}

string player::getName()
{
	return name;
}

int player::getFund()
{
	return fund;
}

int player::getBet()
{
	return bet;
}

int player::getLastBet()
{
	return lastBet;
}

bool player::call(int callNum)							
{
	if(callNum > fund)								//check input
	{
		cout << "oops, no enough fund!!" << endl;
		usleep(300000);
		return 0;
	}

	else
	{
		bet = bet + callNum;
		fund = fund - callNum;
		lastBet = callNum;
		return 1;
	}
	
}

bool player::raise(int raiseNum, int plastBet)
{
	if(raiseNum < 2*plastBet)   											  //check if raised enough money
	{
		cout << "raise need to place at least twice the last bet" << endl;
		usleep(1000000);
		return 0;
	}

	if(raiseNum > fund)														//check if raise too much money
	{
		cout << "oops, no enough fund!!" << endl;
		usleep(1000000);
		return 0;
	}

	else
	{
		bet = bet + raiseNum;
		lastBet = raiseNum;
		fund = fund - raiseNum;
		return 1;
	}
}

bool player::allIn()
{
	if(fund < 2*lastBet)    												 //check if enough for all in
	{
		cout << "All in need to place at least twice the last bet" << endl;
		usleep(1000000);
		return 0;
	}

	else
	{
		bet = bet + fund;
		lastBet = fund;
		fund = 0;
		return 1;
	}
}

void player::fold()
{
	
}

void player::plBet(int bbet)
{
	bet = bet + bbet;
	lastBet = bbet;
}

void player::printHand()
{
	cout  << hand1.getVS() << " " << hand2.getVS() << endl;
} 

player::~player()
{

}

//////////////////////// Class definition for a human////////////////////////////
class human : public player
{
	public:
		human();
		human(string humanName, card phand1, card phand2);
		void printHand();									//print out two cards
		~human();
};

///////////////////////implementation for human
human::human() : player()
{
	
}

human::human(string humanName, card phand1, card phand2) : player(humanName, phand1, phand2)
{

}

void human::printHand()
{
	cout << hand1.getVS() << " " << hand2.getVS() << endl;
}
human::~human()
{

}

//////////////////// Class definition for a bot/////////////////////////////
class bot : public player
{
	public:
		bot();
		bot(card bhand1, card bhand2);
		void printHand();								//print out two cards
		~bot();
};

///////////////////implementation for bot
bot::bot() : player()
{

}

bot::bot(card bhand1, card bhand2) : player("bot", bhand1, bhand2)
{

}

void bot::printHand()
{
	cout << hand1.getVS() << " " << hand2.getVS() << endl;
}

bot::~bot()
{

}



#endif
#endif
#endif