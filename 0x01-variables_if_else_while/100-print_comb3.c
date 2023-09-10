#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/completed)
 */
int main(void)
{
for (int i = 0; i < 9; i++)
{
for (int j = i + 1; j <= 9; j++)
{
int smallest = i * 10 + j;
putchar((smallest / 10) + '0');
putchar((smallest % 10) + '0');
if (i != 8 || j != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return 0;
}
