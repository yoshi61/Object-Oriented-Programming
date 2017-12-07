#include <iostream>
#include <math.h>
using namespace std;

extern int binary_to_number(int binary_digits[], int number_of_digits);

int main(void)
{
	int array[8] = {0,0,1,0,0,1,1,1};
cout << binary_to_number(array, 8) << endl;

}
