#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two numbers, followed by a new line.
 * @argc: number of arguments received.
 * @argv: array of size argc, containing all arguments received.
 *
 * Return: 0 on success, 1 on error.
 * Author: Jaba
 * Date: Aug 24 2022. @CL
 */
int main(int argc, char *argv[])
{
	int count, product;

	product = 1;
	if (argc == 3)
	{
		for (count = 1; count < argc; count++)
			product *= atoi(argv[count]);

		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

