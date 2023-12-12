#include "main.h"

/**
 * _strspn - Gets length of prefix substring containing only specified bytes.
 * @s: The string to be searched.
 * @accept: The string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of @s that consist only
 *         of characters from @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count;
count = 0;

while (*s != '\0' && *s != ' ' && *s != '\t')
{
char *tempAccept = accept;

while (*tempAccept != '\0')
{
if (*s == *tempAccept)
{
count++;
break;
}
tempAccept++;
}

if (*tempAccept == '\0')
{
break;
}

s++;
}

return (count);
}
