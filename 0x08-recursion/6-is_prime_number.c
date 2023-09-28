#include "main.h"

/**
 * is_prime_check - Recursive helper function to check if a number is prime.
 * @n: The number to check for primality.
 * @divisor: The current divisor to test.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */

int is_prime_check(int n, int divisor)
{
if (n <= 1)
{
return (0);
}
if (divisor == 1)
{
return (1);
}
if (n % divisor == 0)
{
return (0);
}
return (is_prime_check(n, divisor - 1));
}

/**
 * is_prime_number - Checks if an input integer is a prime number recursively.
 * @n: The number to check for primality.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
return (is_prime_check(n, n - 1));
}
