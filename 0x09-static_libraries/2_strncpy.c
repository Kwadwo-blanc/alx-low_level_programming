#include "main.h"

/**
 * _strncpy - copies up to n bytes from src to dest
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes to copy from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
