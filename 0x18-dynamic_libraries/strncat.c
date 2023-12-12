#include "main.h"

/**
 * _strncat - Concatenates n characters from one string to another.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The number of characters to concatenate.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
char *originalDest = dest;

while (*dest != '\0')
{
dest++;
}

while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

*dest = '\0';

return (originalDest);
}
