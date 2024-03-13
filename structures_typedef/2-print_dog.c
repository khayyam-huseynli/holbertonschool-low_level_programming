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
	if (d)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n",
			d->name, d->age, d->owner);
	}
}
