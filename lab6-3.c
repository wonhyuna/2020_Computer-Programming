#include <stdio.h>
void call_by_value(int num);
void call_by_reference(int *num);
int main()
{
	int num1;
	int *pnum;
	pnum = &num1;
	printf("The difference between (call by reference) and (call by value)\n");
	printf("Input an integer : ");
	scanf_s("%d", &num1);
	printf("Before the call_by_value function: \n ");
	printf("value: %d, Address: %p\n", num1, pnum);

	call_by_value(num1);

	printf("After the call_by_value function :\n");
	printf("value: %d, Address: %p\n", num1, pnum);

	printf("\n");

	printf("Before the call_by_value function: \n ");
	printf("value: %d, Address: %p\n", num1, pnum);

	call_by_reference(pnum);

	printf("After the call_by_value function :\n");
	printf("value: %d, Address: %p\n", num1, pnum);


	return 0;
}
void call_by_value(int num)
{
	num = num + 10;

	printf("In the call_by_value function:\n");
	printf("value: %d, Address: %p\n", num, &num);

}
void call_by_reference(int *num)
{
	*num = *num + 10;

	printf("In the call_by_reference function:\n");
	printf("value: %d, Address: %p\n", *num, num);
}