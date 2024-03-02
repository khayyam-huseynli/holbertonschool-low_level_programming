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
	int j = 0;
	char l[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char r[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (str[i] != '\0')
	{
		j = 0;
		while (l[j] != '\0')
		{
			if (str[i] == l[j])
			{
				str[i] = r[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
