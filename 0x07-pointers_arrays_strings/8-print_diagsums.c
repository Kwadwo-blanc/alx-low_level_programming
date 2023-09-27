#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of the two diagonals of a square matrix.
 * @a: The square matrix represented as a 1D array.
 * @size: The size of the square matrix.
 */

void print_diagsums(int *a, int size)
{
int i, k, sum_1, sum_2, l, m;
sum_1 = 0;
sum_2 = 0;
m = 0;
l = size - 1;
for (i = 0; i < size; i++)
{
for (k = 0; k < size; k++)
{
if (i == k)
sum_1 += a[m];
if (k == l)
sum_2 += a[m];
m++;
}
l--;
}
printf("%i, %i\n", sum_1, sum_2);
}
