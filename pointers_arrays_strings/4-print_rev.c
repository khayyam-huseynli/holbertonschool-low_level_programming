#include "main.h"

/**
 * print_rev - function that prints a string, in reverse,
 *             followed by a new line.
 * @s: string to be reversed
 */

void print_rev(char *s)
{

	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	int j;

	j = i;

	while (s[j] != '\0')
	{
		_putchar(s[j]);
		i--;
	}

	_putchar('\n');
}
