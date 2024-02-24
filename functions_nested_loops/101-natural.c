#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * return: Returns 0 always
 */

/**
* @n: nuber to be checked
*/

void natural(int n);

int main(void)
{
	natural(1024);

	return (0);
}

/**
 * natural - Function that computes and prints the sum of all the
 *           multiples of 3 or 5 below 1024 (excluded), followed by a new line.
 * @n: nuber to be checked
 */

void natural(int n)
{
	int i = 0;
	int sum = 0;

	while (i < n)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}

		i++;
	}

	printf("%d\n ", sum);
}
