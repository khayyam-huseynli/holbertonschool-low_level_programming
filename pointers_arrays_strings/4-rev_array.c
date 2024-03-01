#include "main.h"

/**
 * reverse_array - function that reverses
 *                 the content of an array
 * @a: array to be reversed
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{

	int *start; /* points 1st character */
	int *end; /* points last character */

	start = a;
	end = a + n - 1;

	while (start < end)
	{
		int temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
