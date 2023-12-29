#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by newline
 *
 * Author: Gamachu
 */
void print_alphabet(void)
{
	char a = 'a';

	for (; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
