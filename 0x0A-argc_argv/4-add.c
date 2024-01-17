#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds and prints sum of positive numbers, followed by a new line
 * @argc: number of arguments passed.
 * @argv: pointer to the array of size argc, containing arguments passed.
 *
 * Return: 0 on success. 1 on error.
 * Author: Gamachu AD
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

