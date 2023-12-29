#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: integer input
 *
 * Return: absolute value of n
 * Author: Gamachu
 */
int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));
}
