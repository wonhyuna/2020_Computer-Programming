#include <stdio.h>
int main(void)
{
	int a, b, c;

	scanf_s("%d", &a);
	c = a;
	b = a / 10000;
	c = a % 10000;
	printf("%d ", b);

	b = c / 1000;
	c = c % 1000;
	printf("%d ", b);

	b = c / 100;
	c = c % 100;
	printf("%d ", b);

	b = c / 10;
	c = c % 10;
	printf("%d ", b);

	printf("%d\n", c);

	return 0;
}