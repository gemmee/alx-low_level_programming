#include <stdlib.h>
#include "dog.h"
/**
 * free-dog - frees dogs struct.
 * @d: pointer to dog struct.
 *
 * Return: void.
 * Author: Jaba
 * Date: Aug 29 2022 @KP7B -21 room(2nd F)
 */
void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	free(d->name);
	free(d->owner);
	free(d);

}

