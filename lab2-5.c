#include <stdio.h>

int main()
{
	char ch;
	int i;

	for (i = 0; i <= 127; i++)
	{
		printf("%c", i);
		if (i % 10 == 9) printf("\n");
	}
	return 0;
}