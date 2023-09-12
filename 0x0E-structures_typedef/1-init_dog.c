#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a struct
 * @d: structure type variable to initialize
 * @name: name member of the struct
 * @age: age member of the struct
 * @owner: owner member of the struct
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
