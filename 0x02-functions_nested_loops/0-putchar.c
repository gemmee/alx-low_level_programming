#include "main.h"
/**
 * main - Entry point
 * Desc: print "_putchar" followed by a newline
 * Return: 0 on success
 * Author: Gamachu
 */
int main(void)
{
	int n = 0;
	char p[10] = "_putchar\n";

	while (n < 9)
	{
		_putchar(p[n]);
		n++;
	}
	return (0);
}
