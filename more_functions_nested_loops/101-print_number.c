#include "main.h"

/**
 * print_number - Function that prints an integer
 * @n: number to be printed
 */


void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
	}

	if (n / 10)
	{
		print_number(n / 10);
	}

	if (n < 0)
	{
		_putchar(-1 * (n % 10) + '0');
	}
	else
	{
		_putchar(n % 10 + '0');
	}
}
