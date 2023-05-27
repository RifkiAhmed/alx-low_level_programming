#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 * @filename: name of file
 * @letters: num of bytes
 *
 * Return: return the values
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd, r, x;
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

r = read(fd, text, letters);
x = write(STDOUT_FILENO, text, r);
close(fd);

return (x);
}
