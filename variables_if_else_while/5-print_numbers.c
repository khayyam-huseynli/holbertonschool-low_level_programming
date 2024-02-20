#include <stdio.h>
/**
 * main - The entry point
 * Description: Prints all single digit numbers of base 10
 *              starting from 0, followed by a new line
 * Return: Always (0) when Successfull
 */

int main(void)
{
	char number = '0';

	while (number <= '9')
	{

		putchar(number);

		number++;
	}

	putchar('\n');

	return (0);
}
