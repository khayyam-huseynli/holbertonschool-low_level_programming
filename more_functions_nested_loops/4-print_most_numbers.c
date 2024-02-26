#include "main.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9,
 *                      exept 2 and 4 followed by a new line
 */

void print_most_numbers(void)
{
	int d = 0;

	while (d <= 9)
	{
		if (d != 2 && d != 4)
		{
			_putchar ('0' + d);
			d++;
		}
	}
	_putchar('\n');
}
