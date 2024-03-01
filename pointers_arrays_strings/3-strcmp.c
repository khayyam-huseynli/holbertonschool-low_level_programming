#include "main.h"

/**
 * _strcmp - function that compares two strings
 *            to the buffer pointed to by dest
 * @s1: string1 to be compared
 * @s2: string2 to be compared
 *
 *Return: retuns s1-s2 int
 */

int _strcmp(char *s1, char *s2)
{
	int res = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			res = *s1 - *s2;
			break;
		}

		s1++;
		s2++;
	}

	return (res);
}
