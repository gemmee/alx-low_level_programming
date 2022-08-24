#include <stdio.h>

/**
 * main - prints all arguments it receives, followed by a new line.
 * @argc: number of arguments received.
 * @argv: array of size argc, containing all arguments received.
 *
 * Return: 0 on success.
 * Author: Jaba
 * Date: Aug 24, 2022 @Central Library
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);

	return (0);
}
