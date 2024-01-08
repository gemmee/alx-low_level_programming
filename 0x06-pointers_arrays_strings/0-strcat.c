#include "main.h"

/**
 * _strcat - concatenates two strings by appending the src to the dest string
 *           overwriting the null byte at the end of dest,
 *           then adds a terminating null byte.
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: pointer to a string
 * Author: Gamachu AD
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	dest[i] = src[j];
	return (dest);
}

