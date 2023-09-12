#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit
 * Return: Always 0.
 */

int print_last_digit(int n)
{
int last_digit;
if (n < 0)
{
n = -n;
}
if (n != 0)
{
last_digit = n % 10;
_putchar(last_digit + '0');
return last_digit;
}
else
{
_putchar('0');
return (0);
}
}
