#include <stdio.h>
/**
 * main - The entry point
 * Description: Prints all possible combinations of three digits
 *              Numbers must be separated by ,, followed by a space
 *              012, 120, 102, 021, 201, 210 are considered the same
 *              combination of the three digits 0, 1 and 2
 *              Print only the smallest combination of three digits
 *              Numbers should be printed in ascending order,
 *              with three digits
 * Return: Always (0) when Successfull
 */

int main(void)
{
	int i;
	int j;
	int m;

	for (i = 0; i <= 9; i++)
	{

		for (j = i + 1; j <= 9; j++)
		{
			for (m = j + 1; m <= 9; m++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + m);

				if (i != 7 && j != 8 && m != 9)
				{
					putchar(',');
					putchar(' ');
				}

			}
		}
	}
	putchar('\n');

	return (0);
}
