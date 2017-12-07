#include <iostream>
using namespace std;

extern int sumtwo(int array[], int secondarray[], int n);  

int main()
{
        int array1[5] = {4,5,6,7,8};
        int array2[5] = {4,2,8,4,7};
        cout << sumtwo(array1, array2, 5) << endl;
        return 0;
}