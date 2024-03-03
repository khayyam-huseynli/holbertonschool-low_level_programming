#include "main.h"

/**
 * infinite_add - Function that adds two integers and returns the result
 * @n1: nuber in string to be added
 * @n2: number in string to be added
 * @r: is the buffer that the function will use to store the result
 * @size_r: size of buffer
 * Return: Always returns a pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num1 = 0, num2 = 0, sum = 0;
	int i = 0, j = 0, k = 0;
	char *start; /* points 1st character */
	char *end; /* points last character */

	while (n1[i] != '\0')
	{
		num1 = num1 * 10 + n1[i] - '0';
		i++;
	}
	while (n2[j] != '\0')
	{
		num2 = num2 * 10 + n2[j] - '0';
		j++;
	}
	sum = num1 + num2;
	while (sum / 10 != 0)
	{
		r[k] = sum % 10 + '0';
		sum = (sum - sum % 10) / 10;
		k++;
	}
	r[k] = sum % 10 + '0';
	if (k + 1 > size_r)
	{
		r = 0;
	}
	r[k + 1] = '\0';
	start = r;
	end = r + k;
	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
	return (r);
}
