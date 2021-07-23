#include <stdio.h>
int main()
{
	int binary, same, result = 0, count = 1;

	printf("2진수를 입력하세요.");
	scanf_s("%d", &binary);
	same = binary;
	while (same != 0)
	{
		if (same % 10)
			result += count;
		same /= 10;
		count *= 2;
	}
	printf("이진수 %d는 십진수 %d입니다.\n", binary, result);
}