#include "main.h"

/**
 * puts2 - prints every other character of a string,
 *         starting from the first character,
 *         followed by a newline
 * @str: pointer to a string
 *
 * Author: Gamachu AD
 */

void puts2(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		if (j % 2 == 0)
			_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
