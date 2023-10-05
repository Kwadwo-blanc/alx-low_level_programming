#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i, j, men1, men2;
i = 0;
j = 0;
men1 = 0;
men2 = 0;
while (s1 && s1[men1])
men1++;
while (s2 && s2[men2])
men2++;
if (n < men2)
s = malloc(sizeof(char) * (men1 + n + 1));
else
s = malloc(sizeof(char) * (men1 + men2 + 1));
if (!s)
return (NULL);
while (i < men1)
{
s[i] = s1[i];
i++;
}
while (n < men2 && i < (men1 + n))
s[i++] = s2[j++];
while (n >= men2 && i < (men1 + men2))
s[i++] = s2[j++];
s[i] = '\0';
return (s);
}
