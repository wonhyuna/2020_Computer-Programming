#include <stdio.h>

int main()
{
	int time;
	double hour_rate, salary;

	while (1)
	{ 
		printf("Enter # of hours worked(-1 to end): ");
		scanf_s("%d", &time);

		if (time == -1)
			break;
		
		else
		{
			printf("Enter hourly rate of the worker($00.00):");
			scanf_s("%lf", &hour_rate);

			if (time<= 40)
			{
				salary = (time*hour_rate);
				printf("Salary is $%.2lf\n", salary);
			}
			else 
			{
				salary = (hour_rate*(time + 0.5*(time-40)));
				printf("Salary is $%.2lf\n", salary);
			}
		}
	}
	printf("프로그램을 끝냅니다.\n");

	return 0;
}