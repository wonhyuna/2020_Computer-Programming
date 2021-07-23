#include <stdio.h>
int main()
{
	int n;
	int i;
	for (n = 1; n <= 100; n++)
	{
		for (i = 2; i < n; i++)
		{
			if (n%i == 0)
			{
				break;
			}
		}
		if (i == n)
		{
			printf("%3d", i);
		}
	}
	printf("\n");
	return 0;
}