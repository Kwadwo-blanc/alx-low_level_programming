#include "main.h"
#include <stdbool.h>

/**
 * is_separator - Check if a character is a word separator.
 * @c: The character to check.
 *
 * Return: true if the character is a separator, false otherwise.
 */

bool is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";

for (int i = 0; separators[i]; i++)
{
if (c == separators[i])
{
return (true);
}
}
return (false);
}

/**
 * cap_string - Capitalize all words in a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */

char *cap_string(char *str)
{
bool new_word = true;
for (int i = 0; str[i]; i++)
{
if (new_word && str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - ('a' - 'A');
}
new_word = is_separator(str[i]);
}
return (str);
}
