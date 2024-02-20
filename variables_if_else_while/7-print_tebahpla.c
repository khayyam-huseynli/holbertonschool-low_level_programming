#include <stdio.h>
/**
 * main - The entry point
 * Description: Prints the lowercase alphabet in reverse,
 *              followed by a new line
 * Return: Always (0) when Successfull
 */

int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');

	return (0);
}
