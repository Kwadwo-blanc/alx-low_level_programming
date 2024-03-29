#include "main.h"
#include <string.h>

/**
 * reverse_string - Reverse a string in-place.
 * @str: The string to reverse.
 */
void reverse_string(char *str)
{
int length;
int start;
int end;
length = strlen(str);
start = 0;
end = length - 1;
while (start < end)
{
char temp = str[start];
str[start] = str[end];
str[end] = temp;
start++;
end--;
}
}

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
int len1;
int len2;
int carry;
int i;
int j;
int k;
len1 = strlen(n1);
len2 = strlen(n2);
carry = 0;
if (size_r <= len1 || size_r <= len2)
return (0);
i = j = k = 0;
while (i < len1 || j < len2 || carry)
{
int digit1;
int digit2;
int sum;
digit1 = (i < len1) ? n1[i] - '0' : 0;
digit2 = (j < len2) ? n2[j] - '0' : 0;
sum = digit1 + digit2 + carry;
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
