#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount of
 *        money, which is passed as argument where
 *        25, 10, 5, 2 and 1 value coins are available
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error.
 * Author: Gamachu AD
 */
int main(int argc, char *argv[])
{
	int count, amount;

	if (argc != 2) /* number of argument passed should be 1 */
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	count = 0;
	if (amount > 0)
	{
		count += amount / 25;
		amount %= 25;
		count += amount / 10;
		amount %= 10;
		count += amount / 5;
		amount %= 5;
		count += amount / 2;
		amount %= 2;
		count += amount;
	}
	printf("%d\n", count);
	return (0);
}
