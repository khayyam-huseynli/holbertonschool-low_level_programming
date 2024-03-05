#include "main.h"
#include <stddef.h>

/**
 * _strspn -  function that gets the length
 *            of a prefix substring
 * @s: initial segment (string)
 * @accept: characters to be counted
 *
 *Return: number of bytes in the initial segment
 *        of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	if (*s == '\0' || *accept == '\0')
		return (0);

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				count++;
			}
			accept++;
		}
		s++;
	}
	return (count);
}
