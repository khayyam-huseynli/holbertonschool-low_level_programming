#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Return: Returns 0 when successfull
 */

int main(void)
{
	fibonacci(50);
	return (0);
}

/**
 * fibonacci - Function that prints  the first 50 Fibonacci numbers,
 *		       starting with 1 and 2, followed by a new line.
 * @n: nuber to be added
 */

void fibonacci(int n)
{
	int i;
	long int f1 = 1;
	long int f2 = 2;
	long int fnext = f1 + f2;

	printf("%d, %d, ", f1, f2);

	for (i = 3; i <= n; i++)
	{

		printf("%d", fnext);

		if (i != n)
		{
			_putchar(',');
			_putchar(' ');
		}

		f1 = f2;
		f2 = fnext;
		fnext = f1 + f2;
	}
	_putchar('\n');
}
