#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a newline
 * @s: pointer to the string
 *
 * author: Jaba
 * date: Aug 23, 2022. kp7c
 */

void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s++);
	_puts_recursion(s);
}

