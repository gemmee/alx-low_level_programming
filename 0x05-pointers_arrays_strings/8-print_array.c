#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array, separated by comma, and 
 * followed by space, and new line at the end
 * @a: pointer to the array
 * @n: number of elements to be printed
 *
 * author: Jaba
 * date: 20-08-2022, Central Library
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n-1)
printf(", ");
else
printf("\n");
}
}

