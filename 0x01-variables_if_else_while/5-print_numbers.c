#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all single digits of base 10 starting from 0,
 *              followed by a newline.
 * Return: Always 0 (Success)
 * Author: Gamachu
 */
int main(void)
{
	char n; /* int n; */

	for (n = '0'; n <= '9'; n++) /* for (n = 48; n < 58; n++) */
		putchar(n);
	putchar('\n'); /* putchar(10); */
	return (0);
}

