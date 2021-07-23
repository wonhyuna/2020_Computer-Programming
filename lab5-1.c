#include <Stdio.h>

void aster(int side1, int side2);

void main()
{
	int side1, side2;
	printf("Enter sides: ");
	scanf_s("%d", &side1);
	scanf_s("%d", &side2);
	aster(side1, side2);
}

void aster(int side1, int side2)
{
	int i, j;
	for (i = 0; i < side1; i++)
	{
		for (j = 0; j < side2; j++)
		{
			printf("*");
		}
		printf("\n");
	}

}