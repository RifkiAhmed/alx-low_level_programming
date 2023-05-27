#include "main.h"

/**
 * read_textfile - read from a text file and print it to stdout
 * @filename: name of file
 * @letters: number of letters
 *
 * Return: numbers of letters written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, ch_read, ch_write;
	char *text;


	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(text);
		return (0);
	}

	ch_read = read(fd, text, letters);
	ch_write = write(STDOUT_FILENO, text, ch_read);
	close(fd);

	free(text);
	return (ch_write);
}
