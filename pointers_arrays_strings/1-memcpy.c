#include "main.h"

/**
 * _memcpy - function that copies copies memory area
 *           from src,to memory area pointed to by dest
 * @src: memory area to be copied
 * @dest: destination memory area
 * @n: number of bytes to be copied
 *
 *Return: retuns pointer of destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int l = 0;

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	while (src[l] != '\0')
	{
		l++;
	}

	if (n > l)
	{
		n = l;
	}

	while (j < n)
	{
		if (src[0] == '\0')
		{
			break;
		}

		*(dest + j) = *(src + j);
		j++;
	}

	return (dest);
}
