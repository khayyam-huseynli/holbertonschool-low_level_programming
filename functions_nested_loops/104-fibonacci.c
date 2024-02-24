#include <stdio.h>

/**
 * main - Entry point
 * Return: Returns 0 when successfull
 */

int main(void)
{
	int i;
	unsigned long f1 = 1;
	unsigned long f2 = 2;
	unsigned long fnext = f1 + f2;

	printf("%lu, %lu, ", f1, f2);

	for (i = 3; i <= 98; i++)
	{

		printf("%lu", fnext);

		if (i < 98)
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
