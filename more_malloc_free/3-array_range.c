#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
*array_range - function that creates an array of integers,
*              The array created should contain all the values
*              from min (included) to max (included), ordered
*              from min to max.
*@min: minimum of range
*@max: maximum of range
*Return: Returns a pointer to the newly created array,
*        If min > max, return NULL
*        If malloc fails, return NULL
*/

int *array_range(int min, int max)
{
	int i = 0;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	while (i < max - min + 1)
	{
		arr[i] = i;
		i++;
	}
	return (arr);
}
