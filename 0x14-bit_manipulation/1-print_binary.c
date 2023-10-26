#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The unsigned long int to be converted and printed.
 */
void print_binary(unsigned long int n)
{
int i;
int bit_set;
bit_set = 0;

if (n == 0)
{
_putchar('0');
return;
}

for (i = (sizeof(unsigned long int) * 8 - 1); i >= 0; i--)
{
if ((n >> i) & 1)
{
_putchar('1');
bit_set = 1;
}
else if (bit_set)
{
_putchar('0');
}
}
}
