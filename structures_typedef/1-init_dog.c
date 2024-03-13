#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
*init_dog -  function that initialize a variable of type struct dog
*
*@d: struct dog
*@name: name of dog
*@age: age of dog
*@owner: owner of dog
*
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct d));
	if (d == NULL)
		return (NULL);
	d - > name = *name;
	d - > age = age;
	d - > owner = *owner;
}
