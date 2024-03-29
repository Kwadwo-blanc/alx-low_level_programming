#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
#include <string.h>

/**
*is_positive_number - Check if a string represents a positive number.
*@s: The string to check.
*
*Return: 1 if it's a positive number, 0 otherwise.
*/
int is_positive_number(char *s)
{
if (*s == '\0')
return (0);
while (*s)
{
if (*s < '0' || *s > '9')
return (0);
s++;
}
return (1);
}

/**
*main - Entry point
*@argc: Number of command line arguments.
*@argv: Array of command line arguments.
*
*Return: 0 on success, 1 on error.
*/

int main(int argc, char *argv[])
{
int sum;
int j;
sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (j = 1; j < argc; j++)
{
if (!is_positive_number(argv[j]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[j]);
}
printf("%d\n", sum);
return (0);
}

