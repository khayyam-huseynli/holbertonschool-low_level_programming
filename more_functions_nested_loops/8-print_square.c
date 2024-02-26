#include "main.h"

/**
 * print_square  -   Function that prints a square, followed by a new line
 *                   The diogonal should end with a \n
 *                   If n is 0 or less, the function should only print \n
 *                   If size is 0 or less, the function should print only a new line
 *                   Use the character # to print the square
 * @n: is the is the size of the square
 */

void print_square(int size)
{
	int i = 0;
	int j = 0;

	if (size <=  0)
	{
		_putchar ('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
