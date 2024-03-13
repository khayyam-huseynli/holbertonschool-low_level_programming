#ifndef DOG_H
#define DOG_H

/**
 * struct dog - creates dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Description: struct data type
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif
