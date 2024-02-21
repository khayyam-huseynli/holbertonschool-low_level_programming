#include "main.h"

/**
 * main - The entry point
 * print_alphabet - Function that prints the alphabet, in lowercase,
 *		    followed by a new line
 * Description: Prints the alphabet, in lowercase, followed by a new line
 *              with user defined function
 * Return: Always (0) when Successfull
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{

		_putchar(alphabet);

		alphabet++;
	}

	putchar('\n');

	return (0);
}
