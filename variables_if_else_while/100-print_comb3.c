#include <stdio.h>
/**
 * main - The entry point
 * Description: Prints all possible combinations of two digits
 *              Numbers must be separated by ,, followed by a space
 *              The two digits must be different
 *              01 and 10 are considered the same combination of
 *              the two digits 0 and 1
 *              Print only the smallest combination of two digits
 *              Numbers should be printed in ascending order,
 *              with two digits
 * Return: Always (0) when Successfull
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{

		for (j = 0; j <= 9; j++)
		{
			if ((i != j) && (i < j))
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar(',');
				putchar(' ');

			}
		}
	}
	putchar('\n');

	return (0);
}
