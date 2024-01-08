#include "main.h"

/**
 * _strncat - concatenates two strings by using at most n bytes from src,
 *            and the src does not need to be null terminated
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes
 *
 * Return: pointer to the destination string
 * Author: Gamachu AD
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; j < n && src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}

