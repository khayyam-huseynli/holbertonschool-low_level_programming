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

	while (src[l] != '\0')
	{

		if (src[0] == '\0')
		{
			*(dest + l) = '\0';
		}
		else
		{
			*(dest + l) = *(src + l);
		}
		
		l++; /* after while length of src */
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
