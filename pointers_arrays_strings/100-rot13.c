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

	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') ||
			(str[i] >= 'A' && str[i] <= 'Z') &&
			(str[i] < 'n' || str[i] < 'N'))
		{
			str[i] = str[i] + 13;
		}
		else
		{
			str[i] = str[i] - 13;
		}

		i++;
	}

	return (str);
}
