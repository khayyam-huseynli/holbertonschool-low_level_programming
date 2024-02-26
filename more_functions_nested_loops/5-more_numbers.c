#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers,
 *                from 0 to 14, followed by a new line
 */

void more_numbers(void)
{
	int d = 0;
	int i;

	for (i = 0; i < 10; i++)
	{

		while (d <= 14)
		{
			if (d > 9)
			{
				_putchar ('0' + d / 10);
			}

			_putchar('0' + d % 10);
			d++;
		}
		_putchar('\n');
	}
}
