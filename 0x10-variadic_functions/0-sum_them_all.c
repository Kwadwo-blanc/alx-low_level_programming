#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters.
 * Description: sum them all.
 * Return: The sum of all the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
return (0);

va_list ag;
unsigned int sum;
unsigned int i;
sum = 0;

va_start(ag, n);

for (i = 0; i < n; i++)
sum += va_arg(ag, int);
va_end(ag);
return (sum);
}
