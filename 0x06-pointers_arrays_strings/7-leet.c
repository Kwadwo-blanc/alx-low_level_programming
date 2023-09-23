#include "main.h"

/**
 * leet - Encode a string into "1337".
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */

char *leet(char *str)
{
int i;
int j;
char leet_map[] = "aAeEoOtTlL";
char leet_replacements[] = "4433007711";

for (i = 0; str[i]; i++)
{
for (j = 0; leet_map[j]; j++)
{
if (str[i] == leet_map[j])
{
str[i] = leet_replacements[j];
}
}
}
return (str);
}
