#include "main.h"

/**
 * _strlen_recursion - a function that  returns the length of
 *                     a string in reverse
 * @s: string to be calculated
 *
 * Return: returns length of string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}

	i++;
	return (i + _strlen_recursion(s + 1));
}
