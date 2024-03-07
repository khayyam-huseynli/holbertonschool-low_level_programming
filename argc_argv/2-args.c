#include <stdio.h>

/**
* main - prints programe name
* @argc: count of all cl arguments
* @argv: array of all cl arguments
* Return: always 0 when successfull
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
