#include "main.h"

/**
 * cap_string - function that capitalizes all words
 *              of a string. Separators of words:
 *              space, tabulation, new line, ,, ;,
 *              ., !, ?, ", (, ), {, and }
 *
 * @str: string to be fixed
 *
 * Return: retuns pointer of string
 */

char *cap_string(char *str)
{

	int i = 0;
	int j = 0;
	char sep[] = {' ', '\n', '\t', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		j = 0;
		while (sep[j] != '\0')
		{
			if (str[0] >= 'A' && str[0] <= 'Z')
			{
				continue;
			}
			if (str[i] == sep[j] && (str[i + 1] >= 'a'
					&& str[i + 1] <= 'z'))
			{
				str[i + 1] = str[i + 1] - 32;
			}
			j++;
		}
	}

	return (str);
}
