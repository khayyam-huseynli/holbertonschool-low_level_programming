#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
*string_nconcat - function that concatenates two strings
*                 returned pointer shall point to a newly
*                 allocated space in memory, which contains s1,
*                 followed by the first n bytes of s2, If n is
*                 greater or equal to the length of s2 then use
*                 the entire string s2. if NULL is passed, treat
*                 it as an empty string
*
*@s1: string to be concatenated
*@s2: string to be concatenated
*@n: number of bytes to be used from s2
*
*Return: returns pointer to a newly allocated space in memory,
*        if the function fails, it should return NULL
*
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	char *nconcat_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	if (n < j)
		j = n;

	nconcat_str = malloc(sizeof(char) * (i + j + 1));

	if (nconcat_str == NULL)
		return (NULL);

	while (*s1)
	{
		*nconcat_str = *s1;
		nconcat_str++;
		s1++;
	}
	while (*s2)
	{
		*nconcat_str = *s2;
		nconcat_str++;
		s2++;
	}
	*nconcat_str = '\0';

	return (nconcat_str - (i + j));
}
