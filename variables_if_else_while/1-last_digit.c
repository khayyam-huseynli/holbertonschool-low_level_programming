#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - The entry point
 * Description: Prints whether the last digit of the number
 * Return: Always (0) when Successfull
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit = n % 10;
	
	if (last_digit > 5)

		printf("Last digit of %i is %i and is greater than 5\n", n, last_digit);
	else
		if (n == 0)
			printf("Last digit of %i is %i and is 0\n", n, last_digit);
		else
			if (n < 6 && !(n == 0))
				printf("Last digit of %i is %i and is less than 6
						and not 0\n", n, last_digit);
	return (0);
}
