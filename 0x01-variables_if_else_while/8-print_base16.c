#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all the numbers of base 16 in lowercase,
 *              followed by a newline.
 * Return: Always 0 (Success)
 * Author: Gamachu
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (n = 'a'; n <= 'f'; n++)
		putchar(n);
	putchar(10);
	return (0);
}

