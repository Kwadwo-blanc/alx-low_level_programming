#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the converted string
 */
int _atoi(char *s)
{
int sign;
int result;
int i;
sign = 1;
result = 0;
i = 0;
if (s[0] == '-')
{
sign = -1;
i++;
}
for (; s[i] != '\0'; ++i)
{
if (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
}
else
{
break;
}
}
return (sign *result);
}
