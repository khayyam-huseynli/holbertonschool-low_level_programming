#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
*create_array - function that creates an array of chars,
*               and initializes it with a specific char.
*@size: size of array
*@c: character to be initialized
*Return: Returns a pointer to the array,
*        or NULL if it fails or size = 0
*/

char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *arr;

	arr = malloc(sizeof(char) * size);

	if (arr == NULL || size == 0)
		return (NULL);

	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
