#include "main.h"

/**
 * swap_int - function to swap the values of two integers
 * @a: pointer to one int.
 * @b: pointer to second int.
 *
 * return: nothing
 */

void swap_int(int *a, int *b)
{
int temp = *a;

*a = *b;
*b = temp;
}
