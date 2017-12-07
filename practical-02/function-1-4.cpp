#include <iostream>
#include <math.h>
using namespace std;

void print_scaled_matrix(int array[3][3],int scale)
{
	for(int x = 0; x < 3; x++)
	{
		for(int y = 0; y < 3; y++)
		{
			array[x][y] *= scale;
			cout <<  array[x][y];
			if(y < 2)
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	
}