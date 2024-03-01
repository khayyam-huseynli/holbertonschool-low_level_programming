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
	char lets[][] = {{'a', 'A'}, {'e', 'E'}, {'o', 'O'},
				{'t', 'T'}, {'l', 'L'}};

	int nums[] = {'4', '3', '0', '7', '1'};

	while (str[i] != '\0')
	{
		while (lets[j] != '\0')
		{
			while (nums[k] != '\0')
			{
				if (str[i] == lets[j])
				{
					str[i] = nums[k];
				}
			}
		}
	}


	return (str);
}
