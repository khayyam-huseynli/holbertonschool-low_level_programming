#include <stdio.h>

/**
 * main - Entry point
 * Return: Returns 0 when successfull
 */

int main(void)
{
	int i;
	long int f1 = 1;
	long int f2 = 2;
	long int fnext = f1 + f2;

	printf("%ld, %ld, ", f1, f2);

	for (i = 3; i <= 50; i++)
	{

		printf("%ld", fnext);

		if (i < 50)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}

		f1 = f2;
		f2 = fnext;
		fnext = f1 + f2;
	}
	return (0);
}
