#include "main.h"

/**
 * times_table - prints the 9 times table,
 * beginning with 0
 */

void times_table(void)
{
int i;
int d;
int result;
for (i = 0; i < 10; i++)
{
for (d = 0; d < 10; d++)
{
result = d * i;
if (d == 0)
{
_putchar(result + '0');
}
if (result < 10 && d != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(result + '0');
}
else if (result >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
}
_putchar('\n');
}
}
