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
	int i = 0, j = 0, k = 0, m = 0;
	char temp_r[1000];

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

	if (i + 2 > size_r || j + 2 > size_r)
		return (0);
	sum = num1 + num2;

	while (k < i || k < j)
	{
		temp_r[k] = sum % 10 + '0';
		sum = (sum - sum % 10) / 10;
		k++;
	}
	temp_r[k] = '\0';

	while (temp_r[m] != '\0')
	{
		r[m] = temp_r[k - m - 1];
		m++;
	}
	return (r);
}
