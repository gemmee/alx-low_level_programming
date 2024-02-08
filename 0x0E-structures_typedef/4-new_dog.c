#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 *
 * Return: pointer to struct dog_t
 * Author: Gamachu AD
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, lenN, lenO;
	dog_t *n_dog = NULL;

	lenN = 0;
	while (name[lenN] != '\0')
		lenN++;
	lenO = 0;
	while (owner[lenO] != '\0')
		lenO++;
	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);
	n_dog->name = malloc(lenN + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = malloc(lenO + 1);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i <= lenN; i++)
		n_dog->name[i] = name[i];
	for (i = 0; i <= lenO; i++)
		n_dog->owner[i] = owner[i];
	n_dog->age = age;
	return (n_dog);
}

