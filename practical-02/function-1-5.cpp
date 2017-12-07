#include <iostream>
#include <math.h>
using namespace std;

void print_summed_matrices(int array1[3][3],int array2[3][3])
{
	for(int x = 0; x < 3; x++)
	{
		for(int y = 0; y < 3; y++)
		{
			array1[x][y] += array2[x][y];
			cout << array1[x][y];
			if(y < 2)
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	
}