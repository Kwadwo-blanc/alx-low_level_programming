#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: The string to be measured
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
int length;
length = 0;
while (*s)
{
length++;
s++;
}
return (length);
}
