#include <stdio.h>
/**
 * main - The entry point
 * Description: Prints all possible combinations of
 *              single-digit numbers.
 *              Numbers must be separated by ,, followed by a space
 *              Numbers should be printed in ascending order
 * Return: Always (0) when Successfull
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);

		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
