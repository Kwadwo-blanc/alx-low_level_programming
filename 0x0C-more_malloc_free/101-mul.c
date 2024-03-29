#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
int i;
i = 0;
while (s[i])
{
if (s[i] < '0' || s[i] > '9')
return (0);
i++;
}
return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
printf("Error\n");
exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
char *s1, *s2;
int men1;
int men2;
int men;
int i;
int carry;
int digit1;
int digit2;
int *result;
int a;
a = 0;
s1 = argv[1], s2 = argv[2];
if (argc != 3 || !is_digit(s1) || !is_digit(s2))
errors();
men1 = _strlen(s1);
men2 = _strlen(s2);
men = men1 + men2 + 1;
result = malloc(sizeof(int) * men);
if (!result)
return (1);
for (i = 0; i <= men1 + men2; i++)
result[i] = 0;
for (men1 = men1 - 1; men1 >= 0; men1--)
{
digit1 = s1[men1] - '0';
carry = 0;
for (men2 = _strlen(s2) - 1; men2 >= 0; men2--)
{
digit2 = s2[men2] - '0';
carry += result[men1 + men2 + 1] + (digit1 *digit2);
result[men1 + men2 + 1] = carry % 10;
carry /= 10;
}
if (carry > 0)
result[men1 + men2 + 1] += carry;
}
for (i = 0; i < men - 1; i++)
{
if (result[i])
a = 1;
if (a)
_putchar(result[i] + '0');
}
if (!a)
_putchar('0');
_putchar('\n');
free(result);
return (0);
}
