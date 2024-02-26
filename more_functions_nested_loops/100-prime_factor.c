#include "main.h"

/**
 * main -   Function that finds and prints the largest prime
 *          factor of the number 612852475143, followed by a new line.
 * Return: always returns 0 when successfull
 */

#include <stdio.h>

int main(void)
{
	int i = 3;
	long n = 612852475143;

	while (n % 2 == 0)
	{
		n = n / 2;
	}

	for (i = 3; i * i <= n; i = i + 2)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}

	printf("%d\n", n);

	return (0);
}
