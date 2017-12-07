#include <iostream>
using namespace std;
int sumtwo(int array[], int secondarray[], int n)
{
    if(n < 1)
    {
    	return 0;
    }

    int sum = 0;
    int sum1 = 0;
    int sum2 = 0;

    for(int i = 0; i < n; i++)
    {
    	sum1 = sum1 + array[i];
        sum2 = sum2 + secondarray[i];
    }
    sum = sum1+sum2;
    return sum;
}