#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 *           including the terminating null byte (\0),
 *           to the buffer pointed to by dest
 * @s: string to be converted
 *
 *Return: retuns integer from string
 */

int _atoi(char *s)
{

	int i = 0;
	int sign = 1;
	int res = 0;

	while (s[i] < '0' || s[i] > '9')
	{
		i++;
	}
	if (s[i - 1] == '-')
	{
		sign = -1;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		res = 10 * res + (s[i++] - '0');
	}

	return (res * sign);
}
