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

	/** after while loop i = strlen + 1 */

	char *start = *s; /* points 1st character */
	char *end = *s + i; /* points last character */

	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}

	_putchar('\n');
}
