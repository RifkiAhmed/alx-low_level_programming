#include "main.h"

/**
 * read_textfile - read a text file and print it to stdout
 * @filename: name of text file
 * @letters: number of letters to be read and printed
 *
 * Return: 0 if failed otherwise numbers of letters written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer = NULL;
ssize_t rd_chars, wr_chars;
int fd;

if (!(filename && letters))
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}
buffer = malloc(sizeof(char) * letters);
if (!buffer)
{
return (0);
}
rd_chars = read(fd, buffer, letters);
close(fd);

if (rd_chars < 0)
{
free(buffer);
return (0);
}
if (!rd_chars)
{
rd_chars = letters;
}
wr_chars = write(STDOUT_FILENO, buffer, rd_chars);
free(buffer);

if (wr_chars < 0)
{
return (0);
}
return (wr_chars);
}