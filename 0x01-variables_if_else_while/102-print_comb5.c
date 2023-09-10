#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success/correct)
 */
int main(void)
{
int first_num;
int second_num;
for (first_num = 0; first_num < 100 ; first_num++)
{
for (second_num = first_num + 1 ; second_num < 100; second_num++)
{
putchar (first_num / 10 + '0');
putchar (first_num % 10 + '0');
putchar (' ');
putchar (second_num / 10 + '0');
putchar (second_num % 10 + '0');
if (first_num == 98 && second_num == 99)
{
break;
}
putchar(',');
putchar (' ');
}
}
putchar('\n');
return (0);
}
