#include "main.h"
/**
 * _puts - prints string followed by newline.
 * @str: pointer to string.
 *
 * Return: void.
 * Author: Gamachu AD
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
