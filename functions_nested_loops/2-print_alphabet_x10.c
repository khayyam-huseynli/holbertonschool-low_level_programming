#include "main.h"

/**
 * print_alphabet_x10 - Function that prints 10 times the alphabet,
 *                      in lowercase, followed by a new line
 */

void print_alphabet_x10(void)
{
	int i;

	for (i =  0; i < 10; i++)
	{
		char alphabet = 'a';

		while (alphabet <= 'z')
		{

			_putchar(alphabet);

			alphabet++;
		}

		_putchar('\n');
	}
}
