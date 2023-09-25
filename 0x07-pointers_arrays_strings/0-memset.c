#include "main.h"

/**
 * _memcpy - Copy memory area from src to dest.
 * @dest: Pointer to the destination memory area.
 * @src: Pointer to the source memory area.
 * @n: Number of bytes to copy.
 * Return: A pointer to the destination memory area (dest).
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
i = 0;
while (i < n)
{
dest[i] = src[i]; i++;
}
return (dest);
}
