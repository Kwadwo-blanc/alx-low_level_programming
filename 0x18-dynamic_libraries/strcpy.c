#include "main.h"

/**
 * _strcpy - Copies a string to another string.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
char *originalDest = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return (originalDest);
}
