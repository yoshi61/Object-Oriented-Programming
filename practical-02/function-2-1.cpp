#include <iostream>
#include <math.h>
#include <stdlib.h>   
using namespace std;

void Cbinary(int decimal_number)
{

    int binary;

    if (decimal_number <= 1)
    {

        cout << decimal_number;
        return;

    }

    binary = decimal_number % 2;

    Cbinary(decimal_number / 2);

    cout << binary;


}


void print_as_binary(string decimal_number)
{
	int num = atoi(decimal_number.c_str());
	Cbinary(num);

    cout << endl;
}