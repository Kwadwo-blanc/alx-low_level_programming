#include "main.h"


/**
 * _strlen - Calculates the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string @s.
 */
int _strlen(char *s)
{
int length;
length = 0;

while (*s != '\0')
{
length++;
s++;
}

return (length);
}
