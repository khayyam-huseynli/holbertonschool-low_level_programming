#include "main.h"

/**
 * print_diagonal  - Function that draws a diagonal line in the terminal
 *                   The diogonal should end with a \n
 *                   If n is 0 or less, the function should only print \n
 * @n: is the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int i = 0;

	if (n <=  0)
	{
		_putchar ('\n');
	}
	else
	{
		for (i = 0; i < n - 1; i++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
}
