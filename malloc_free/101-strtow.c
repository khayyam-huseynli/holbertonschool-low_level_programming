#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* word_count - helper function to count the
*              number of words in a string
*
* @str: string to evaluate
*
* Return: number of words
*/

int word_count(char *str)
{
	int i = 0, wc = 0;

	while (str[i] != '\0')
		i++;

	while (*str != '\0')
	{
		if (*str != ' ')
		{
			do {
				str++;

			} while (*str != ' ' && *str != '\0');

		wc++;
		}
		str++;
	}
	return (wc);
}


/**
*strtow - function that splits a string into words
*         each element of this array should contain
*         a single word, null-terminated. last element
*         of the returned array should be NULL
*         words are separated by spaces
*
*@str: string to be splitted
*
*Return: returns pointer to an array of strings (words)
*        aeturns NULL if str == NULL or str == ""
*        if function fails, it should return NULL
*
*/

char **strtow(char *str)
{
	int i = 0, j = 0, len = 0, k = 0, wc;
	char **s;

	if (str == NULL)
		return (NULL);
	wc = word_count(str);
	if (wc == 0)
		return (NULL);
	s = (char **)malloc(sizeof(char *) * (wc + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < wc; i++)
	{
		while (*str != '\0')
		{
			if (*str != ' ')
			{
				do {
					len++;
					str++;
				} while (*str != ' ' && *str != '\0');
				s[i] = malloc(sizeof(char) * (len + 1));
				if (s[i] == NULL)
					return (NULL);
				while (k < len)
				{
					s[i][k] =  str[j - len + k];
					k++;
				}
				s[i][k] = '\0';
				len = 0;
				k = 0;
				break;
			}
		str++;
		}
	}
	s[i] = NULL;
	return (s);
}
