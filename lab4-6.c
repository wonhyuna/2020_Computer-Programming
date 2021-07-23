#include <stdio.h>
int main()
{
	int age[10];
	int max, sum=0;
	int i, j;

	for (j = 0; j < 3; j++)
	{
		printf("나이들을 입력하시오:");
		for (i = 0; i < 10; i++)
		{
			scanf_s("%d", &age[i]);
		}

		max = age[0];

		for (i = 0; i < 10; i++)
		{
			if (age[i] > max)
			{
				max = age[i];
				sum = 1;
				continue;
			}
			if (age[i] == max)
			{
				sum = sum + 1;
				continue;
			}
		}
		printf("The number of oldest students: %d\n\n", sum);
	}
	return 0;
}