#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * Author: Gamachu
 * Description: Prints all the alphabet except q and e in lowercase,
 *              followed by a new line
 */
int main(void)
{
	/* int n; */
	char n;

	/* for (n = 97; n < 123; n++) */
	for (n = 'a'; n <= 'z'; ++n)
	{
		/* if (n == 101 || n == 113) */
		if (n == 'e' || n == 'q')
			continue;
		putchar(n);
	}
	putchar('\n');
	return (0);
}

