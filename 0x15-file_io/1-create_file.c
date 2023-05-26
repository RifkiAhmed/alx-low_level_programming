#include "main.h"

/**
 * create_file - create file
 * @filename: name of file to create
 * @text_content: text to write to file
 *
 * Return: 1 if success otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
ssize_t wr_chars = 0;
int fd, len;

if (!filename)
{
return (-1);
}

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd < 0)
{
return (-1);
}

if (text_content)
{
len = _strlen(text_content);
wr_chars = write(fd, text_content, len);
}
close(fd);

if (wr_chars < 0)
{
return (-1);
}
return (1);
}
