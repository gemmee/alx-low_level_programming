#include <stdio.h>

/**
 * main - prints the number of arguments passed to it.
 * @argc: number of arguments.
 * @argv: array of size argc.
 *
 * Return: 0 on success.
 * Author: Gamachu AD
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}

