#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024
/**
 * error_exit - Print an error message and exit with a specified code
 * @message: The error message to print
 * @exit_code: The exit code to use
 */
void error_exit(const char *message, int exit_code)

{
dprintf(STDERR_FILENO, "%s\n", message);
exit(exit_code);
}
/**
 * open_file - Open a file with specified flags and permissions
 * @filename: The name of the file to open
 * @flags: The flags to use when opening the file
 * @permissions: The permissions to set for the file
 * Return: The file descriptor or exits on error
 */

int open_file(const char *filename, int flags, int permissions)
{
int fd;
fd = open(filename, flags, permissions);
if (fd == -1)
{
error_exit("Error: Can't open file", 98);
}
return (fd);
}
/**
 * copy_file - Copy the content of one file to another
 * @fd_from: The file descriptor of the source file
 * @fd_to: The file descriptor of the destination file
 */

void copy_file(int fd_from, int fd_to)
{
ssize_t bytes_read, bytes_written;
char buffer[BUFFER_SIZE];

while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
error_exit("Error: Can't write to file", 99);
}
}

if (bytes_read == -1)
{
error_exit("Error: Can't read from file", 98);
}
}
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line arguments
 * Return: 0 on success, specific exit codes on failure
 */
int main(int argc, char *argv[])
{
char *file_from;
char *file_to;
int fd_from;
int fd_to;

if (argc != 3)
{
error_exit("Usage: cp file_from file_to", 97);
}

file_from = argv[1];
file_to = argv[2];

fd_from = open_file(file_from, O_RDONLY, 0664);
fd_to = open_file(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
copy_file(fd_from, fd_to);

if (close(fd_from) == -1 || close(fd_to) == -1)
{
error_exit("Error: Can't close file descriptor", 100);
}

return (0);
}
