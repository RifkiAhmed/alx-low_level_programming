#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * fl_close - function that close a file descriptor
 * @fd: file descriptor to close
 *
 * Return: 0 if success, otherwise -1
 */
int fl_close(int fd)
{
if (!close(fd))
return (0);
dprintf(STDERR_FILENO, "Error: failed close of fd %d\n", fd);
return (-1);

}

/**
 * _read - function that read from a file
 * @filename: file to read from
 * @fd: file descriptor
 * @buf: buffer to write to
 * @count: number of bytes
 *
 * Return: number of bytes read, or -1 if failure
 */
ssize_t _read(const char *filename, int fd, char *buf, size_t count)
{
ssize_t bytes = read(fd, buf, count);

if (bytes > -1)
return (bytes);
dprintf(STDERR_FILENO, "Error: failed read from file %s\n", filename);
return (-1);
}

/**
 * _write - function that write to a file
 * @filename: name of the file
 * @fd: file descriptor
 * @buf: buffer
 * @count: number of bytes
 *
 * Return: number of bytes written, or -1 if failure
 */
ssize_t _write(const char *filename, int fd, const char *buf, size_t count)
{
ssize_t bytes_written = write(fd, buf, count);

if (bytes_written > -1)
return (bytes_written);
dprintf(STDERR_FILENO, "Error: failed write to %s\n", filename);
return (-1);
}

/**
 * main - run code
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0
 */
int main(int argc, const char **argv)
{
int input, output;
ssize_t bytes;
char buffer[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(EXIT_FAILURE);
}
input = open(argv[1], O_RDONLY);
if (input < 0)
{
dprintf(STDERR_FILENO, "Error: failed read from file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
output = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC);
if (output < 0)
{
dprintf(STDERR_FILENO, "Error: failed write to %s\n", argv[2]);
fl_close(input);
exit(EXIT_FAILURE);
}

while ((bytes = _read(argv[1], input, buffer, 1024)))
{
if ((bytes | _write(argv[2], output, buffer, bytes)) < 0)
{
fl_close(input);
fl_close(output);
exit(EXIT_FAILURE);
}
}
if ((fl_close(input) | fl_close(output)) < 0)
exit(EXIT_FAILURE);
return (0);
}
