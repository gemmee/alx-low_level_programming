#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c:  contains character to be checked
 *
 * Return: 1 if c is lowercase,
 *         0 otherwise
 * Author: Gamachu
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}

