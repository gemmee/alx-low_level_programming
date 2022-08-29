#ifndef STRTYP
#define STRTYP

/**
 * struct dog - a dog structure
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: a header file for a dog struct
 * Author: Jaba
 * Date: Aug 29, 2022. @kp10B
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /*STRTYP*/

