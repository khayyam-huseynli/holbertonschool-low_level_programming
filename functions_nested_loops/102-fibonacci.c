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
	char comma = ',';
	char space = ' ';
	long int f1 = 1;
	long int f2 = 2;
	long int fnext = f1 + f2;

	printf("%ld, %ld, ", f1, f2);

	for (i = 3; i <= n; i++)
	{

		printf("%ld", fnext);

		if (i != n)
		{
			printf("%c", comma);
			printf("%c", space);
		}

		f1 = f2;
		f2 = fnext;
		fnext = f1 + f2;
	}
	_putchar('\n');
}
