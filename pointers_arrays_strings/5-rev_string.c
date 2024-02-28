#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{

	int i = 0;
	char *start; /* points 1st character */
	char *end; /* points last character */

	while (s[i] != '\0')
	{
		i++;
	}

	/** after while loop i = strlen + 1 */

	start = s;
	end = s + i - 1;

	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
