#include "main.h"

/**
 * _strcat - Concatenate two strings.
 * @dest: The destination string to which src will be appended.
 * @src: The source string to append to dest.
 * Return: A pointer to the resulting string (dest).
 */

char *_strcat(char *dest, char *src)
{
char *concatenated = dest;
while (*dest)
{
dest++;
}
while (*src)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (concatenated);
}
