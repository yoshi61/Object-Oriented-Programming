#include <iostream>
#include <time.h>
#include <unistd.h>

using namespace std;

extern bool game(int width);

const int width = 70;
bool gameOver;
void setup()
	{
		gameOver = false;
	}
//main function keeps the game running till gameOver = ture
int main()
{	
	setup();
	while(!gameOver)
	{
		system("clear");
		gameOver = game(width);

		usleep(300000);
	}
	
	return 0;
}