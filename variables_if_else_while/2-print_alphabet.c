#include <stdio.h>
/**
 * main - The entry point
 * Description: Prints the alphabet in lowercase, followed by a new line
 * Return: Always (0) when Successfull
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{

		putchar(alphabet);

		alphabet++;
	}

	putchar('\n');

	return (0);
}
