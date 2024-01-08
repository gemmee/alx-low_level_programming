#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: pointer to string
 *
 * Author: Gamachu AD.
 */

void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);  /* Note that: *str++ is equivalent to *(str++) but since it's post decrement it's ok*/
	_putchar('\n');
}
