#include <sdtio>

/**
 * main - The entry point
 * @n: a random number
 * Description: Prints whether the number n is positive or negative
 * Return: Always (0) when Successfull
 */


int main(int n)
{
	if (n > 0)
		printf("is positive");
	else
		if (n == 0)
			printf("is zero");
		else
			printf("is negative");
	return (0);
}
