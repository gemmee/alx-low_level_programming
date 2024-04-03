#include "3-calc.h"

/**
 * main - Entry point
 * @ac: argument count
 * @av: argument vector
 *
 * Return: Always 0 on success.
 * Author: Gamachu AD
 */
int main(int ac, char **av)
{
	int (*fptr)(int, int);
	int num1, num2, result;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(av[1]);
	num2 = atoi(av[3]);
	fptr = get_op_func(av[2]);
	if (fptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = fptr(num1, num2);
	printf("%d\n", result);

	return (0);
}
