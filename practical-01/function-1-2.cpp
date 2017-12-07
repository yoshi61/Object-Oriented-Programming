#include <iostream>
using namespace std;
double average(int array[], int n)
{
    if(n <= 0)
    {
    	return 0.0;
    }

    double average = 0.0;
    double num = n;
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
    	sum = sum + array[i];
    }
    average = sum/num;
    return average;
}