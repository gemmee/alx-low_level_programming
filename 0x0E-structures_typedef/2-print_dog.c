#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to the struct dog
 *
 * Return: void
 * Author: Jaba
 * Date: Aug 29 2022 @KP10B
 */
void print_dog(struct dog *d)
{
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
		return;
	}
	else if (d->name == NULL)
	{
		printf("Name: (nil)");
		return;
	}
	else if (d == NULL)
	{
		return;
	}
	else
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}


