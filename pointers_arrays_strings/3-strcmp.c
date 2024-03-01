#include "main.h"

/**
 * _strcmp - function that compares two strings
 *            to the buffer pointed to by dest
 * @s1: string1 to be compared
 * @s2: string2 to be compared
 *
 *Return: retuns s1-s2 int
 */

int _strcmp(char *s1, char *s2)
{

	int i = 0;
	int j = 0;
	int res1 = 0;
	int res2 = 0;

	while (s1[i] != '\0')
	{
		res1 += s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		res2 += s2[j];
		j++;
	}

	return (res1 - res2);
}
