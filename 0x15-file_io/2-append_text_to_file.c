#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: The name of the file
 * @text_content: The NULL-terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 *         -1 if the file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
ssize_t bytes_written;
ssize_t text_length;
int fd;

if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_WRONLY | O_APPEND);

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
