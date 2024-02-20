#include <stdio.h>
/**
 * main - The entry point
 * Description: Prints all single digit numbers of base 10
 *              starting from 0, followed by a new line
 * Return: Always (0) when Successfull
 */

int main(void)
{
	int i

	for (i = 0; i <= 9; i++)

		putchar('0' + i);

	putchar('\n');

	return (0);
}
