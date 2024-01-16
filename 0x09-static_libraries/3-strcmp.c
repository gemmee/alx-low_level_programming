#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: pointer to first string.
 * @s2: pointer to second string.
 *
 * Return: value less than 0 if s1 < s2.
 *         value greater than 0 if s1 > s2.
 *         0 if s1 == s2.
 * Author: Gamachu AD
 */
int _strcmp(char *s1, char *s2)
{
	int counter, cmpVal;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
		counter++;
	cmpVal = s1[counter] - s2[counter];
	return (cmpVal);
}
