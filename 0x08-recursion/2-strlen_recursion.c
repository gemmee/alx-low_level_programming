#include "main.h"

/**
 * _strlen_recursion - computes the length of the string
 * @s: pointer to the string
 * Hint: man strlen
 *
 * Return: the length of the string
 * Author: Gamachu AD
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

