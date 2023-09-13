#include "main.h"

/**
 * main - check the code
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
int i;
int result;
for (i = 0; i <= 9; i++)
{
result = 9 * i;
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
if (i < 9)
{
_putchar(',');
_putchar(' ');
}
else
{
_putchar('\n');
}
}
}
