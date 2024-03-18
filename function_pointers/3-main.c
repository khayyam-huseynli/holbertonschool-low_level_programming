#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int argc, char* argv[])
{
	int a, b, res;
	char* c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	c = argv[2];
	res = get_op_func(c)(a, b);
	printf("%d\n", res);

	return (0);
}
