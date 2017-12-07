int identity(int array[10][10])
{
	for(int x = 0; x < 10; x++)
	{
		for(int y = 0; y < 10; y++)
		{
			if(x == y)
			{
				if(array[x][y] != 1)
				{
					return 0;
				}
			}
			else
			{
				if(array[x][y] != 0)
				{
					return 0;
				}
			}
		}
	}
	return 1;
}