#include <stdio.h>
int main(void)
{
	int a, b, c, d, e;
	printf("�Ϸ� ��� ����Ÿ��� �Է��Ͻÿ�:");
	scanf_s("%d", &a);

	printf("������ �⸧������ �Է��Ͻÿ�:");
	scanf_s("%d", &b);
	
	printf("���� �Է��Ͻÿ�:");
	scanf_s("%d", &c);

	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &d);

	printf("��� �Է��Ͻÿ�:");
	scanf_s("%d", &e);

	printf("Driving Cost: %d", (a / c)*b + d + e);
}