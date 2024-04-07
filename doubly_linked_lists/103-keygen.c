#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define XOR_VALUE_1 0x55
#define AND_VALUE 0x3f
#define XOR_VALUE_2 0x4f
#define XOR_VALUE_3 0xef
#define XOR_VALUE_4 0xe5

/**
 * calculate_product - calculates the product of the ASCII values of the characters in the input string.
 * @str: pointer to first input argument.
 * @len: length of the string
 *
 * Return: result of the calculation.
 */
unsigned long calculate_product(char *str, int len)
{
	unsigned int product = 1;
	int i;

	for (i = 0; i < len; i++)
	{
		product *= str[i];
	}
	return ((unsigned long)((product ^ XOR_VALUE_1) & AND_VALUE));
}

/**
 * calculate_max - finds the maximum ASCII value among the characters in the input string.
 * @str: pointer to first input argument.
 * @len: length of the string
 *
 * Return: result of the calculation.
 */
unsigned long calculate_max(char *str, int len)
{
	unsigned int max_value = str[0];
	int i;

	for (i = 0; i < len; i++)
	{
		if ((int)max_value < (int)str[i])
		{
			max_value = str[i];
		}
	}
	srand(max_value ^ 0xe);
	return ((unsigned long)(rand() & AND_VALUE));
}

/**
 * calculate_sum - calculates the sum of the squares of the ASCII values of the characters in the input string.
 * @str: pointer to first input argument.
 * @len: length of the string
 *
 * Return: result of the calculation.
 */
unsigned long calculate_sum(char *str, int len)
{
	int sum = 0;
	int i;

	for (i = 0; i < len; i++)
	{
		sum += str[i] * str[i];
	}
	return ((unsigned long)((unsigned int)(char)((char)sum ^ XOR_VALUE_3) & AND_VALUE));
}

/**
 * generate_random - generates a sequence of random numbers.
 * @ch: first character of the input string.
 *
 * Return: result of the calculation.
 */
unsigned long generate_random(char ch)
{
	int random_value;
	int i;

	for (i = 0; i < ch; i++)
	{
		random_value = rand();
	}
	return ((unsigned long)((unsigned int)(char)((char)random_value ^ XOR_VALUE_4) & AND_VALUE));
}

/**
 * main - program that generates a key for a given name
 * @argc: count of input arguments
 * @argv: array of string inputs.
 *
 * Return: 0 on success, 1 if failed.
 */
int main(int argc, char **argv)
{
	char *input_str, key[7], *char_set;
	uint length;
	unsigned long result;
	unsigned int sum;
	int i;

	char_set = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	if (argc != 2)
	{
		exit(1);
	}
	input_str = argv[1];
	length = strlen(input_str);
	result = ((length ^ 0x3b) & AND_VALUE);
	key[0] = char_set[result];
	/* calculate_sum */
	sum = 0;
	for (i = 0; i < (int)length; i++)
	{
		sum += input_str[i];
	}
	result = ((sum ^ XOR_VALUE_2) & AND_VALUE);
	key[1] = char_set[result];
	result = calculate_product(input_str, length);
	key[2] = char_set[result];
	result = calculate_max(input_str, length);
	key[3] = char_set[result];
	result = calculate_sum(input_str, length);
	key[4] = char_set[result];
	result = generate_random(*input_str);
	key[5] = char_set[result];
	key[6] = '\0';
	printf("%s", key);
	return (0);
}

