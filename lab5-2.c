#include <stdio.h>

void character(int x, int y, char fillcharacter);

void main()
{
	int x, y;
	char fillcharacter;
	printf("Enter a character to fill the rectangle: ");
	scanf_s("%c", &fillcharacter);
	printf("\n");

	printf("Enter sides: ");
	scanf_s("%d", &x);
	scanf_s("%d", &y);

	character(x, y, fillcharacter);
}

void character(int x, int y, char fillcharacter)
{
	int i, j;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%c ", fillcharacter);
		}
		printf("\n");
	}
}