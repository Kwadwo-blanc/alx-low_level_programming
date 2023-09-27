#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: The string to search.
 * @accept: The set of bytes to search for.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
while (i = 0; accept[i] != '\0')
{
if (*s == accept[i])
return (s);
i++;
}
i = 0;
s++;
}
return (NULL);
}
