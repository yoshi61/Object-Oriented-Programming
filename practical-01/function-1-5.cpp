using namespace std;
int count_even(int number)
{
    if(number < 1)
    {
    	return 0;
    }
    int even = 0;
    for(int i = 1; i < number + 1; i++)
    {
        if(i % 2 == 0)
        {
            even++;
        }
    }
    return even;
}