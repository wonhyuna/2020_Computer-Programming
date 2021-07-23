#include <stdio.h>
int main()
{
	int arr[5][5];
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			arr[i][j] = (i+1)*(j+1)*(j+1);
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
}