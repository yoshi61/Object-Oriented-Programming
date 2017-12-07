#include <iostream>
using namespace std;

extern double average(int array[], int n);  

int main()
{
        int array[5] = {4,5,5,5,5};
        cout << average(array, 5) << endl;
        return 0;
}