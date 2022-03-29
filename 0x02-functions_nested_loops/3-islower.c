#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c:  contains value to be compared
 * Return: 0 on success
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}

