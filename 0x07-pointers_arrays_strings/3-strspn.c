#include "main.h"

/**
 * _strspn - Get the length of a prefix substring.
 * @s: The string to search.
 * @accept: The characters to accept.
 *
 * Return: The number of bytes in the initial segment of s which consist only
 *         of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int length;
int found;
int i;
length = 0;
found = 0;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
length++;
found = 1;
break;
}
}
if (!found)
{
return (length);
}
s++;
}
return (length);
}
