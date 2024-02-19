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

	printf("Size of a char: %zu byte(s)\n", sizeof(char_Type));
	printf("Size of an int: %zu byte(s)\n", sizeof(int_Type));
	printf("Size of a long_int: %zu byte(s)\n", sizeof(long_int_Type));
	printf("Size of a long_long_int: %zu byte(s)\n", sizeof(long_long_int_Type));
	printf("Size of a float: %zu byte(s)\n", sizeof(float_Type));
	return (0);
}
