#include "main.h"

/**
 * sqrt_check - Recursive helper function to find the square root.
 * @n: The number to find the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: Natural square root of n.
 */

int sqrt_check(int n, int guess)
{
if (guess * guess == n)
{
return (guess);
}
else if (guess * guess > n)
{
return (-1);
}
else
{
return (sqrt_check(n, guess + 1));
}
}

/**
 * _sqrt_recursion - Returns the natural square root of a number recursively.
 * @n: The number to find the square root of.
 *
 * Return: Natural square root of n.
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else
{
return (sqrt_check(n, 2));
}
}
