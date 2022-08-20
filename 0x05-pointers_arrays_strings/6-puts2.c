#include "main.h"

/**
 * puts2(str) - prints every other character of a string, starting from first followed by new line
 * @str: pointer to a string
 *
 * author: Jaba
 * date: Aug 20, 2022, Central Library
 * Return: void.
 */

void puts2(char *str)
{
int j;

j = 0;
while (str[j] != '\0')
{
if (j % 2 == 0)
{
_putchar(str[j]);
}
j++;
}
_putchar('\n');
}

