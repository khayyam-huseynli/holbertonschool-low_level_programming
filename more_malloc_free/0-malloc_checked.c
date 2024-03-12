#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
*malloc_checked - function that allocates memory using malloc
*                 if malloc fails, the malloc_checked function
*                 should cause normal process termination with
*                 a status value of 98
*
*@b: size of memory to be allocated
*
*Return: returns a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	char *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);
}
