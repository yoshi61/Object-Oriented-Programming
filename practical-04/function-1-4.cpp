#include <iostream>
using namespace std;


void cpyda(double *old_array,double *new_array,int length)
{

	for(int i = 0; i < 16; i++)
	{
		*new_array = *old_array;
		
		old_array++;
		new_array++;
	}
}