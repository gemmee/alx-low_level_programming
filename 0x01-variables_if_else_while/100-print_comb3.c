#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 * Author: Gamachu
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 57; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 56)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}

