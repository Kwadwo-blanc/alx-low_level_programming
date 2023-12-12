#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The string containing the characters to search for.
 *
 * Return: A pointer to the first occurrence in @s of character in @accept,
 *         or NULL if no such character is found.
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *tempAccept = accept;

while (*tempAccept != '\0')
{
if (*s == *tempAccept)
{
return (s);
}
tempAccept++;
}

s++;
}

return (NULL);
}
