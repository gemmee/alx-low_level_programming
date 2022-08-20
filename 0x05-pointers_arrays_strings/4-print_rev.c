#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer to a string.
 *
 * Return: void.
 */
void print_rev(char *s)
{
int len;

len = 0;
while (*s != '\0')
{
len++;
s++;
}
while (len != 0)
{
_putchar(s[len-1]);
len--;
}
_putchar('\n');
}

