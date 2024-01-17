#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 *             '\n' is added after each argument in the new string
 * @ac: the argument count
 * @av: the argument vector
 *
 * Return: pointer to a new string
 *         NULL if it fails
 *         NULL if ac == 0 or av == NULL
 * Author: Gamachu AD
 */
char *argstostr(int ac, char **av)
{
	char *new_str;
	int total_len, size, i, j, k;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
			total_len++;
	size = total_len + ac; /* + ac to account for each '\n' to be added*/
	new_str = malloc(size * sizeof(char) + 1);
	if (!new_str) /* if malloc fails, we return NULL */
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			new_str[k] = av[i][j];
		new_str[k++] = '\n';
	}
	new_str[k] = '\0';
	return (new_str);
}

