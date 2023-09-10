#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Variables
 * description: Prints last digits.
 *
 * Return: 0
 */
int main(void)
{
int n;
int b;
srand(time(0));
n = rand() - RAND_MAX / 2;
b = n % 10;
printf("Last digit of %d is %d ", n, b);
if (b > 5)
{
printf("and is greater than 5");
}
if (b == 0)
{
printf("and is 0");
}
if (b < 6 && b != 0)
{
printf("and is less than 6 and not 0");
}
printf("\n");
return (0);
}
