#include <iostream>
using namespace std;

void print_sevens(int *nums,int length)
{
	int check7 = 0;
	for(int i = 0; i < length; i++)
	{
		check7 = *nums % 7;
		if(check7 == 0)
		{
			cout << *nums << endl;
		}
		
		nums++;
	}
}