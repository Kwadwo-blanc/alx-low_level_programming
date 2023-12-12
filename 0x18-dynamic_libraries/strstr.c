#include "main.h"

/**
 * _strstr - Locates a substring within another string.
 * @haystack: The string to be searched.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the beginning of the located substring, or NULL
 *         if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *startHaystack = haystack;
char *subNeedle = needle;

while (*haystack != '\0' && *subNeedle != '\0' && *haystack == *subNeedle)
{
haystack++;
subNeedle++;
}

if (*subNeedle == '\0')
{
return (startHaystack);
}

haystack = startHaystack + 1;
}

return (NULL);
}
