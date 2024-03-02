#include "main.h"

/**
 * rot13 - Function that encodes a string using rot13.
 *
 * @str: string to be encoded
 *
 * Return: retuns pointer of string
 */

char *rot13(char *str)
{
	int i = 0;
	int k = 13;

	while (str[i] != '\0')
	{
		if (str[i] + 'a' + k > 26)
		{
			k = (str[i] - 'a' + k) % 26;
			str[i] = 'a' + k;
		}
		else
		{
			str[i] = str[i] + k;
		}
	}

	return (str);
}
