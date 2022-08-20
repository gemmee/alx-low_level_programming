#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @s: pointer to string
 *
 * Return: nothing.
 */

void _puts(char *str)
{
  int i;

  i = 0;
  while (*str != '\0')
    {
      _putchar(*str);
      i++;
      str++;
    }
  _putchar('\n');
}
