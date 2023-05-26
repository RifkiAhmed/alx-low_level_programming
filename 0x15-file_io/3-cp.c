#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * _error - checks for file open or write failed
 * @file_from: file text to be copied
 * @file_to: file text to copie to
 * @arg: arguments vector
 */
void _error(int file_from, int file_to, char **arg)
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg[2]);
		exit(99);
	}
}

/**
 * main - check code
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int file_from, file_to, value;
	ssize_t n_chrs, fd;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND);
	_error(file_from, file_to, argv);

	n_chrs = 1024;
	while (n_chrs == 1024)
	{
		n_chrs = read(file_from, buf, 1024);
		if (n_chrs == -1)
			_error(-1, 0, argv);
		fd = write(file_to, buf, n_chrs);
		if (fd == -1)
			_error(0, -1, argv);
	}

	value = close(file_from);
	if (value == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	value = close(file_to);
	if (value == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
