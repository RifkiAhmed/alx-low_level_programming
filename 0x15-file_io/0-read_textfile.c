#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standar output
 * @filename: name of file
 * @letters: number of bytes
 *
 * Return: number of chars written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd, read_chars, write_chars;
char *buffer;

buffer = malloc(letters);
if (text == NULL)
return (0);
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}
read_chars = read(fd, buffer, letters);
write_chars = write(STDOUT_FILENO, buffer, read_chars);
close(fd);

return (write_chars);
}
