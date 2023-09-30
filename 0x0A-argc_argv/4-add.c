#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
for (l = 0; argv[i] != '\0' && l < strlen(argv[i]); l++)
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
int res, num1;
res = 0;
if (checker(argc, 1, 0, argv) ==1)
{
printf("Error\n");
return (1);
}
for (num1 = 1; num1 < argc; num1++)
res += atoi(argv[num1]);
printf("%d\n", res);
return (0);
}
