#include "main.h"

/**
 * _abs - Function that computes the absolute value of an integer
 * @n: integer nuber to be checked
 * Return: Always returns 0
 */

int _abs(int n)
{

	if (n < 0)
	{
		return (n * -1);
	}

	else
	{
		return (n);
	}

	_putchar(n);

	return (0);
}
