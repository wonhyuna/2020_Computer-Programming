#include <stdio.h>
int main()
{
	double fah, cel;


	while (1)
	{
		printf("섭씨를 입력하세요:");
		scanf_s("%lf", &cel);

		if (30 <= cel && cel <= 50)
		{
			fah = ((9.0) / (5.0))*cel + 32;
			printf("화씨온도 %.1lf의 섭씨온도는 %.1lf입니다.\n", fah, cel);

		}
		else
		{
			printf("프로그램을 끝냅니다.\n");
			break;
		}
	}
}