#include "main.h"

/**
 * leet - Function that encodes a string into 1337.
 *        Letters a and A should be replaced by 4
 *        Letters e and E should be replaced by 3
 *        Letters o and O should be replaced by 0
 *        Letters t and T should be replaced by 7
 *        Letters l and L should be replaced by 1
 *
 * @str: string to be fixed
 *
 * Return: retuns pointer of string
 */

char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char l_lets[] = "aeotl";
	char u_lets[] = "AEOTL";
	char nums[] = "43071";

	while (str[i] != '\0')
	{
		j = 0;

		while (u_lets[j] != '\0')
		{
			if (str[i] == u_lets[j] || str[i] == l_lets[j])
			{
				str[i] = nums[j];
				break;
			}

			j++;
		}

		i++;
	}

	return (str);
}
