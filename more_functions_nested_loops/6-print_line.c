#include "main.h"

/**
 * print_line -   Function that draws a straight line in the terminal
 *                The line should end with a \n
 *                If n is 0 or less, the function should only print \n
 * @n: is the number of times the character _ should be printed
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n ; i++)
	{
		if (n <=  0)
		{
			_putchar ('\n');
			break;
		}
		else if (i != n)
		{
			_putchar('_');
		}
		else
		{
			_putchar('\n');
		}
	}
}
