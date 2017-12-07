#include <iostream>
#include <math.h>
using namespace std;

extern int identity(int array[10][10]);

int main(void)
{
	int array[10][10] ={
							{1,0,0,0,0,0,0,0,0,0},
							{0,1,0,0,0,0,0,0,0,0},
							{0,0,1,0,0,0,0,0,0,0},
							{0,0,0,1,0,0,0,0,0,0},
							{0,0,0,0,1,0,0,0,0,0},
							{0,0,0,0,0,1,0,0,0,0},
							{0,0,0,0,0,0,1,0,0,0},
							{0,0,0,0,0,0,0,1,0,0},
							{0,0,0,0,0,0,0,0,1,0},
							{0,0,0,0,0,0,0,0,0,1}
							
						};

cout << identity(array)<< endl;
return 0;
}
