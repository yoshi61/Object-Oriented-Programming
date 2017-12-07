#include <iostream>
using namespace std;

extern void cpyia(int old_array[],int new_array[],int length);

int main()
{
	int array1[10]={1,2,3,4,5,6,7,8,9,10};
	int array2[10];

	cpyia(array1, array2, 10);

	return 0;
}
