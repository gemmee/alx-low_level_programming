#include "main.h"

/**
 * _strcat - concatenates two strings by appending the src string to
 * the dest string, overwriting the null byte at the end of dest, and
 * then adds a terminating null byte.
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * author: Jaba
 * date: Aug. 21, 2022. KP7c-131
 * Return: pointer to a string
 */

char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = src[j];

return (dest);
}

