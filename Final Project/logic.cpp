#include <iostream>
#include <time.h>
#include <unistd.h>
#include "card.h"
#include "deck.h"
#include "player.h"
#include <vector>
using namespace std;

bool game(int width)
{

	int blingking = 18;
	string str = "I am the winner!!!";
	int strSize = 18;
	int counter = 0;
	while(counter != 18)
	{
		system("clear");
		for(int s = 0; s < width+1; s++)
		{
			cout << "*";
		}
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "                ";
		if(counter < 18)
		{
			for(int i = 18-(counter%18); i > 0; i--)
			{
				cout << " ";
			}
			for(int i = 0; i < counter; i++)
			{
				cout << str[i];
			}
		}
		else if(counter >= 18 && counter < 36)
		{
			for(int i = counter%18; i < 18; i++)
			{
				cout << str[i];
			}
		}
		else
		{
			counter = 0;
		}
		
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		for(int t = 0; t < width+1; t++)
		{
			cout << "*";
		}
		cout << endl;
		blingking++;
		counter++;
		usleep(200000);
	}






	START:        //START lable for jump
	//creat 5 flops of cards 4 hands of cards
	//since it will take some time we use cout to display the progress
	cout << "Loading...0%" << endl;
	int page = 1;
	deck deck;
	system("clear");
	cout << "Loading...5%" << endl;
	card flop1 = deck.dealCard();
	system("clear");
	cout << "Loading...10%" << endl;
	card flop2 = deck.dealCard();
	system("clear");
	cout << "Loading...15%" << endl;
	card flop3 = deck.dealCard();
	system("clear");
	cout << "Loading...25%" << endl;
	card flop4 = deck.dealCard();
	system("clear");
	cout << "Loading...40%" << endl;
	card flop5 = deck.dealCard();
	system("clear");
	cout << "Loading...50%" << endl;
	card hand1 = deck.dealCard();
	system("clear");
	cout << "Loading...60%" << endl;
	card hand2 = deck.dealCard();
	system("clear");
	cout << "Loading...75%" << endl;
	card hand3 = deck.dealCard();
	system("clear");
	cout << "Loading...90%" << endl;
	card hand4 = deck.dealCard();
	human person("?", hand1, hand2);
	bot computer(hand3, hand4);
	int gameCount;						//remember how many rouds has been played
	int pot;                            //the toltal bet from both players
	system("clear");
	cout << "Loading...100%" << endl;
	usleep(500000);
	switch(page)      //switch to different pages just for debugging
	{
///////////////////Game Over///////////////////////////
		case 99:
			PAGE99:
			int p99;
			do
			{
				system("clear");
				cout << endl;
				cout << endl;
				cout << endl;
				cout << "              Game Over!!!!" << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				usleep(700000);
				system("clear");
				cout << endl;
				cout << endl;
				cout << endl;
				cout << "              " << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				usleep(700000);
				system("clear");
				cout << endl;
				cout << endl;
				cout << endl;
				cout << "              Game Over!!!!" << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				usleep(700000);
				system("clear");
				cout << endl;
				cout << endl;
				cout << endl;
				cout << "             " << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				usleep(700000);
				system("clear");
				for(int i = 0; i < width+1; i++)
				{
					cout << "*";
				}
				cout << endl;
				cout << endl;
				cout << endl;
				cout << "              Game Over!!!!" << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				cout << "       Do you wish to play another hand?" << endl;
				cout << "              Yes (1)" << endl;
				cout << "              No  (99)" << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				for(int i = 0; i < width+1; i++)
				{
					cout << "*";
				}	
				cout << endl;
				cout << "Your input: ";
				cout << "Enter choice: ";
				cin >> p99;
				cin.clear();					//check input
				cin.ignore(10, '\n');					//check input
				if(p99 != 1 && p99 != 99)
				{
					cout << "try again!!" << endl;
					usleep(1000000);
				}
			} while(p99 != 1 && p99 != 99);					//check input

			if(p99 == 1)
			{
				goto START;
			}
			else
			{
				return true;
			}
			break;
//////////////////////////Winner Page////////////////////////
		case 6:
			PAGE6:
			int p6;		
			pot = person.getBet() + computer.getBet();
			do
			{
				system("clear");
				for(int i = 0; i < width+1; i++)
				{
					cout << "*";
				}
				cout << endl;
				cout << person.getName() << endl;
				cout << endl << "                pot : " << pot << endl;
				cout << "         You know who is the winner!!!!! " << endl;
				cout << endl;
				cout << "         Computer's cards are: ";
				computer.printHand();  //show all computer cards
				cout << endl;
				cout << "         Flops are: "  << flop1.getVS() + " "<< flop2.getVS() + " " << flop3.getVS() + " " << flop4.getVS() + " " << flop5.getVS() + " " << endl; //show all flops
				cout << endl;
				cout << "         Your cards are : ";
				person.printHand();   //show all your cards
				cout << endl;
				cout << endl;
				cout << "         play another hand (1)" << endl;
				cout << "         exit (99)" << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				for(int i = 0; i < width+1; i++)
				{
					cout << "*";
				}
				cout << endl;
				cout << "Your input: ";
				cin >> p6;
				cin.clear();
				cin.ignore(10, '\n');
				if(p6 != 1 && p6 != 99)
				{
					cout << "try again!!" << endl;
					usleep(1000000);
				}
			} while(p6 != 1 && p6 != 99);					//check input

			switch(p6)
			{
				case 1:
					goto START;
					break;
				
				case 99:
					return true;
					break;
			}
			break;

////////////////////Start/////////////////////////////
		case 1:
			PAGE1:
			gameCount = 0;
			int p1;
			do
			{
				system("clear");
				for(int i = 0; i < width+1; i++)
				{
					cout << "*";
				}
				cout << endl;
				cout << endl;
				cout << endl;
				cout << "                 Texas hold'em" << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				cout << "                start        (1)" << endl;
				cout << "                instruction  (2)" << endl;
				cout << "                exit         (99)" << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				for(int i = 0; i < width+1; i++)
				{
					cout << "*";
				}
				cout << endl;
				cout << "Your input: ";
				cin >> p1;
				cin.clear();
				cin.ignore(10, '\n');
				if(p1 != 1 && p1 != 2 && p1 != 99)
				{
					cout << "try again!!" << endl;
					usleep(1000000);
				}
			} while(p1 != 1 && p1 != 2 && p1 != 99);					//check input

			if(p1 == 1)
			{
				goto PAGE5;
			}
			else if(p1 ==2)
			{
				goto PAGE3;
			}
			else
			{
				return true;
			}
			break;
//////////////////Game Page////////////////////////
		case 2:
			PAGE2:
			int p2;	
			if(gameCount == 0)
			{
				computer.plBet(200);
			}
			else
			{
				computer.call(person.getLastBet());
			}
			pot = person.getBet() + computer.getBet();
			do
			{
				system("clear");
				cout << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				cout << "                   Round : " << gameCount+1 << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				usleep(1500000);
				system("clear");
				for(int i = 0; i < width+1; i++)
				{
					cout << "*";
				}
				cout << endl << person.getName() << endl;
				cout << "                                             Round : "<< gameCount+1 << endl;
				cout << "                  pot : " << pot << endl;
				cout << "         Your fund is : " << person.getFund() << endl;
				cout << "        Your total bet: " << person.getBet() << endl;
				switch(gameCount)
				{
					case 0:
						cout << "Flop : ? ? ? ? ?" << endl;
						break;
					case 1:
						cout << "Flop : " << flop1.getVS() << endl;
						break;
					case 2:
						cout << "Flop : " << flop1.getVS() << "," << flop2.getVS() << endl;
						break;
					case 3:
						cout << "Flop : " << flop1.getVS() << "," << flop2.getVS() << "," << flop3.getVS() << endl;
						break;
					case 4:
						cout << "Flop : " << flop1.getVS() << "," << flop2.getVS() << "," << flop3.getVS() << "," << flop4.getVS() << endl;
						break;
					case 5:
						cout << "Flop : " << flop1.getVS() << "," << flop2.getVS() << "," << flop3.getVS() << "," << flop4.getVS() << "," << flop5.getVS() << endl;
						break;
					default:
						goto PAGE6;
						break;
				}
				cout << " Computer's current bet: " << computer.getLastBet() << "  Computer's total bet: " << computer.getBet() << endl;
				cout << endl;
				cout << "         Your cards are : "; 
				person.printHand();
				cout << endl;
				cout << "              Call (1)" << endl;
				cout << "              Raise (2)" << endl;
				cout << "              All in (3)" << endl;
				cout << "              Fold (4)" << endl;
				cout << "              exit (99)" << endl;
				cout << endl;
				for(int i = 0; i < width+1; i++)
				{
					cout << "*";
				}
				cout << endl;
				cout << "Your input: ";
				cin >> p2;
				cin.clear();
				cin.ignore(10, '\n');
				if(p2 != 1 && p2 != 2 && p2 != 3 && p2 != 4 && p2 != 99)
				{
					cout << "try again!!" << endl;
					usleep(1000000);
				}
			} while(p2 != 1 && p2 != 2 && p2 != 3 && p2 != 4 && p2 != 99);					//check input

			switch(p2)
			{
				case 1:
					//function
					gameCount++;
					bool s;
					do
					{
						s = person.call(computer.getLastBet());
					}while(s != 1);					//check input
					goto PAGE2;
					break;
				case 2:
					//function
					gameCount++;
					goto PAGE4;
					break;
				case 3:
					//function
					gameCount++;
					if(person.allIn() == 1)
					{
						goto PAGE6;
					}
					else
					{
						goto PAGE99;
					}
					
				case 4:
					//function
					goto PAGE99;
					break;
				case 99:
					return true;
					break;
			}
			break;
////////////////////Instruction///////////////////
		case 3:
			PAGE3:
			int p3;
			do
			{
			system("clear");
				for(int i = 0; i < width+1; i++)
				{
					cout << "*";
				}
				cout << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				cout << "The Object. Like all gambling, the objective is to win money.\n With poker, you are trying to win the other players money."
				<< endl;
				cout << endl;
				cout << "             Home (1)" << endl;
				cout << endl;
				cout << endl;
				for(int i = 0; i < width+1; i++)
				{
					cout << "*";
				}
				cout << endl;
				cout << "Your input: ";
				cin >> p3;
				cin.clear();
				cin.ignore(10, '\n');					//check input
				if(p3 != 1)
				{
					cout << "try again!!" << endl;
					usleep(1000000);
				}
			}while(p3 != 1);
			goto PAGE1;
			break;
///////////////////////Raise input/////////////////////
		case 4:
		PAGE4:
		int p4;
		while( 1 )
		{
			system("clear");
			for(int i = 0; i < width+1; i++)
			{
				cout << "*";
			}
			cout << endl << person.getName() << endl;
			cout << "                                             Round : "<< gameCount << endl;
			cout << "                   pot : " << pot << endl;
			cout << "              Your fund: " << person.getFund() << endl;
			cout << "         Your total bet: " << person.getBet() << endl;

			cout << " Computer's current bet: " << computer.getLastBet() << "  Computer's total bet: " << computer.getBet() << endl;
			cout << endl;
			cout << endl;
			cout << "         How much would you like to raise?" << endl;
			cout << "         Please in put a integer "  << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			for(int i = 0; i < width+1; i++)
			{
				cout << "*";
			}
			cout << endl;
			cout << "Your input: ";
			cin >> p4;
			bool cin_err = cin.fail ();									//check input
			if( cin_err == 0 )
			{
				if(p4 < 2*computer.getLastBet() || p4 > person.getFund())
				{
					cout << "Can not raise for that amount!" << endl;
					goto ERROR;
				}
				else
				{
					person.raise(p4, computer.getLastBet());
					goto PAGE2;
				}
			}     
			ERROR:					//check input
			cin.clear ();					//check input
			cin.ignore (100, '\n');						//check input
			cout << "try again!!" << endl;
			usleep(1000000);
		}
		
		break;

//////////////////////////////INPUT NAME PAGE///////////////////
		case 5: 
			PAGE5:
			string p5;
			system("clear");
			for(int i = 0; i < width+1; i++)
			{
				cout << "*";
			}
			cout << endl;
			cout << endl;
			cout << endl;
			cout << "                 Please input your name" << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			for(int i = 0; i < width+1; i++)
			{
				cout << "*";
			}
			cout << endl;
			cout << "Enter name: ";
			cin >> p5;
			person = human(p5, hand1, hand2);
			goto PAGE2;
			break;
	}
	return false;
}


