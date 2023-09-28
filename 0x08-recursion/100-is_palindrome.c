#include "main.h"

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
int length;
int i;
length = 0;
i = 0;
while (s[length] != '\0')
{
length++;
}
return (is_palindrome_recursive(s, 0, length - 1));
}
