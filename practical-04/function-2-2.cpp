#include <iostream>
using namespace std;


int maximum_sum(int *nums,int length)
{

	//check if all the numbers are negative
	int checkNeg = 0;
	for(int s = 0; s < length; s++)
	{
		if(*(nums + s) >= 0)
		{
			checkNeg += 1;
		}
	}
	if(checkNeg == 0)
	{
		return 0;
	}

	int result = *nums;
	int vholder = 0;
	for(int i = 0; i < length; i++)
	{
		vholder = *(nums + i);
		if(i != length-1 )
		{
			for(int j = i+1; j < length; j++)
			{
				vholder += *(nums + j);
				if(vholder > result)
				{
					result = vholder;
				}
			}
		}
	}
	return result;
}