#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s1 = "he llo, world";
	char *s2 = "hello,hello, hello";
	char *s3 = "Hello123he";
	char *f = "oleh";
	unsigned int n1, n2, n3;

	n1 = _strspn(s1, f);
	n2 = _strspn(s2, f);
	n3 = _strspn(s3, f);
	printf("%u\n", n1);
	printf("%u\n", n2);
	printf("%u\n", n3);
	return (0);
}

