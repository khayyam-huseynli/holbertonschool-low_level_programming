#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	char array[8] = {'_', 'p', 'u', 't',
			'c', 'h', 'a', 'r'};
	while (i < 8)
	{
		_putchar(array[i]);
		i++;
	}
	return (0);
}
