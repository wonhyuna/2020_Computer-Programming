#include <stdio.h>
int main()
{
	int binary, same, result = 0, count = 1;

	printf("2������ �Է��ϼ���.");
	scanf_s("%d", &binary);
	same = binary;
	while (same != 0)
	{
		if (same % 10)
			result += count;
		same /= 10;
		count *= 2;
	}
	printf("������ %d�� ������ %d�Դϴ�.\n", binary, result);
}