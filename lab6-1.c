#include <stdio.h>

int main()
{
	char a = 'a';
	int b = 10;
	double c = 3.14;

	char *p1;
	int *p2;
	double *p3;

	p1 = &a;
	p2 = &b;
	p3 = &c;

	*p1 = *p1 + 1;
	*p2 = *p2 + 1;
	*p3 = *p3 + 1;

	printf("a�� ��: %c\n", a);
	printf("b�� ��: %d\n", b);
	printf("c�� ��: %f\n", c);

	printf("p1�� ��: %p\n", p1);
	printf("p2�� ��: %p\n", p2);
	printf("p3�� ��: %p\n", p3);

	return 0;
}