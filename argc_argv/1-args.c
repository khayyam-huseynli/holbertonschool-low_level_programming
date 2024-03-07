#include <stdio.h>

/**
* main - prints programe name
* @argc: count of all cl arguments
* @argv: array of all cl arguments
* Return: always 0 when successfull
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
