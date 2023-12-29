#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to check
 *
 * Return: 1 if c is an alphabet, 0 otherwise
 * Author: Gamachu
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A'  && c <= 'Z'));
}
