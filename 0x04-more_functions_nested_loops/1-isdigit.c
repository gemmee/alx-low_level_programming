#include "main.h"

/**
 * _isdigit - ckecks for a digit(0 through 9).
 * @c: the character to be checked
 *
 * Return: 1 if c is a digit
 *         0 otherwise
 * Author: Gamachu AD
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
