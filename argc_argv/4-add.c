#include <stdio.h>
#include <stdlib.h>

/**
* main - adds positive numbers
* @argc: count of all cl arguments
* @argv: array of all cl arguments
* Return: always 0 when successfull 1 else
*/

int main(int argc, char *argv[])
{
	int i, j = 0, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			while (argv[i][j] != '\0')
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			j = 0;
		}
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
