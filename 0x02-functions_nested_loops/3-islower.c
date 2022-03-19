#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * Return: 0 on success
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}

