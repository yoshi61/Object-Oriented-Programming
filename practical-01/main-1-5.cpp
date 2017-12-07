#include <iostream>
using namespace std;

extern int count_even(int number); 

int main()
{
        int number = 10;
        cout << count_even(number) << endl;
        return 0;
}