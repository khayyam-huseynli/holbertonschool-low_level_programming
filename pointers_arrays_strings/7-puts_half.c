#include "main.h"

/**
 * puts_half - function that prints half of a string, followed
 *             by a new line. The function should print the second
 *             half of the string. If the number of characters is odd,
 *             the function should print the last n characters of the
 *             string, where n = (length_of_the_string - 1) / 2
 *
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int i = 0;
	int j = 0;
	int n = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 != 0)
	{
		n = (i - 1) / 2;
	}
	else
	{
		n = i / 2;
	}

	for (j = n; j < i; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
