#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * checker - checks for valid input
 * @argc: argument count
 * @i: counter for argv[]
 * @l: counter for argv[][]
 * @argv: argument vector
 * Return: 0 on success, 1 on failure
 */

int checker(int argc, int i, unsigned int l, char *argv[])
{
for (i = 1; i <= argc; i++)
for (l = 0; argv[i][l] != '\0' && l < strlen(argv[i]); l++)
if (isdigit(argv[i][l]) == 0)
return (1);
return (0);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
int sum;
sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
int i;
for (i = 1; i < argc; i++)
{
int j;
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
