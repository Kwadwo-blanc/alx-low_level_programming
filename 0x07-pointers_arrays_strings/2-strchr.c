#include "main.h"

/**
 * _strchr - Locate a character in a string.
 * @s: The string to search.
 * @c: The character to locate.
 *
 * Return: A pointer with a result
 */

char *_strchr(char *s, char c)
{

if (*s == '\0')
return (s);
while (*s)
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
return (s);
return ('\0');
}
