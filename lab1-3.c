#include <stdio.h>
int main(void)
{
	int a, b, c, d, e;
	printf("하루 평균 주행거리를 입력하시오:");
	scanf_s("%d", &a);

	printf("갤런당 기름가격을 입력하시오:");
	scanf_s("%d", &b);
	
	printf("연비를 입력하시오:");
	scanf_s("%d", &c);

	printf("주차비를 입력하시오:");
	scanf_s("%d", &d);

	printf("톨비를 입력하시오:");
	scanf_s("%d", &e);

	printf("Driving Cost: %d", (a / c)*b + d + e);
}