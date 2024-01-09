#include "main.h"

/**
  * _strchr - locates a character in a string
  * @s: pointer to the string
  * @c: character to be searched for
  *
  * Return: pointer to the first occurrence of the character c in the string,
  *         NULL if the character is not found.
  * Author: Gamachu AD
  */
char *_strchr(char *s, char c)
{
	while (*s != c)
		if (!*s++)
			return (0);
	return (s);
}

