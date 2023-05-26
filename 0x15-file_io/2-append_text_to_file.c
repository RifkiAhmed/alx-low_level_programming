#include "main.h"

/**
 * append_text_to_file - append the text at the end of the file
 * @filename: name of the file
 * @text_content: text to append to the file
 *
 * Return: 1 if success otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
ssize_t wr_chars;
int fd, len;

wr_chars = 0;
if (!filename)
{
return (-1);
}
fd = open(filename, O_WRONLY | O_APPEND);

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