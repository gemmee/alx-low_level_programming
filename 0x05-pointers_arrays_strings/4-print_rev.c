#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: pointer to a string.
 *
 * Author: Gamachu AD
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	while (*s++ != '\0')
		len++;
	while (len-- >= 0)
		_putchar(*--s);  /* jump over \0 at first*/
	_putchar('\n');
}
