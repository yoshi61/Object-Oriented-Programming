#include <iostream>
#include <math.h>
using namespace std;

extern void count_numbers(int array[4][4]);

int main(void)
{
	int array[4][4] =  {
						{0,1,2,4},
						{3,4,5,8},
						{6,7,8,5},
						{1,2,3,4}
					   };

count_numbers(array);
return 0;
}
