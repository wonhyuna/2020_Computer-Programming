#include <Stdio.h>
#include <string.h>
int main()
{
	int i;
	char line[81];

	printf("received string: ");
	i = 0;
	while ((line[i] = getchar()) != '\n')
		i++;
	i--;
	printf("reversed string: ");
	while (i > -1)
	{
		putchar(line[i]);
		i--;
	}
	return 0;
}