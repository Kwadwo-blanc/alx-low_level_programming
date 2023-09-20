#include "main.h"

/**
 * reverse_array - Reverse the content of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: Number of elements in the array.
 */

void reverse_array(int *a, int n)
{
int i;
int temp;
for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}
