#include <stdio.h>

int main()
{
	int a = 10;
	int b = 20;

	int *p1=&a;
	int *p2=&b;

	p1 = &b;
	p2 = &a;

	printf("a�� ��: %d\n", a);
	printf("b�� ��: %d\n", b);
	printf("p1�� ��: %p\n", p1);
	printf("p2�� ��: %p\n", p2);


	return 0;
}