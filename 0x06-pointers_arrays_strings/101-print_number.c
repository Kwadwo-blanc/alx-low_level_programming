#include "main.h"

/**
 * print_number - Print an integer.
 * @n: The integer to print.
 */

void print_number(int n)
{
int i;
int j;
int digit;
int dig;
int pov;
unsigned int tap;
unsigned int numchar;
unsigned int num;
digit = 0;
if (n < 0)
{
_putchar('-');
tap = -n;
}
else
{
tap = n;
}
num = tap;
while (num >= 10)
{
num = num / 10;
digit++;
}
dig = digit + 1;
pov = 1;
i = 1;
while (i < dig)
{
pov = pov * 10;
i++;
}
j = pov;
while (j >= 1)
{
numchar = (tap / j) % 10;
_putchar(numchar + '0');
j = j / 10;
}
}
