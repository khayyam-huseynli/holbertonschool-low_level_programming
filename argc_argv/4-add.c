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
	int i, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < '0' || *argv[i] > '9')
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
