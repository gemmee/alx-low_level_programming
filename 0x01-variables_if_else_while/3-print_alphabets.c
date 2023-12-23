#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * Author: Gamachu
 * Description: Prints the alphabet in lowercase, and then in uppercase,
 *              followed by a new line
 */
int main(void)
{
	/* char a; */
	int a;

	/* for (a = 'a'; a <= 'z'; a++) */
	for (a = 97; a < 123; a++)
		putchar(a);
	/* for (a = 'A'; a <= 'Z'; a++) */
	for (a = 65; a < 91; a++)
		putchar(a);
	/* putchar('\n'); */
	putchar(10);

	return (0);
}

