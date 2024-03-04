#include "main.h"
#include <stddef.h>

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
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
		return (s);
	else
		return (NULL);
}
