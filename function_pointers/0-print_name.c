#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - function that calls name func and prints a name
*
* @name: name parameter
* @f:  pointer to name function
*
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
