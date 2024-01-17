#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string passed
 * @str: pointer to string being duplicated.
 * Hint: man strdup
 *
 * Return: NULL if str = NULL or memory was insufficient
 *         pointer to duplicated string on success.
 * Author: Gamachu AD
 */
char *_strdup(char *str)
{
	char *nstr;
	unsigned int len, i;

	/*check if str is NULL*/
	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
		len++;
	nstr = malloc(sizeof(char) * (len + 1));
	/*check if malloc was successful*/
	if (nstr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		nstr[i] = str[i];
	nstr[len] = '\0';
	return (nstr);
}
