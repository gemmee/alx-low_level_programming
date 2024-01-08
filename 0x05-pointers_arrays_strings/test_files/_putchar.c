#include <unistd.h>

/**
 * _putchar - prints a character
 * @ch: the character
 *
 * Author: Gamachu AD
 */
char _putchar(char ch)
{
	return (write(1, &ch, 1));
}