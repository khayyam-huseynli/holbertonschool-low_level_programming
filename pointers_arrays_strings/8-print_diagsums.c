#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of
 *                  the two diagonals of a square
 *                  matrix of integers
 *
 * @a:  is the flattened(1d) 2d array to be calculated
 * @size: size of given 2d square matrix
 */

void print_diagsums(int *a, int size)
{
	int i, n, sum1 = 0, sum2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		sum1 = sum1 + a[i];

	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		sum2 = sum2 + a[n];
	printf("%d, %d\n", sum1, sum2);
}
