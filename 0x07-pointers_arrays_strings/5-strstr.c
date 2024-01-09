#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: pointer to the string
 * @needle: pointer to the substring
 *
 * Return: pointer to the beginning of the located substring,
 *         NULL if the substring is not found.
 * Author: Gamachu AD
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack;
		char *n = needle;

		while (*n && *haystack && *n == *haystack)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (start);
		haystack = start + 1;
	}
	return (0); /* 0 is equivalent to NULL */
}

