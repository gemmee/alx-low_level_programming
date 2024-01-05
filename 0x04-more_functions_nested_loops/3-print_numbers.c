#include "main.h"

/**
 * print_numbers - print the numbers from 0 to 9, followed by a new line.
 * Description: you have to use _putchar only twice
 *
 * Author: Gamachu AD
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
		_putchar ('0' + i++);
	_putchar ('\n');
}
