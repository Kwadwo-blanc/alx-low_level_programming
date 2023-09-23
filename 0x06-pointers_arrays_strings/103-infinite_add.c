#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Add two numbers represented as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result or 0 if the result cannot be stored.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = strlen(n1);
int len2 = strlen(n2);
int carry = 0;
int i;
int j;
int k;
if (size_r <= len1 || size_r <= len2)
return (0);
i = j = k = 0;
while (i < len1 || j < len2 || carry)
{
int digit1 = (i < len1) ? n1[i] - '0' : 0;
int digit2 = (j < len2) ? n2[j] - '0' : 0;
int sum = digit1 + digit2 + carry;
if (k < size_r - 1)
{
r[k] = (sum % 10) + '0';
k++;
}
else
{
return (0);
}
carry = sum / 10;
i++;
j++;
}
r[k] = '\0';
reverse_string(r);
return (r);
}
