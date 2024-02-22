#include "main.h"

/**
 * print_last_digit - Function that returns the last digit of a number
 * @n: number nuber to be checked
 * Return: Always returns 0
 */

int print_last_digit(int n)
{

	int mod = 0;

	mod = n % 10;

	if (mod < 0)
	{
		mod = mod * -1;
	}

	return (mod);
}
