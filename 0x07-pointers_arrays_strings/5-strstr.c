#include "main.h"

/**
 * _strstr - Locate a substring within a string.
 * @haystack: The string to search in.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
int buy, a, b, c, d, i;
char *q;
buy = 0;
a = 0;
c = 0;
i = 0;
while (needle[buy] != '\0')
{
buy++;
}
while (haystack[i] != '\0')
{
i++;
}
if (buy == 0)
return (haystack);
while (haystack[c] != '\0')
{
if (haystack[c] == needle[0])
{
q = &haystack[c];
d = c;
a = 0;
for (b = 0; b < buy; b++)
{
if (haystack[d] == needle[b])
a++;
d++;
}
}
if (a == buy)
return (q);
c++;
}
return ('\0');
}
