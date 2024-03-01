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

	for (i = 0; i < n; i++)
	{
		if (src[0] == '\0')
		{
			dest[i] = '\0';
		}
		else if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
		else if (src[i] == '\0')
		{
			break;
		}
	}
	return (dest);
}
