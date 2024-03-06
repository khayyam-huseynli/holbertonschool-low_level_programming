#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of
 *                  the two diagonals of a square
 *                  matrix of integers
 *
 * @a:  is the 2d array to be calculated
 * @size: size of given 2d square matrix
 */

void print_diagsums(int *a, int size)
{
	int i = 0, j = 0;
	int d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				d1 += a[i][j];
			}
			else if (i + j == size - 1)
			{
				d2 += a[i][j];
			}
		}
		printf("%d, %d\n", d1, d2);
	}
}
