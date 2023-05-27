#include "main.h"

/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: name of file
 * @letters: number of letters
 *
 * Return: number of letters written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, chars_rd, chars_wr;
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

	chars_rd = read(fd, text, letters);
	chars_wr = write(STDOUT_FILENO, text, chars_rd);
	close(fd);

	return (chars_wr);
}
