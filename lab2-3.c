#include <stdio.h>
int main()
{
	double fah, cel;


	while (1)
	{
		printf("������ �Է��ϼ���:");
		scanf_s("%lf", &cel);

		if (30 <= cel && cel <= 50)
		{
			fah = ((9.0) / (5.0))*cel + 32;
			printf("ȭ���µ� %.1lf�� �����µ��� %.1lf�Դϴ�.\n", fah, cel);

		}
		else
		{
			printf("���α׷��� �����ϴ�.\n");
			break;
		}
	}
}