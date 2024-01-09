#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to the memory area
 * @b: constant to fill the memory with
 * @n: bytes of the memory area to be filled
 *
 * Description: fills the first n bytes of the memory area pointed to
 * by s with the constant b.
 * Return: pointer to the memory area s.
 * Author: Gamachu AD
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

