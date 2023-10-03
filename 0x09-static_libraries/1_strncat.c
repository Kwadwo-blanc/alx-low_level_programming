#include "main.h"

/**
 * _strncat - concatenates two strings up to n bytes
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes to concatenate from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len;
int i;
dest_len = 0;
i = 0;
while (dest[dest_len] != '\0')
{
dest_len++;
}
while (src[i] != '\0' && i < n)
{
dest[dest_len + i] = src[i];
i++;
}
dest[dest_len + i] = '\0';
return (dest);
}
