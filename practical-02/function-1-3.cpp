#include <iostream>
#include <math.h>
using namespace std;

void count_numbers(int array[4][4])
{
	int zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0;
	int element;
	for(int x = 0; x < 4; x++)
	{
		for(int y = 0; y < 4; y++)
		{
			element = array[x][y];
			switch(element)
			{
				case 0:
					zero++;
					break;
				case 1:
					one++;
					break;
				case 2:
					two++;
					break;
				case 3:
					three++;
					break;
				case 4:
					four++;
					break;
				case 5:
					five++;
					break;
				case 6:
					six++;
					break;
				case 7:
					seven++;
					break;
				case 8:
					eight++;
					break;
				case 9:
					nine++;
					break;

			}
		}
	}
	cout << "0:"<< zero << ";1:" << one << ";2:" << two << ";3:" << three << ";4:" << four 
	<< ";5:" << five << ";6:" << six << ";7:" << seven << ";8:" << eight << ";9:" << nine << ";" << endl;
	
}