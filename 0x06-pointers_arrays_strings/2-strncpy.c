#include "main.h"

/**
 * _strncpy - Copy a string with a specified maximum length.
 * @dest: The destination string where the copy will be placed.
 * @src: The source string to copy from.
 * @n: The maximum number of characters to copy from src.
 * Return: A pointer to the destination string (dest).
 */

char *_strncpy(char *dest, char *src, int n)
{
char *copy = dest;
while (*src && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
while (n > 0)
{
*dest = '\0';
dest++;
n--;
}
return (copy);
}
