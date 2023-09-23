#include "main.h"

/**
 * is_separator - Check if a character is a word separator.
 * @c: The character to check.
 *
 * Return: true if the character is a separator, false otherwise.
 */

int is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";
int i;
for (i = 0; separators[i]; i++)
{
if (c == separators[i])
{
return (1);
}
}
return (0);
}

/**
 * cap_string - Capitalize the first letter of each word in a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */

char *cap_string(char *str)
{
int capitalize_next;
capitalize_next = 1;
int i;
for (i = 0; str[i]; i++)
{
if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 'a' + 'A';
}
capitalize_next = is_separator(str[i]);
}
return (str);
}
