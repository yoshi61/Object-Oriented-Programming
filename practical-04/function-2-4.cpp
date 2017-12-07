int diagonal(int array[4][4])
{
	int x = 0, result = 0;
	while(x < 4)
	{
		result += array[x][x];
		x++;
	}
return result;
}