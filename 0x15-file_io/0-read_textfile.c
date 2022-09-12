#include "main.h"

/**
 * read_textfile - reads a text file and prints to the POSIX stdout.
 * @filename: pointer to the file name
 * @letters: number of letters it should read and print
 *
 * Return: number of letters it could print or write on success.
 *         -1 on failure.
 * Author: Jaba
 * Date: Sep 12, 2022 or Fulbaana 02, 2015 ALH
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buf = malloc(letters * sizeof(char) + 1);
	if (buf == NULL)
		return (0);

	rd = read(file, buf, letters);
	if (rd == -1)
		return (0);

	buf[letters] = '\0';

	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1)
		return (0);

	close(file);
	free(buf);

	return (wr);
}
