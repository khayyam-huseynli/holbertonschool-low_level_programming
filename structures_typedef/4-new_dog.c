#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
*new_dog -  function that creates a new dog.
*
*@name: name of dog
*@age: age of dog
*@owner: owner of dog
*
*Return: returns pointer to new struct dog
*        if function fails NULL
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
