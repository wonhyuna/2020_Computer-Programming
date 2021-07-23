#include<stdio.h>

int main() 
{
	char names[10][20], grades[10], GPA[10], input;
	int i, j, k;
	
		for (i = 0; i < 10; i++)
		{
			printf("Student %d name: ", i);
			j = 0;
			while (1)
			{
				input = getchar();
				if (input != '\n') names[i][j] = input;
				else
				{
					names[i][j] = '\0';
					break;
				}
				j++;
			}
			printf("Student %d grade: ", i);

			while (1)
			{
				input = getchar();
				if (input != '\n') grades[i] = input;
				else break;
				j++;
			}
			switch (grades[i])
			{
			case 'A':
			case 'a':
				GPA[i] = 4;
				break;
			case 'B':
			case 'b':
				GPA[i] = 3;
				break;
			case 'C':
			case 'c':
				GPA[i] = 2;
				break;
			case 'D':
			case 'd':
				GPA[i] = 1;
				break;
			case 'F':
			case 'f':
				GPA[i] = 0;
				break;

			}
		}
		for (i = 0; i < 10; i++)
		{
			printf("Student %d name: %s, grade: %c, GPA: %lf\n",i,names[i],grades[i],(double)GPA[i]);
		}

	return 0;
}