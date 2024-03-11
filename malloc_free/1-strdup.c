#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
*_strdup - function that returns a pointer to a newly
*          allocated space in memory, which contains a
*          copy of the string given as a parameter.
*
*@str: string to be duplicated
*
*Return: On success, returns a pointer to the duplicated string.
*        returns NULL if insufficient memory was available or
*        str = NULL
*/

char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *dup_str;

	while (*str != '\0')
	{
		i++;
	}

	dup_str = malloc(sizeof(char) * (i + 1));

	if (dup_str == NULL || *str == '\0')
		return (NULL);

	while (j < i)
	{
		dup_str[j] =  str[j];
		j++;
	}
	return (dup_str);
}
