#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the main string to search within
 * @needle: the substring to search for
 *
 * Return: a pointer to the beginning of the located substring, or NULL
 *         if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
int i;
int j;
if (!*needle)
return (haystack);
for (i = 0; haystack[i]; i++)
{
if (haystack[i] == needle[0])
{
for (j = 0; needle[j]; j++)
{
if (needle[j] != haystack[i + j])
break;
}
if (!needle[j])
return (haystack + i);
}
}
return (NULL);
}
