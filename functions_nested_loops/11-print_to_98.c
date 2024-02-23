#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Function that prints all natural numbers
 *               from n to 98, followed by a new line
 * @n: natural number
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = 1; i <= 98; i++)
		{
			printf("%d, \n", i);
		}
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		for (i = n; i <= 98; i--)
		{
			printf("%d, \n", i);
		}
	}

}
