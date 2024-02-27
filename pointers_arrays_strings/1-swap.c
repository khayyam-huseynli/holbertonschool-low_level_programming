#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: number1 to be swapt
 * @b: number2 to be swapt
 */

void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
