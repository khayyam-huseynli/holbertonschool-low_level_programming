#include <stdio.h>
/**
 * main - This prints the size of various types on the computer
 * it is compiled and run on
 *
 * Return: returns (0) case of Success
 */

int main(void)
{
	char char_Type;
	int int_Type;
	long int long_int_Type;
	long long int long_long_int_Type;
	float float_Type;

	printf("Size of a char: %zu\n", sizeof(char_Type));
	printf("Size of an int: %zu\n", sizeof(int_Type));
	printf("Size of a long_int: %zu\n", sizeof(long_int_Type));
	printf("Size of a long_long_int: %zu\n", sizeof(long_long_int_Type));
	printf("Size of a float: %zu\n", sizeof(float_Type));
	return (0);
}
