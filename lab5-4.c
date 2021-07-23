#include <stdio.h>

int sum(int x);

void main()
{
	int n, result;
	printf("Enter a number between 1 and 9999: ");
	scanf_s("%d", &n);
	printf("\n");
	printf("The sum of the digits of the number %d is %d", n, sum(n));
}

int sum(int x)
{
	int plus = 0;
	while (x != 0)
	{
		plus = plus + x % 10;
		x = x / 10;
	}
	return plus;
}