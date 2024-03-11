#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
*str_concat - function that concatenates two strings
*
*@s1: string to be concatenated
*@s2: string to be concatenated
*
*Return: returns pointer to a newly allocated space
*        in memory which contains the contents of s1,
*        followed by the contents of s2, and null
*        terminated or NULL on failure
*
*/

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *concat_str;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}

	concat_str = malloc(sizeof(char) * (i + j + 1));

	if (concat_str == NULL)
		return (NULL);

	while (*s1)
	{
		*concat_str = *s1;
		concat_str++;
		s1++;
	}

	while (*s2)
	{
		*concat_str = *s2;
		concat_str++;
		s2++;
	}
	*concat_str = '\0';
	return (concat_str - (i + j));
}
