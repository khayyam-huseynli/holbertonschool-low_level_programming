#include "main.h"

/**
 *  factorial- a function that  returns the the
 *             factorial of a given number
 *
 * @n: given number to be calculated
 *
 * Return: returns factorial of given number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
