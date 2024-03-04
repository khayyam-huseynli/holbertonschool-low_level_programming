#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 *            This function function fills the first n bytes of the
 *            memory area pointed to by s with the constant byte b
 * @s: memory area to be filled
 * @b: bytes to be filled to memory
 * @n: number of characters to be filled
 *Return: retuns pointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
		if (s[i] == '\0')
		{
			break;
		}
	}

	return (s);
}
