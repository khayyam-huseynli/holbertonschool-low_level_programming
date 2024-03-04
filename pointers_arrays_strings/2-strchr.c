#include "main.h"

/**
 * _strchr -  function that locates a character in a string
 *            to the buffer pointed to by dest
 * @s: string to do search
 * @c: character to be searched
 *
 *Return: retuns a pointer to the first occurrence of
 *        the character c in the string s, or NULL if
 *        the character is not found
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	return (s);
}
