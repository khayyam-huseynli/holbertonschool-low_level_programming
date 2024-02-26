#include "main.h"

/**
 * print_triangle  - Function that prints a triangle,followed by a new line
 *                   If size is 0 or less, the function prints only a new line
 *                   Use the character # to print the triangle
 * @size: is the is the size of the triangle
 */

void print_triangle(int size)
{
	int i = 0;
	int j = 0;
	int k = 0;

	if (size <=  0)
	{
		_putchar ('\n');
	}
	else
	{
		for (i = size; i > 0; i--)
		{
			for (j = 0; j < i - 1; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k < size - i + 1; k++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
