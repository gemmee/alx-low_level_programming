#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9 except for 2 and 4,
 *                      followed by a new line.
 *
 * Description: Only use _putchar twice in the code
 * Author: Gamachu AD
 */
void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i != 2 && i != 4)
			_putchar('0' + i);
		i++;
	}
	_putchar ('\n');
}
