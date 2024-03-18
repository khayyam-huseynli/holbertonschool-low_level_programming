#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - function that searches for an integer.
*                  parameter on each element of an array
*
* @array: array of integers
* @size:  the number of elements in the array
* @cmp:  pointer to the function that compares values
*
* Return: returns the index of the first element for
*         which the cmp function does not return 0.
*         if no element matches, return -1
*         if size <= 0, return -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
