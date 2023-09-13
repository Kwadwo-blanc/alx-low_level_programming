#include <stdio.h>

/**
  * main - print the first 98 fibonacci numbers.
  * Return: 0.
  */

int main(void)
{
int res;
unsigned long i, j, k;
unsigned long b, c, d, carry;
res = 0;
i = 0;
j = 1;
for (res = 1; res <= 91; res++)
{
k = i + j;
i = j;
j = k;
printf("%lu, ", k);
}
b = i % 1000;
i = i / 1000;
c = j % 1000;
j = j / 1000;
while (res <= 98)
{
carry = (b + c) / 1000;
d = (b + c) -carry * 1000;
k = (i + j) +carry;
b = c;
c = d;
i = j;
j = k;
if (d >= 100)
printf("%lu%lu", k, d);
else
printf("%lu0%lu", k, d);
if (res != 98)
printf(", ");
res++;
}
putchar('\n');
return (0);
}
