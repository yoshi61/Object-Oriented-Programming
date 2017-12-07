#include <iostream>
using namespace std;

extern int maximum_sum(int *nums,int length);

int main()
{
	int array[10]={31, -41, 59, 26, -53, 58, 97, -93, -23, 84};
	int *ptr = &array[0];

	cout << maximum_sum(ptr, 10) << endl;

	return 0;
}
