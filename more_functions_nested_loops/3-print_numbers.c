#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9,
 *                 followed by a new line
 */

void print_numbers(void)
{
	int d = 0;

	while (d <= 9)
	{
		_putchar ('0' + d);
		d++;
	}
	_putchar('\n');
}
