#include <stdio.h>

void call_by_reference(int *n1, int *n2, int *sum, int *product);


int main()
{
	int n11, n12;
	int sum1=0;
	int product1=0;

	printf("Input two integers : ");
	scanf_s("%d %d", &n11, &n12);

	call_by_reference(&n11, &n12, &sum1, &product1);
	printf("Result: sum = %d ", sum1);
	printf("product = %d", product1);

}

void call_by_reference(int *n1, int *n2, int *sum, int *product)
{
	*sum = *n1 + *n2;
	*product = *n1 * *n2;
}