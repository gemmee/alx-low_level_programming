#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 * Author: Gamachu
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = 1; j < 100; j++)
		{
			if (i < j)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');
				if (i == 98 && j == 99)
				{
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);
	return (0);
}

