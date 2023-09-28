#include "main.h"

/**
 * _strlen - Computes the length of a string recursively.
 * @s: The string.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen(s + 1));
}

/**
 * is_palindrome_recursive - Recursive function check if a string is palindrome
 * @s: The string to check.
 * @start: The starting index of the string.
 * @end: The ending index of the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome_recursive(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}
if (s[start] != s[end])
{
return (0);
}
return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome recursively.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
int length = _strlen(s);
return (is_palindrome_recursive(s, 0, length - 1));
}
