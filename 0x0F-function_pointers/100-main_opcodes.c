#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints opcodes
 * @bytes: number of bytes to print
 *
 */
void print_opcodes(int bytes)
{
	int i;
	/* Get the address of the main function */
	unsigned char *ptr = (unsigned char *)print_opcodes;

	/* Print the opcodes */
	for (i = 0; i < bytes; i++)
		printf("%02x ", *(ptr + i));

	printf("\n");
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes(bytes);
	return (0);
}

