#include <stdio.h>

/**
  * main - print the first 50 fibonacci numbers.
  * Return: 0.
  */

int main(void)
{
unsigned long count, i, d, j;
i = 0;
d = 1;
for (count = 0; count < 50; count++)
{
j = i + d;
i = d;
d = j;
printf("%lu", j);
if (count == 49)
putchar('\n');
else
{
printf(", ");
}
}
return (0);
}
