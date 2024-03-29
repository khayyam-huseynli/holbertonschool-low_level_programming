#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
*print_dog - function that prints a struct dog
*            if an element of d is NULL, print (nil)
*            instead of this element.
*            (if name is NULL, print Name: (nil))
*            if d is NULL print nothing.
*
*@d: struct dog
*
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		printf("Age: %.6f\n", d->age);

		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
