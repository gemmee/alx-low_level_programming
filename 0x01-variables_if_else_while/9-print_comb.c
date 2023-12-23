#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all possible combinations of a single-digit numbers.
 * Return: Always 0 (Success)
 * Author: Gamachu
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n); /* prints num 0 to 9 */
		if (n != 57)
		{
			putchar(44); /* prints comma */
			putchar(32); /* prints space */
		}
	}
	putchar(10); /* prints new line */
	return (0);
}

