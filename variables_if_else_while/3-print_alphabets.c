#include <stdio.h>
/**
 * main - The entry point
 * Description: Prints the alphabet in lowercase and then in uppercase, followed by a new line
 * Return: Always (0) when Successfull
 */

int main(void)
{
	char lower_alphabet = 'a';
	char upper_alphabet = 'A';

	while (lower_alphabet <= 'z' && upper_alphabet <= 'Z')
	{

		putchar(lower_alphabet);
		putchar(upper_alphabet);

		lower_alphabet++;
		upper_alphabet++;
	}

	putchar('\n');

	return (0);
}
