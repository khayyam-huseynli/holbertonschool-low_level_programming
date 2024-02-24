#include <stdio.h>

/**
 * main - Entry point
 * Return: Returns 0 when successfull
 */

int main(void)
{
	long int f1 = 1;
	long int f2 = 2;
	long int fnext = f1 + f2;
	long long int sum = 2;

	while (fnext <= 4000000)
	{
		f1 = f2;
		f2 = fnext;
		fnext = f1 + f2;

		if (fnext % 2 == 0)
		{
			sum = sum + fnext;
		}
	}

	printf("%lli\n", sum);
	return (0);
}
