#include <iostream>
using namespace std;

extern int sum_array(int array[], int n);  

int main()
{
        int array[5] = {4,5,6,7,8};
        cout << sum_array(array, 5) << endl;
        return 0;
}