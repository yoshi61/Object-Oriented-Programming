#include <iostream>
using namespace std;

extern void twofivenine(int array[], int n); 

int main()
{
        int array[10] = {2,5,9,2,2,5,9,9,9,9};
        twofivenine(array, 10);
        return 0;
}