#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src,
 *           including the terminating null byte (\0),
 *           to the buffer pointed to by dest
 * @src: string to be copied
 * @dest: destination point in buffer
 *
 *Return: retuns pointer of destination
 */

char *_strcpy(char *dest, char *src)
{

	int i = 0;
	int j = 0;
	/*char *ptr_dest;  points to destination array */

	while (src[i] != '\0')
	{
		i++;
	}

	/** after while loop i = strlen(src) */

	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}

	/*ptr_dest = dest;*/

	return (dest);
}
