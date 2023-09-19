#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: string to be printed in reverse
 * return: 0
 */

void print_rev(char *s)
{
int longa = 0;
int y;
while (*s != '\0')
{
longa++;
s++;
}
s--;
for (y = longa; y > 0; y--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
