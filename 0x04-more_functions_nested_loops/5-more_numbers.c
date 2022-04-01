#include "main.h"
/**
 * more_numbers - a function that pred by a new line
 * 
 * Return: void
 */
void more_numbers(void)
{
int i, j, r, q;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 15; j++)
{
r = j % 10;
q = j / 10;
if (j > 9)
_putchar(q + '0');

_putchar(r + '0');
}
_putchar('\n');
}
}
