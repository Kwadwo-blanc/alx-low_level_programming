#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/completed)
 */
int main(void)
{
int num_left;
int num_right;
for (num_left = 48; num_right <= 78; num_left++)
{
for (num_right = num_left + 1 ; num_right <= 78; num_right++)
{
putchar(num_left);
putchar (num_right);
if ((num_left == 56) && (num_right == 78))
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
