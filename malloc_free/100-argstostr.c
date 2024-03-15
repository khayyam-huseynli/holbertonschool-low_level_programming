#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
*argstostr - function that concatenates all the arguments
*            of your program. Each argument should be
*            followed by a \n in the new string
*
*@ac: count of arguments
*@av: array of arguments
*
*Return: returns pointer to a newly allocated space
*        in memory which contains the contents of all
*        arguments, and null it fails. or NULL if ac == 0
*        or av == NULL
*
*/

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, total_len = 0;
	char *concat_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		while (*av[i] != '\0')
		{
			j++;
			av[i]++;
		}
		total_len += j;
		av[i] -= j;
		j = 0;
	}

	concat_str = malloc(sizeof(char) * (total_len + ac + 1));

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		while (*av[i] != '\0')
		{
			*concat_str = *av[i];
			concat_str++;
			av[i]++;
		}
		*concat_str = '\n';
		concat_str++;
	}

	*concat_str = '\0';
	return (concat_str - (total_len + ac));
}
