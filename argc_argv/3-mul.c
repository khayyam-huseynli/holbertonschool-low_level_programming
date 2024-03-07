#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers
* @argc: count of all cl arguments
* @argv: array of all cl arguments
* Return: always 0 when successfull 1 else
*/

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);

	return (0);
}
