#include <stdio.h>
#include <stdlib.h>

/**
* main -  prints the minimum number of coins to
*         make change for an amount of money
*         if the number of arguments passed to your
*         program is not exactly 1, print Error,
*         followed by a new line, and return 1
*         If the number passed as the argument is
*         negative, print 0, followed by a new line
*         You can use an unlimited number of coins of
*         values 25, 10, 5, 2, and 1 cent
* @argc: count of all cl arguments
* @argv: array of all cl arguments
* Return: always 0 when successfull 1 else
*/

int main(int argc, char *argv[])
{
	int change = 0, cent = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else
	{
		cent = atoi(argv[1]);
		
		change += cent / 25;
		cent = cent % 25;
		
		change += cent / 10;
		cent = cent % 10;
		  	
		change += cent / 2;
		cent = cent % 2;

		if (cent > 0)
			change++;

	}

	printf("%d\n", change);

	return (0);
}
