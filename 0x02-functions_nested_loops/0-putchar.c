#include "main.h"
/**
 * main - Entry point
 * Desc: print "_putchar" followed by a newline
 * Return: 0 on success
 */
int main(void)
{
	int n = 0;
	char alx[10] = "_putchar\n";

	while (n < 9)
	{
		_putchar(alx[n]);
		n++;
	}
	return (0);
}

