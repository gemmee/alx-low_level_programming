#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte(\0), to the buffer pointed to by dest.
 * @dest: pointer to the destination.
 * @src: pointer to the source.
 * 
 * author: Jaba
 * date: Aug 20, 2022, Central Library
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int i, j;

i = 0;
while (src[i] != '\0')
{
i++;
}
for (j = 0; j <= i; j++)
{
dest[j] = src[j];
}
return (dest);
}

