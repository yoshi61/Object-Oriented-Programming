#include <iostream>
#include <math.h>
using namespace std;

int binary_to_number(int binary_digits[], int number_of_digits)
{
	int num = 0;
	for(int i = 0 ; i < number_of_digits; i++)
	{
		num = (binary_digits[number_of_digits - 1 - i]*pow(2, i)) + num;
	}
	return num;
}