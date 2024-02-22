#include "main.h"

/**
 * _islower - Function that checks for lowercase character
 *
 * @c: The character to be checked
 *
 * Return: returns 1 if character is lowercase, 0 otherwise
 *
 */

int _islower(int c)
{
	int i;
	char letters[] = "abcdefghijklmnopqrstuvwxyz";

	for (i =  0; i < 26; i++)
	{

		if (c == letters[i])
		{
			return (1);
		}
		else
		{
			return (0);
		}

	}
}
