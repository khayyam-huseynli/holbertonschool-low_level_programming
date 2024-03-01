#include "main.h"

/**
 * reverse_array - function that reverses
 *                 the content of an array
 * @a: array to be reversed
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{

	int i = 0;
	char *start; /* points 1st character */
	char *end; /* points last character */

	while (a[i] != '\0')
	{
		i++;
	}

	/** after while loop i = strlen + 1 */

	start = a;
	end = a + i - 1;

	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
