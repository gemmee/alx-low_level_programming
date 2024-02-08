#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees dogs struct.
 * @d: pointer to dog struct.
 *
 * Author: Gamachu AD
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}

