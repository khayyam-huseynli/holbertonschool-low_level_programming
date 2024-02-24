#include "main.h"
#include <stdio.h>

/**
 * fibonacci - Function that prints  the first 50 Fibonacci numbers,
 *		       starting with 1 and 2, followed by a new line.
 * @n: nuber to be added
 */

void fibonacci(int n)
{
	int i;
	char fibbo[n];

	fibbo[0] = 1;
	fibbo[1] = 2;

	for (i = 0; i < n - 2; i++)
	{
		fibbo[i + 2] = fibbo[i + 1] + fibbo[i];
		printf("%d, ", fibbo[i]);
	}
}
