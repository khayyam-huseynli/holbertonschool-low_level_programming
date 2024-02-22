#include "main.h"

/**
 * print_last_digit - Function that returns the last digit of a number
 * @n: nuber to be checked
 * Return: Always returns value of last digit
 */

int print_last_digit(int n)
{

	int mod = 0;

	mod = n % 10;

	if (mod < 0)
	{
		mod = mod * -1;
	}

	_putchar(mod + '0');

	return (mod);
}
