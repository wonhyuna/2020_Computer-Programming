#include <stdio.h>

int main()
{
	int a;
	int i = 0;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &a);

	while (1)
	{


		if (a < 100000)
		{
			if (a % 10 == 9)
				i++;
			a /= 10;

			if (a == 0)
				break;
		}
		else
		{
			printf("���α׷��� �����մϴ�.");
			break;
		}
	}
	if (a < 100000)
		printf("\n9 ������ %d�̴�", i);

	return 0;
}