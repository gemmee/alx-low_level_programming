#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates 2 strings.
 *              a NULL string is treated as an empty string.
 * @s1: pointer to string.
 * @s2: pointer to string.
 *
 * Return: pointer to newly allocated memory which
 *         has s1, followed by s2, and null byte.
 *         NULL on failure.
 * Author: Gamachu AD
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, size, i, j;
	char *nstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	size = len1 + len2;
	nstr = malloc((sizeof(char) * size) + 1); /* + 1 for '\0' character */
	if (nstr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		nstr[i] = s1[i];
	for (j = 0; j < size; i++, j++)
		nstr[i] = s2[j];
	nstr[i] = '\0';
	return (nstr);
}
