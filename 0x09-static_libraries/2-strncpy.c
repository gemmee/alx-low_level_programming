#include "main.h"

/**
 * _strncpy - function that copies a string by working exactly like
 *            the function strncpy in the standard library.
 * @dest: pointer to the destination string
 * @src: pointer to the source string.
 * @n: number of bytes to be copied.
 *
 * Return: pointer to the destination string
 * Author: Gamachu AD
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

