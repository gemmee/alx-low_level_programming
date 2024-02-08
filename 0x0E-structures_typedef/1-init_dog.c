#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to the struct dog
 * @name: pointer to the name of the dog
 * @age: the age of the dog
 * @owner: pointer to the owner of the dog
 *
 * Author: Gamachu AD
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name; /* (*d).name = name; */
	d->age = age;
	d->owner = owner;
}

