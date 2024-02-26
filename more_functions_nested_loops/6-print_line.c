#include "main.h"

/**
 * print_line -   Function that draws a straight line in the terminal
 *                The line should end with a \n
 *                If n is 0 or less, the function should only print \n
 * @n: is the number of times the character _ should be printed
 */

void print_line(int n)
{
	int i = 0;

	if (n <=  0)
	{
		_putchar ('\n');
	}
	else
	{
		for (i = 0; i <= n ; i++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}
