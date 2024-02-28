#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array
 *               of integers, followed by a new line.
 *               numbers must be separated by comma, followed
 *               by a space and should be displayed in the same
 *               order as they are stored in the array
 *
 * @a:  is the array to be printed
 * @n:  is the number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));

		if (i != n - 1)
		{
			printf("%d, ");
		}
		else
		{
			printf("\n");
		}
	}
}
