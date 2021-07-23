#include <stdio.h>
int main()
{
	int table[20][10], count = 0;
	int i, j;
	for (i = 0; i < 20; i++)
	{
		for (j = 0; j < 10; j++)
		{
			table[i][j] = count;
			count = count + 2;
			printf("table[%d][%d]=%d\n", i, j, table[i][j]);
		}
	}
	return 0;
}