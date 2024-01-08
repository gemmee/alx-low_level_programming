#include "main.h"

/**
 * _strcmp - compares two strings exactly like the strcmp in standard library.
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: an integer less than 0 if s1 is less than s2,
 *         0 if s1 is equal to s2,
 *         an integer greater than 0 if s1 > s2.
 * Author: Gamachu AD
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

