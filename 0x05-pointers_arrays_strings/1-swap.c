#include "main.h"

/**
 * swap_int - function to swap the values of two integers
 * @a, @b - pointers to the values

 * return: nothing
 */

void swap_int(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
