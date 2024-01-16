#include "main.h"

/**
 * _strncat - concatenates two strings by using at most n bytes from src,
 *            and the src does not need to be null terminated
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes to be concatenated
 *
 * Return: pointer to the destination string
 * Author: Gamachu AD
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';
return (dest);
}

