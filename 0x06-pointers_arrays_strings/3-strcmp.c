#include "main.h"

/**
 * _strcmp - compares two strings exactly like the standard library 
 * function strcmp.
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * author: Jaba
 * date: 22-08-2022. Central Library. 2:00 PM
 * Return: an integer less than 0 if s1 is less than s2,
 * a 0 if s1 is equal to s2, an integer greater than 0 if s1 > s2.
 */

int _strcmp(char *s1, char *s2)
{
int i, cmpVal;

i = 0;
while (s1[i] == s2[i] && s1[i] != '\0')
{
i++;
}

cmpVal = s1[i] - s2[i];
return (cmpVal);
}

