#include <stdio.h>

int main(void)
{
	int hour, min, sec;
	printf("�ʸ� �Է��Ͻÿ�:");
	scanf_s("%d", &sec);

	min = sec / 60;
	hour = min / 60;
	sec = sec % 60;
	min = min % 60;

	printf("%d" ":" "%d" ":" "%d", hour, min, sec);

	return 0;
	
}