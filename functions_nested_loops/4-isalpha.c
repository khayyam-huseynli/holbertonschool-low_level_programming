#include "main.h"

/**
 * _isalpha - Function that checks for lowercase character
 * @c: The character to be checked
 * Return: returns 1 if character is lowercase, 0 otherwise
 */

int _isalpha(int c)
{
	int i;
	int count = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			count++;
			break;
		}

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			count++;
			break;
		}

	if (count > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
