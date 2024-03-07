#include <stdio.h>

/**
* main - prints programe name
* @argc: count of all cl arguments
* @argv: array of all cl arguments
* Return: always 0 when successfull
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
