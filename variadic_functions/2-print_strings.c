#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings -  function that prints strings, followed by a new line.
*                  if one of the string is NULL, print (nil) instead
*                  if separator is NULL, doesn’t print it
*                  prints a new line at the end of function
*
* @separator:  string to be printed between strings
* @n:  number of strings passed to the function
*
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(args);

	putchar('\n');
}
