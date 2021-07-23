#include <stdio.h>
#include <math.h>

void roots(int a, int b, int c);

void main()
{
	int a, b, c;
	printf("The coefficients of a Quadratic Equation ax^2+bx+c=0 are a, b and c.\n");
	printf("Enter values of a, b and c.\n");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	roots(a, b, c);

}

void roots(int a, int b, int c)
{
	double dis, x1, x2;
	dis = pow(b,2) - (4.0 * a*c);
	x1 = (-b + sqrt(dis)) / (2.0*a*c);
	x2 = (-b - sqrt(dis)) / (2.0*a*c);
	if (dis > 0)
	{
		printf("\nTwo real and different roots.\n");
		printf("Roots are %lf and %lf", x1, x2);
	}
	else if (dis == 0)
	{
		printf("\nTwo real and equal roots.\n");
		printf("Roots are %lf and %lf", x1, x2);
	}
	else 
		printf("\n Imaginary roots.");

}