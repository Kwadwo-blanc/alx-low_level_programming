#include "main.h"

/**
 * _strncat - Concatenate two strings with a limit on the number of bytes.
 * @dest: The destination string to which src will be appended.
 * @src: The source string to append to dest.
 * @n: The maximum number of bytes from src to append.
 * Return: A pointer to the resulting string (dest).
 */

char *_strncat(char *dest, char *src, int n)
{
char *concatenated = dest;
while (*dest)
{
dest++;
}
while (*src && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
*dest = '\0';
return (concatenated);
}
