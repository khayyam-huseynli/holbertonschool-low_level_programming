#include "main.h"
#include <stddef.h>

/**
 * _strpbrk -  locates the first occurrence in the string
 *             s of any of the bytes in the string accept
 *
 * @s: initial segment (string)
 * @accept: characters to be searched
 *
 *Return: a pointer to the byte in s that matches one of
 *        the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *temp = accept;

	if (*s == '\0' || *accept == '\0')
		return (NULL);

	while (*s != '\0')
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}
		s++;
		accept = temp;
	}
	return (NULL);
}
