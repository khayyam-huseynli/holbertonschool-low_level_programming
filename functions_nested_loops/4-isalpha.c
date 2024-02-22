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
	int count = 0;

	char lower_alphabet = 'a';
	char upper_alphabet = 'A';

	while (lower_alphabet <= 'z')
	{

		putchar(lower_alphabet);
		lower_alphabet++;
		count++;
	}

	while (upper_alphabet <= 'Z')
	{

		putchar(upper_alphabet);
		upper_alphabet++;
		count++;
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
