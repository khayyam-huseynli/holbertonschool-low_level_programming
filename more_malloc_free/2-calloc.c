#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
*_calloc - function that  allocates memory for an array,
*          using malloc. The memory is set to zero.
*
*@nmemb: number of elements
*@size:  bytes of each element
*
*Return: Returns a pointer to the array,
*        If nmemb or size is 0, then _calloc returns NULL
*        If malloc fails, then _calloc returns NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	while (i < nmemb * size)
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}
