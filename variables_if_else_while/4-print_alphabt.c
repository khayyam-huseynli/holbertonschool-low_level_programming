#include <stdio.h>
/**
 * main - The entry point
 * Description: Prints the alphabet in lowercase -all the letters
 *              except q and e - followed by a new line
 * Return: Always (0) when Successfull
 */

int main(void)
{
	char lower_alphabet = 'a';

	while (lower_alphabet <= 'z')
	{
		if (lower_alphabet == 'q' || lower_alphabet == 'e')
			continue;

		putchar(lower_alphabet);
		lower_alphabet++;
	}

	putchar('\n');

	return (0);
}
