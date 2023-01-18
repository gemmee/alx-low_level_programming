#include "main.h"

/**
 * main - copies the content of one file to another file.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0
 * Author: Jeba
 * Date: Jan 18, 2023 Wed.
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, size;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	fd1 = open(argv[1], O_RDONLY, 0);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	while ((size = read(fd1, buf, 1024)) > 0)
	{
		if (write(fd2, buf, size) != size)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (size == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	}
	if (close(fd1) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd1), exit(100);
	}
	if (close(fd2) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd2), exit(100);
	}
	return (0);
}

