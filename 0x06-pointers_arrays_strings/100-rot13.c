#include "main.h"

/**
 * rot13 - Encode a string using ROT13.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */

char *rot13(char *str)
{
int i;
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; str[i]; i++)
{
char *pos = alphabet;
while (*pos)
{
if (str[i] == *pos)
{
str[i] = rot13[pos - alphabet];
break;
}
pos++;
}
}
return (str);
}
