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

	int i = 0;
	int j = 0;

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	while (j < n)
	{
		*(dest + j) = *(src + j);
		j++;
	}

	return (dest);
}
