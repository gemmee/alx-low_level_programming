#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to the array
 * @n: the size of the array
 *
 * author: Jaba
 * date: 22-08-2022. Central Library. 8:30 PM, Monday
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
int i, temp;

for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}

