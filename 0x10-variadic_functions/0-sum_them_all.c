#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters.
 *
 * Return: The sum of all the parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
va_list pa;
unsigned int i, sum = 0;

va_start(pa, n);

for (i = 0; i < n; i++)
sum += va_arg(pa, int);

va_end(pa);

return (sum);
}
