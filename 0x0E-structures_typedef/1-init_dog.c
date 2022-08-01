#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of struc dog
 * @d: array
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to owner
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
