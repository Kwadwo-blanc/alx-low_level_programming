#include "main.h"

/**
 * is_separator - Check if a character is a word separator.
 * @c: The character to check.
 *
 * Return: true if the character is a separator, false otherwise.
 */

char *cap_string(char *str)
{
int i;
int j;
int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
int i = 0;
while (*(str + i) != '\0')
{
if (*(str + i) >= 'a' && *(str + i) <= 'z')
{
if (i == 0)
{
*(str + i) = *(str + i) - 32;
}
else
{
for (j = 0; j <= 12; j++)
{
if (a[j] == *(str + i - 1))
{
*(str + i) = *(str + i) - 32;
}
}
}
}
i++;
}
return (str);
}
