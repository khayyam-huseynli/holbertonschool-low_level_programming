#include <stdio.h>
/**
 * main - The entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers
 *              The numbers should range from 0 to 99
 *              The two numbers should be separated by a space
 *              All numbers should be printed with two digits.
 *               1 should be printed as 01
 *              The combination of numbers must be separated by comma,
 *              followed by a space
 *              00 01 and 01 00 are considered as the same combination
 *              of the numbers 0 and 1
 *
 * Return: Always (0) when Successfull
 */

int main(void)
{
	int i;
	int j;
	int m;

	for (i = 0; i <= 9; i++)
	{

		for (j = 0; j <= 9; j++)
		{
			for (m = 0; m <= 9; m++)
			{
				for (n = 0; n <= 9; n++)
				{
					if ((i + j) < (m + n))
					{
						putchar('0' + i);
						putchar('0' + j);
						putchar(' ');
						putchar('0' + m);
						putchar('0' + n);
					}

					if (i != 7 && j != 8 && m != 9)
					{
						putchar(',');
						putchar(' ');
					}

				}

			}
		}
	}
	putchar('\n');

	return (0);
}
