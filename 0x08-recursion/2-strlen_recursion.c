#include "main.h"

/**
 * _strlen_recursion - computes the length of the string
 * @s: pointer to the string
 *
 * Return: the length of the string
 * author: Jaba
 * date: Aug 23, 2022. kp7c
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

