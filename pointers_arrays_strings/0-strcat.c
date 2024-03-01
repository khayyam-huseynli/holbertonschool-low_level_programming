#include "main.h"

/**
 * _strcat - function that concatenates two strings,
 *           This function appends the src string to
 *           the dest string, overwriting the terminating
 *           null byte (\0) at the end of dest, and
 *           then adds a terminating null byte
 * @src: string to be concatenated
 * @dest: destination point in buffer
 *
 *Return: retuns pointer of destination
 */

char *_strcat(char *dest, char *src)
{

	int i = 0;
	int j = 0;
	int k = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	/** after while loop i = strlen(src) */

	while (dest[j] != '\0')
	{
		j++;
	}

	/** after while loop j = strlen(dest) */

	for (k = 0; k <= i; k++)
	{
		dest[j + k] = src[k];
	}

	return (dest);
}
