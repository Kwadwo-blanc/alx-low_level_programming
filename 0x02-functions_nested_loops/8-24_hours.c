#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */

void jack_bauer(void)
{
int i;
int d;
i = 0;
while (i < 24)
{
d = 0;
while (d < 60)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
_putchar(':');
_putchar((d / 10) + '0');
_putchar((d % 10) + '0');
_putchar('\n');
d++;
}
i++;
}
}
