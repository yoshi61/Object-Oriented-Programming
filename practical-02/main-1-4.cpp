#include <iostream>
#include <math.h>
using namespace std;

extern void print_scaled_matrix(int array[3][3],int scale);

int main(void)
{
	int scale = 3;
	int array[3][3] =  {
						{0,2,4},
						{3,4,8},
						{6,7,8}
					   };

	print_scaled_matrix(array, scale);
	return 0;

}
