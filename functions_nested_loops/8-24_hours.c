#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer,
*               starting from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int i;
	int j;
	int m;
	int n;

	for (i =  0; i < 3; i++)
	{
		for (j =  0; j < 10; j++)
		{
			if (i == 2 && j >= 3)
			{
				continue;
			}

			for (m = 0; m < 6; m++)
			{
				for (n = 0; n < 10; n++)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + m);
					_putchar('0' + n);
					_putchar('\n');
				}
			}
		}
	}
}
