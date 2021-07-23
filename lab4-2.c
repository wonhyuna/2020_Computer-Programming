#include <stdio.h>
int main()
{
	char sen[1000];
	int i, j;

	printf("Input: ");
	gets(sen);

	for (i = 0; i < 1000; i++)
	{
		if (sen[i] == 'a' || sen[i] == 'e' || sen[i] == 'i' || sen[i] == 'o' || sen[i] == 'u' || sen[i] == 'A' || sen[i] == 'E' || sen[i] == 'I' || sen[i] == 'O' || sen[i] == 'U')
			putchar(sen[i]);
	}
	printf("\n");

	return 0;
}