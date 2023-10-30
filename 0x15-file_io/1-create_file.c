#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Creates file with specified permission and writes text content
 * @filename: The name of the file to create
 * @text_content: The text content write to the file (NULL-terminated string)
 * Return: 1 on success, -1 on failure
 *         -1 if the file cannot be created, written, or write fails
 */
int create_file(const char *filename, char *text_content)
{
ssize_t bytes_written;
ssize_t text_length;
int fd;

if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
{
return (-1);
}

if (text_content != NULL)
{
text_length = 0;
while (text_content[text_length] != '\0')
{
text_length++;
}

bytes_written = write(fd, text_content, text_length);
close(fd);

if (bytes_written == -1 || bytes_written != text_length)
{
return (-1);
}
}
else
{
close(fd);
}
return (1);
}
