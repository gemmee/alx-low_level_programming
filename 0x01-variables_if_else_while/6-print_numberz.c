#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all single digit numbers of base 10, followed by
 *              a new line without using variable of type char
 * Return: Always 0 (Success)
 * Author: Gamachu
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
		putchar(n);
	putchar(10);
	return (0);
}

