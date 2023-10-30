#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 * Return: The actual number of letters it could read and print
 *         0 on error or if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters);

/**
 * open_file - Opens the file and returns the file descriptor
 * @filename: The name of the file to open
 * Return: The file descriptor or -1 on error
 */
int open_file(const char *filename)
{
int fd;
fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (-1);
}
return (fd);
}
/**
 * read_file - Reads the specified number of letters from the file
 * @fd: The file descriptor of the open file
 * @buffer: A buffer to store the read data
 * @letters: The number of letters to read
 * Return: The number of bytes read or -1 on error
 */
ssize_t read_file(int fd, char *buffer, size_t letters)
{
ssize_t bytes_read;
bytes_read = read(fd, buffer, letters);
return (bytes_read);
}
/**
 * write_to_stdout - Writes data to the standard output
 * @buffer: The data to be written
 * @bytes_read: The number of bytes to write
 * Return: The number of bytes written or -1 on error
 */
ssize_t write_to_stdout(char *buffer, ssize_t bytes_read)
{
ssize_t bytes_written;
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
return (bytes_written);
}
/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 * Return: The actual number of letters it could read and print
 *         0 on error or if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t bytes_read;
ssize_t bytes_written;
char *buffer;
int fd;

if (filename == NULL)
{
return (0);
}
fd = open_file(filename);
if (fd == -1)
{
return (0);
}
buffer = malloc(letters);
if (buffer == NULL)
{
close(fd);
return (0);
}
bytes_read = read_file(fd, buffer, letters);
if (bytes_read == -1)
{
close(fd);
free(buffer);
return (0);
}
bytes_written = write_to_stdout(buffer, bytes_read);

close(fd);
free(buffer);

return (bytes_written);
}
