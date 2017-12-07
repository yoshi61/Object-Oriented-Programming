#include <iostream>
using namespace std;

extern int count(int array[], int n, int number);  

int main()
{
        int array[10] = {4,5,6,7,8,4,4,4,4,5};
        cout << count(array, 10, 5) << endl;
        return 0;
}