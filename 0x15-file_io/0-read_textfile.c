#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 *
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	int m = 0;
	int n = 0;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf != NULL)
		return (0);
	read(fd, buf, letters);
	buf[letters] = '\0';
	close(fd);

	while (buf[n] != 0)
	{
		if (buf[n] != 32)
		{
			m++;
		}
		n++;
	}
	return (m);
}
