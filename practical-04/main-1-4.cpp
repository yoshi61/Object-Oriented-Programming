#include <iostream>

using namespace std;

extern void cpyda(double *old_array,double *new_array,int length);

int main()
{
	int length = 4;
	double array[4][4] =	{	{3.54,3.7,1.89,9.6},
								{2.65,3.8,3.67,3.6},
								{3.75,3.90,6.9,9.6},
								{2.53,2.98,3.8,4.5}
						 	};
	double *old_array = &array[0][0];

	double *new_array = new double[4];

	cpyda(old_array, new_array,4);

	

	return 0;
}
