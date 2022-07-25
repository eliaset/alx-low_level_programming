#include "main.h"

/**
 * error_file - checks if files can be opened.
 * @fd_r: fd_r.
 * @fd_w: fd_w.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int fd_r, int fd_w, char *argv[])
{
	if (fd_r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fd_w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd_r, fd_w, err_close;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp fd_r fd_w");
		exit(97);
	}

	fd_r = open(argv[1], O_RDONLY);
	fd_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(fd_r, fd_w, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(fd_r, buf, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		nwr = write(fd_w, buf, nchars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	err_close = close(fd_r);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_r);
		exit(100);
	}

	err_close = close(fd_w);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_r);
		exit(100);
	}
	return (0);
}
