#include "main.h"

/**
 * _strncat - function that concatenates two strings,
 *            This function appends at most n bytes from src to
 *            the dest string, overwriting the terminating
 *            null byte (\0) at the end of dest, and
 *            then adds a terminating null byte
 * @src: string to be concatenated
 * @dest: destination point in buffer
 * @n: number of characters to be concatenated
 *Return: retuns pointer of destination
 */

char *_strncat(char *dest, char *src, int n)
{

	int j = 0;
	int k = 0;

	while (dest[j] != '\0')
	{
		j++;
	}

	/** after while loop j = strlen(dest) */

	for (k = 0; k < n; k++)
	{
		dest[j + k] = src[k];
		if (src[k] == '\0')
		{
			break;
		}
	}

	return (dest);
}
