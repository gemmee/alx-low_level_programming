#include "main.h"

/**
 * rev_string - reverses a given string
 * @s: pointer to a string
 *
 * Author: Gamachu AD
 */
void rev_string(char *s)
{
	int i = 0, len = 0;

	while (s[len++] != '\0')
		;   /* empty statement */
	len -= 2;
	while (i < len)
	{
		int temp;

		temp = s[i];
		s[i++] = s[len];
		s[len--] = temp;
	}
}

