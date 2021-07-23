#include <stdio.h>

int main()
{
	int a = 10;
	int b = 20;

	int *p1=&a;
	int *p2=&b;

	p1 = &b;
	p2 = &a;

	printf("a의 값: %d\n", a);
	printf("b의 값: %d\n", b);
	printf("p1의 값: %p\n", p1);
	printf("p2의 값: %p\n", p2);


	return 0;
}