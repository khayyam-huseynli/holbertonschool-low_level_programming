#include "main.h"

/**
 * _print_rev_recursion -  a function that prints a string,
 *                         in reverse
 * @s: string to be printed
 *
 */

void _print_rev_recursion(char *s)
{
	if (*(s + 1) == '\0')
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(++s);
	_putchar(*s);
}