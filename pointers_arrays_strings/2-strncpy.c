#include "main.h"

/**
 * _strncpy - function that copies the n string from src,
 *            to the buffer pointed to by dest
 * @src: string to be copied
 * @dest: destination point in buffer
 * @n: number of characters to be copied
 *
 *Return: retuns pointer of destination
 */

char *_strncpy(char *dest, char *src, int n)
{

	int l = 0;
	int i = 0;

	while (src[l] != '\0')
	{
		l++; /* after while length of src */
	}

	while (i < n)
	{
		if (src[0] == '\0')
		{
			*(dest + i) = '\0';
		}
		else if (n <= l)
		{
			*(dest + i) = *(src + i);
		}

		i++;

	}

	if (l < n)
	{
		while (l < n)
		{
			*(dest + l) = '\0';
			l++;
		}
	}

	return (dest);
}
