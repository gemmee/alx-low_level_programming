#include "main.h"

/**
 * puts_half - prints the second half of a string, followed by a new line,
 *             if the number of characters is odd, leave the middle one
 * @str: pointer to a string
 *
 * Author: Gamachu ADf
 */
void puts_half(char *str)
{
	int i, len = 0;

	while (str[len] != '\0')
		len++;
	i = len % 2 ? len / 2 + 1 : len / 2;
	while (str[i] != '\0')
		_putchar(str[i++]);
	_putchar('\n');
}
