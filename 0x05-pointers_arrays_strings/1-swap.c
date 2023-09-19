#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer that will be swap
 * @b: integer that will be swap
 */

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
