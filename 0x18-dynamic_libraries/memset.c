#include "main.h"

/**
 * _memset - Fills the first n bytes of memory with a constant byte.
 * @s: The pointer to the memory area to be filled.
 * @b: The constant byte to fill the memory with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
char *originalS = s;

while (n > 0)
{
*s = b;
s++;
n--;
}

return (originalS);
}
