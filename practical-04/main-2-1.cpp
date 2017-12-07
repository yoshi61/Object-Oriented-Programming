#include <iostream>
using namespace std;

extern void print_sevens(int *nums,int length);

int main()
{
	int array[10]={1,2,3,4,5,6,7,8,9,14};
	int *ptr = &array[0];

	print_sevens(ptr, 10);

	return 0;
}
