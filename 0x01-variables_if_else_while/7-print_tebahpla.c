#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the lowercase alphabet in reverse, followed by a newline
 * Return: Always 0 (Success)
 * Author: Gamachu
 */
int main(void)
{
	int n; /* char n; */

	for (n = 122; n > 96; n--) /* for (n = 'z'; n >= 'a'; n--) */
		putchar(n);
	putchar(10); /* putchar('\n') */
	return (0);
}

