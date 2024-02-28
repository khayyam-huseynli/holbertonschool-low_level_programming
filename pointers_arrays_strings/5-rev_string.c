#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{

	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	/** after while loop i = strlen + 1 */

	char *start = s; /* points 1st character */
	char *end = s + i - 2; /* points last character */

	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
