#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * Author: Gamachu
 * Description: It prints the alphabet in lowercase,
 *              followed by a new line
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');

	return (0);
}
