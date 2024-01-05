#include "main.h"

/**
 * print_line -  draws a straight line in the terminal, ended with a \n
 * @n: the number of times the character _ should be printed
 * Description: If n is 0 or less, print only \n
 *
 * Author: Gamachu AD
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
