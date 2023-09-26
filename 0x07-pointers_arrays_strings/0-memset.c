#include "main.h"

/**
 * _memcpy - Copy memory area from b to s.
 * @s: Pointer to the destination memory area.
 * @b: Pointer to the source memory area.
 * @n: Number of bytes to copy.
 * Return: A pointer to the destination memory area (s).
 */

char *_memcpy(char *s, char *b, unsigned int n)
{
unsigned int i;
for (i = 0; n > 0; i++)
{
s[i] = b; n--;
}
return (s);
}
