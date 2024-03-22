#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers -  function that prints numbers, followed by a new line
*                  if separator is NULL, doesn’t print it
*                  prints a new line at the end of function
*
* @separator:  string to be printed between numbers
* @n:  number of integers passed to the function
*
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i != n -1)
			putchar(*separator);
	}
	va_end(args);

	putchar('\n');
}
