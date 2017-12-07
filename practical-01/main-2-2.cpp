#include <iostream>
using namespace std;

extern int maximum(int array[], int n); 

int main()
{
        int array[5] = {3, 1, -2, 0, 5};
        cout << maximum(array, 5) << endl;
        return 0;
}