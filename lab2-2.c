#include <stdio.h>

int main()
{
	int a;
	int i = 0;

	printf("정수를 입력하시오 : ");
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
			printf("프로그램을 종료합니다.");
			break;
		}
	}
	if (a < 100000)
		printf("\n9 개수는 %d이다", i);

	return 0;
}