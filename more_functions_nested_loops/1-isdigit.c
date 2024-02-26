#include "main.h"

/**
 * _isupper - function that checks for digit
 * @c: character to be checked
 * Return: returns 1 if c is digit, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
